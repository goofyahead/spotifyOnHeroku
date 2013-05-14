#include <stdio.h>
#include <stdlib.h>

char *replace_str(char *str, char *orig, char *rep)
{
  static char buffer[4096];
  char *p;

  if(!(p = strstr(str, orig))) 
    return str;

  strncpy(buffer, str, p-str); // Copy characters from 'str' start to 'orig' st$
  buffer[p-str] = '\0';

  sprintf(buffer+(p-str), "%s%s", rep, p+strlen(orig));

  if(p = strstr(str, orig)) replace_str(buffer, orig, rep);
  return buffer;
}

char *replaceIncorrectCharacters (char *name){
    char * newName = replace_str(name, "\"", "'");
    newName = replace_str(newName, "[", " ");
    newName = replace_str(newName, "]", " ");
    newName = replace_str(newName, "{", " ");
    newName = replace_str(newName, "}", " ");
    newName = replace_str(newName, ",", " ");
    return newName;
}


int main(int argc, char **argv){
	char *currentUser = argv[1];

	printf("result: %s", replaceIncorrectCharacters(currentUser));
}