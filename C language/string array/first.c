#include <stdio.h>
int main(){
  char name[20];
  int j,sum=0,sum2=0;
  printf("enter your name\n");
  fgets(name,20,stdin);
  for(j=0;name[j]!='\0';j++)
  {
    sum++;
  }
  printf("this is your name : %s",name);
  printf("no of character in your name is : %d\n", sum);
  sum=0;
  for (j=0;name[j]!='\0';j++)
  {
    if (name[j]=='a'||name[j]=='e'||name[j]=='i'||name[j]=='o'||name[j]=='u'||
    name[j]=='A'||name[j]=='E'||name[j]=='I'||name[j]=='O'||name[j]=='U')
    {
      sum++;
    }
    else {
      sum2++;
    }
  }
  printf ("Number of vowel is : %d\n",sum);
  printf("number of consonant is : %d\n",sum2);
  

  return 0;
}