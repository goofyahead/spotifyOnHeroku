var laeh2 = require('laeh2');
var _x = laeh2._x;
var _e = laeh2._e;

var _ = require('underscore');
var colors = require('colors');

exports.SpotifyMusicListCrawler = function SpotifyMusicListCrawler() {

    this.process = function( item, data, api, callback) {
        api.logger.info(item);
        var that = this;
        var data = {};

        console.log(item.toString().green + ' item processed'.green);
        console.log(__dirname);

        var childProcess = require('child_process'),spot;

        spot = childProcess.exec(__dirname + '/../spot ' + item , 
            { encoding: 'utf8',
              timeout: 0,
              maxBuffer: 1000*1024,
              killSignal: 'SIGTERM',
              cwd: null,
              env: null },
              function (error, stdout, stderr) {
                if (error) {
                 console.log(error.stack);
                 console.log('Error code: ' + error.code);
                 console.log('Signal received: ' + error.signal);
                }

                var out = stdout.toString();
                out = out.replace(/}{/g,'},{');  
                out = '{"lists" : [' + out + ']}';       
                var musicJson = JSON.parse(out);
                
                data['music'] = musicJson;
                
                // api.storeData(item, data,_x(callback, true, callback));

                // **********************************
                 var url = 'http://open.spotify.com/user/' + item;
                console.log(url.toString().green);

                api.loadUrl(url, {}, _x(callback, true, function(error, body, res) {

                    $ = cheerio.load(body);

                    if ($('meta[property="fb:profile_id"]').length > 0) {
                        var fb_id = $('meta[property="fb:profile_id"]').attr('content');
                        console.log(fb_id.toString().yellow + ' found'.yellow + ' to spotify id: '.yellow + item.toString().yellow);
                        data['fb_id'] = fb_id;
                        console.log('go');
                        console.log(data);
                        //api.storeData(item, data,_x(callback, true, callback));
                        // api.engine.options.outIds.store(item.toString(), {'fb_id' : fb_id}, function () {});
                        
                        // api.storeData(item, null, callback);
                    }
                }));
                // **********************************
        });

        spot.on('exit', function (code) {
           console.log('Child process exited with exit code '+ code);
        });
    };
};
