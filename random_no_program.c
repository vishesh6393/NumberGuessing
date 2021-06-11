// program for no genereator 
#include<stdio.h>
#include<time.h>
#include<math.h>
int main(){
int a;
int n;
int guess=0;
srand(time(0));
a=rand()%10;
// printf("%d\n",a);
printf("\t\t\t\t******************************************************************\n");
printf("\t\t\t\t******************\tNUMBER GUESSING GAME\t**********************\n");
printf("\t\t\t\t******************************************************************\n\n\n");
printf("\t\t\t\t ENTER THE NUMBER YOU HAVE GUESSED\n");

do
{
   scanf("%d",&n);

   guess+=1;
} while (a!=n);
printf("\t\t\t\t\byou have guessed in %d attempts\n",guess);
main();
return 0;

}

