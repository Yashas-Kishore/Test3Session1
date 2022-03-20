#include<stdio.h>
#include <string.h> 

void input_string(char *a)
{
  printf("enter the string to check: \n");
  scanf("%[^\n]s",a);
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
      test=strtok(NULL," ,.-!?");
    }
  return x;
}
void output(char *string, int no_words)
{
 //  while(string != NULL)
 // {
 //   printf("%s ",string);
 //   string=strtok(NULL," ,.-!?");
 // }
 printf("the number of words in the sentence\n");
 printf("is %d\n",no_words);
}

int main()
{
  char a[1000];
  // char b[100];
  int c;
  input_string(a);
  // strcpy(b,a);
  c= count_words(a);
  output(a,c);
  return 0;
  }
// ok sstiring is r an array of characters
// you are not reading suprabatham
// thats why prcatice

// while(test != NULL)
// {
//    printf("%s ",test)
//    test=strtok(NULL," ,.-!?");
 //ok sir

