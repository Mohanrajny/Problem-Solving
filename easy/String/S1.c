#include<stdio.h>
void swap(char **str1, char **str2)
{
  char *temp;
  temp=*str1;
  *str1=*str2;
  *str2=temp;
}
void print(char *str1,char *str2)
{
  printf("str1 =%s \t str2 =%s \n",str1,str2);
}
int main()
{
  char *str1="mohan", *str2="raj";
  print(str1,str2);
  swap(&str1,&str2);
  print(str1,str2);
}