//https://ide.cs50.io/shrucodeti/cs50#openfile-README.md //link for reference
//https://cs50.me/submissions/cs50/2017/x/mario/less //LINK OF SUBMISSION


#include<stdio.h>
#include<cs50.h>
int main(void)
{
  int c=1,j,height;
  printf("Height:");
  height=get_int();
  while(height<0||height>23)
  {
    printf("Retry:");
    height=get_int();  
  }
  while(c<=height)
  {
      j=0;
      while(j<height-c)
      {
          printf(" ");
          j++;
      }
      while(j<=height)
      {
          printf("#");
          j++;
      }
  c++;
  printf("\n");
  }  
}        
         
