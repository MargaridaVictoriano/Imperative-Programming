#include <ctype.h>
#include <stdio.h>
int length(char str[])
{
  int i=0;
  while(str[i] != '\0')
  i++;
  return i;
}


int palindrome(char str1[])
{
  int i=0; int j=length(str1)-1;
  while(i<j)
  {
    if(str1[i]==str1[j])
    {
      i++;
      j--;
    }
    else
    return 0;
  }
  return 1;
}


#include <stdio.h>
int main(void)
{
  char str2[]="ana";
  printf("%d\n", palindrome(str2));

}
