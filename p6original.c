#include<stdio.h>
#include <string.h> 

void input_string(char *a)
{
  printf("enter the string to check: \n");
  scanf("%s",a);
}
int count_words(char *string)
{
  char *test;
  int x=0;
  int i;
  test=strtok(string," ,.-!?");
  for(i=0;test;i++)
    {
      x=x+1;
    }
  return x;
}
void output(char *string, int no_words)
{
  printf("the number of words in the sentence/s %s is %d",string,no_words);
}

int main()
{
  char a;
  int b;
  input_string(&a);
  b= count_words(&a);
  output(&a,b);
  return 0;
}