var express = require("express");
var app = express();
app.use(express.logger());

app.get('/', function(request, response) {
  
  var that = this;
  var data = {};
  var item = 'goofyahead';


  console.log(item.toString().green + ' item processed'.green);
  console.log(__dirname);

  var childProcess = require('child_process'),spot;

  spot = childProcess.exec(__dirname + '/out2 ' + item , 
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
          console.log(data);
          response.send(data);
  });

  spot.on('exit', function (code) {
     console.log('Child process exited with exit code '+ code);
  });

});

