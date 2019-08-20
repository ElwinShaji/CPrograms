#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>

#define TOK_ADD 1
#define TOK_SUB 2
#define TOK_MUL 3
#define TOK_DIV 4
#define TOK_BYE 5

jmp_buf jmpbuffer;
int MAXLINE=100;
int result;


void  do_line(char *);

void cmd_bye(void);
void cmd_add(void);
void cmd_sub(void);
void cmd_mul(void);
void cmd_div(void);

int get_token(void);

int main(void)
{

   char line[MAXLINE];
   if (setjmp(jmpbuffer) != 0)
      printf("error\n");
   while (fgets(line, MAXLINE, stdin) != NULL)
       do_line(line);



   exit(0);

}


char *tok_ptr;   /* global pointer for get_token() */

void do_line(char *ptr)
{
    int cmd;    /* process one line of input */
    tok_ptr = ptr;

    while ((cmd = get_token()) > 0) {
    switch (cmd) { /* one case for each command */
        case TOK_ADD:
              cmd_add();
              break;
        case TOK_SUB:
              cmd_sub();
              break;

        case TOK_MUL:
              cmd_mul();
              break;

        case TOK_DIV:
              cmd_div();
              break;
        case TOK_BYE:
              cmd_bye();
              break;

        default : longjmp(jmpbuffer, 1);
                  break;
      }
      break;
    }

}
void cmd_add(void)
{
  tok_ptr = strtok(NULL, " ");
  int resulta = atoi(tok_ptr);
  tok_ptr = strtok(NULL, " ");
  int resultb = atoi(tok_ptr);

  if(resulta<0||resultb<0){
    longjmp(jmpbuffer, 1);
  }
  else
  printf(" %d\n", resulta+resultb);

}



void cmd_sub(void)
{

    tok_ptr = strtok(NULL, " ");
    int resulta = atoi(tok_ptr);
    tok_ptr = strtok(NULL, " ");
    int resultb = atoi(tok_ptr);

    if(resulta<0||resultb<0){
      longjmp(jmpbuffer, 1);
    }
    else if(resulta<resultb){
      longjmp(jmpbuffer, 1);
    }
    else
    printf(" %d\n", resulta-resultb);
}


void cmd_bye(void)
{
exit(0);
}


void cmd_mul(void)
{

    tok_ptr = strtok(NULL, " ");
    int resulta = atoi(tok_ptr);
    tok_ptr = strtok(NULL, " ");
    int resultb = atoi(tok_ptr);
    if(resulta<0||resultb<0){
      longjmp(jmpbuffer, 1);
    }
    else
    printf(" %d\n", resulta*resultb);
}

void cmd_div(void)
{

    tok_ptr = strtok(NULL, " ");
    int resulta = atoi(tok_ptr);
    tok_ptr = strtok(NULL, " ");
    int resultb = atoi(tok_ptr);

    if(resulta<0||resultb<0){
      longjmp(jmpbuffer, 1);
    }

    else if(resultb==0){
    longjmp(jmpbuffer, 1);
}

    else
    printf("%d\n", resulta/resultb);
}


int a;
int get_token(void){


  tok_ptr = strtok(tok_ptr, " ");

if(strcmp(tok_ptr,"add")==0){
   return 1;
}
else if(strcmp(tok_ptr,"sub")==0){
  return 2;
}
else if(strcmp(tok_ptr,"mul")==0){
  return 3;
}
else if(strcmp(tok_ptr,"div")==0){
  return 4;
}
else if(strcmp(tok_ptr,"bye\n")==0){
  return 5;
}
else
  longjmp(jmpbuffer, 1);

return -1;

}
/* fetch next token from line pointed to by tok_ptr */
