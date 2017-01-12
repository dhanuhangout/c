/*
 * This program displays the names of all files in the current directory.
 * Refs:
 * http://stackoverflow.com/questions/4204666/how-to-list-files-in-a-directory-in-a-c-program
 * http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1046380353&id=1044780608
 * Comment # 105
 */

#include <dirent.h> 
#include <stdio.h> 

int main(void)
{
  DIR *d;
  struct dirent *dir;
  d = opendir(".");
  if (d)
  {
    while ((dir = readdir(d)) != NULL)
    {
      printf("%s\n", dir->d_name);
    }

    closedir(d);
  }

  return(0);
}
