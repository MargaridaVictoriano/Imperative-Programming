#include <ctype.h>
#include <stdio.h>
int comprimento(char str[])
{
  int i=0;
  while(str[i] != '\0')
  i++;
  return i;
}


int palindromo(char str1[])
{
  int i=0; int j=comprimento(str1)-1;
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
  printf("%d\n", palindromo(str2));

}
