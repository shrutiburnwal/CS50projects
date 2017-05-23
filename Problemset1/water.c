https://ide.cs50.io/shrucodeti/cs50#openfile-README.md  // link for cs50 ide for reference


#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int minutes = get_int();
    printf("Minutes:%d\n ",minutes);
    printf("Bottles:%d\n",(12*minutes));
}
