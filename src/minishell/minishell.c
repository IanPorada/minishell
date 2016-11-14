#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "minishell.h"

/* runs the minishell */
void minishell()
{
  int i;
  int status;
  int exiting;
  char cwd [1024];
  char buffer [1024];
  char **vect;
  pid_t PID;

  exiting = 0;
  while (exiting == 0)
  {
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
      my_str(cwd);
    }

    my_str(" > ");
   
    if (read(0, buffer, sizeof(buffer)) < 0)
    {
      my_str("Read Error\n");
    }
    else if (my_strncmp(buffer, "exit", 4) == 0 && (buffer[4] == ' ' || buffer[4] == '\n' || buffer[4] == '\0'))
    {
      exiting = 1;
      my_str("Exiting...\n");
    }
    else
    {
      for (i = 0; i < (sizeof(buffer) - 1) && buffer[i] != '\n'; i++)
        ;

      buffer[i] = '\0';
      vect = my_str2vect(buffer);
  
      if (vect[0] == NULL)
      {
  
      }
      else if (my_strcmp(vect[0], "cd") == 0)
      {
        if (vect[1] == NULL)
        {
      
        }
        else if (chdir(vect[1]) < 0)
        {
          my_str("Cannot change to this directory\n");
        }
      }
      else if ((PID = fork()) < 0)
      {
        my_str("Fork Error\n");
      }
      else if (PID == 0)
      {
        status = execvp(vect[0], vect);
        exit(status);
      }
      else
      {
        wait(&status);
        if (WEXITSTATUS(status) == 255)
        {
          my_str("Cannot run this program\n"); 
        }
      }

      /* Free vect */
      for (i = 0; vect[i] != NULL; i++)
      {
        free(vect[i]);
        vect[i] = NULL;
      }
      free(vect);
      vect = NULL;
    }
  }
}
