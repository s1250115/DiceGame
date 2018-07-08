#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ret1,ret2;

  srand(time(NULL));

  ret1 = 1 + rand() % 6;
  ret2 = 1 + rand() % 6;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",ret1);
  printf("Die 2: %d\n",ret2);
  printf("Total value: %d\n",ret1+ret2);

  return 0;
}
  
