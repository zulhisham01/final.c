#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

#define NUM_LENGTH 5
#define NUM_WAIT_INTERVAL 2

void sigint_handler(int sig) {
   printf("You Enter a Wrong Input\n");
}
void idNumber(char number[NUM_LENGTH; i++)
{
  srand(getpid()+getppid());
  number[0]=50+rand()%7;
    for(int i = 1; i < NUM_LENGTH; i++){
        number[1]+ 49+rand()%7;
}
number[NUM_LENGTH]='\0';
}
int main(void){
     while(1) {
               void sigint_handler(int sig);
               if(signal(SIGINT, sigint_handler) == SIG_ERR)
               {
                perror("fork");
                exit(1);
               }
int fd[2];
char number[NUM-LENGTH+1];
char s[50]
char buffer[NUM_LENGTH=1];

pipe(fd);
pid_t pid=fork();
if(pid == 0) {
idNumber(nunber);
close(fd[0]);
write(fd[1],number,NUM_LENGTH +1);
printf('Enter Your Name:\n");
fgets(s, 50, stdin);
printf("Your Name is : %s\n", s);

sleep(NUM_WAIT_INTERVAL);
exit(EXIT_SUCCESS);
}

if(pid > 0) {
    wait(NULL);
    close(fd[1]);
    read(fd[0],buffer,NUM_LENGTH + 1);
    close(fd[0]);
    printf("This is your password: %s\n",buffer);
    }
}
return EXIT_SUCCESS;
}

