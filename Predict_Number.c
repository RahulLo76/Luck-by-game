#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
int predict_number;
int random_number = (rand()%100)+1;
int no_of_pridiction = 0;

printf("Enter the Numbers between 1 to 100\n");
do
{
  scanf("%d", &predict_number);
  if(predict_number>random_number)
  {
    printf("Lower Number please\n");
  }
  else if(predict_number<random_number)
  {
    printf("Higher Number Please\n");
  }
  else{
    printf("Congrats! You Predicited The Number!!\n");
  }
  no_of_pridiction++;
}while(predict_number!=random_number);
printf("You have taken %d attempts\n",no_of_pridiction);
return 0;
}