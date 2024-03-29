var express = require("express");
var app = express();
app.use(express.logger());
var key = 'arkguinscanfly2';

//request a user with a key
app.get('/spotify/:id', function(request, response) {
  var appKey = request.query.key;
  var item = request.params.id;
  if (key != appKey) {
    response.send(400);
    return;
  }

  var that = this;
  var data = {};

  console.log(item.toString().green + ' item processed'.green);
  console.log(__dirname);

  var childProcess = require('child_process'),spot;

  spot = childProcess.exec(__dirname + '/spotify ' + item , 
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
           response.send(400);
          }

          var out = stdout.toString();
          out = out.replace(/}{/g,'},{');  
          out = '{"lists" : [' + out + ']}';

          try {
            var musicJson = JSON.parse(out);
            data = musicJson;
          } catch (exception) {
            response.send(400);
          }

          response.send(data);
  });

  spot.on('exit', function (code) {
     console.log('Child process exited with exit code '+ code);
  });

});

var port = process.env.PORT || 5000;

app.listen(port, function() {
  console.log("Listening on " + port);
});