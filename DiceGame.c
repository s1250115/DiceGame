#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ret1,ret2;
  char name[20];

  srand(time(NULL));

  ret1 = 1 + rand() % 6;
  ret2 = 1 + rand() % 6;

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n\n",name);
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",ret1);
  printf("Die 2: %d\n",ret2);
  printf("Total value: %d\n",ret1+ret2);

  if(ret1+ret2 > 7) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  

  return 0;
}
  
