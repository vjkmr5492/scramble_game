#include <cs50.h>
#include<stdlib.h>
#include <stdio.h>
#include<time.h>
void clear();

int main(int argc,char ** argv)
{
  /*string dir;
  dir=dirname(mydirname.c);
  printf("%s\n",dir);*/
  clear();
  int now=time(NULL);
  printf("%d\n",now);
  return 0;
}
void clear()
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}
  
