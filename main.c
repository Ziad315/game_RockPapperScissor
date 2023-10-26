#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int game(char human,char computer)
{
   if(human == computer)
   {
       return -1;
   }
   if(human=='r' && computer=='p')
   {
       return 0;
   }
   else if(human=='p' && computer=='r')
   {
       return 1;
   }
   if(human=='r' && computer=='s')
   {
       return 1;
   }
   else if (human=='s' &&computer=='r')
   {
       return 0;
   }
   if (human=='p' &&computer=='s')
   {
       return 0;
   }
   else if(human=='s' && computer=='p')
   {
       return 1;
   }
}


int main()
{
          int n;
          char human;
          char computer;
          char result;



          srand(time(NULL));
          n=rand()%100;
          if (n<33)
          {
              computer='r';
          }
          else if(n>33 && n<66)
          {
              computer='p';
          }
          else{
            computer='s';
          }
          printf("\n\n\n\n\n\n\t\t\tEnter r for ROCK, p for PAPER, s for SCISSOR\n");
          scanf("%c",&human);
          result=game(human,computer);
          if (result==-1)
          {
              printf("\n\n\n\n\t\t\tGame draw\n");
          }
          else if(result==1)
          {
              printf("\n\n\n\n\t\t\tYOU won!\n");
          }
          else
          {
             printf("\n\n\n\n\t\t\tYOU LOSE!\n");
          }
          printf("you chose %c and computer chose %c",human,computer);

}
