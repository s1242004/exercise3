#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{

    srand((int)time(0));
   int rand_num1 = rand()%6 + 1;
   int rand_num2 = rand()%6 + 1;
   char name[60];
 
 printf("Rolling the dice...\n");
 printf("Die 1:%d\n", rand_num1);
 printf("Die 2:%d\n", rand_num2);
 printf("Total value: %d\n",rand_num1+rand_num2);
 if(rand_num1+rand_num2 > 7){
	 printf("You won");
 }
 else printf("You lose");
 return 0;
}
