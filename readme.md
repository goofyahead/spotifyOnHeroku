//compile
clang ./src/main.c ./src/keys.c -I./include -L./lib -lspotify -o spot

//add local lib for execution in heroku
export LD_LIBRARY_PATH=./