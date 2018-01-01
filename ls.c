#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[]) {
  printf("%s\n", "wewe");
  pid_t pid = fork();
  if (pid != 0) { //Father
    waitpid(pid,NULL,0);
    printf("I've waited for my child\n");
  }
  else{
    printf("I'm Child, pid is %d\n",getpid());
    system("pwd");
  }
  return 0;
}
