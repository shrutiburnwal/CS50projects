//https://ide.cs50.io/shrucodeti/cs50#openfile-README.md //link to show the work on cs50 ide as reference
//https://cs50.me/submissions/cs50/2017/x/greedy //LINK OF SUBMISSION


#include<stdio.h>
#include<cs50.h>
int main(void)
{
  int c,new_amount;
  float amount;
  printf("O hai!  How much change is owed?\n");
  amount=get_float();
  while(amount<0)
  {
    printf("How much change is owed?\n");
    amount=get_float();
  }
  new_amount=amount*100;
  c=0;
  while(new_amount>=25)
  {
    c=c+(new_amount/25);
    new_amount=new_amount%25;
  }
  while(new_amount>=10 && new_amount<25)
  {
    c=c+new_amount/10;
    new_amount=new_amount%10;
  }
  while(new_amount>=5 && new_amount < 10)
  {
    c=c+new_amount/5;
    new_amount=new_amount%5;
  } 
  if(new_amount>=1 && new_amount < 5)
  {
    c=c+new_amount;
  }
  printf("%d\n",c);
}  
