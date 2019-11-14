#include <stdio.h>
#include <string.h>

int main()
{
  char a[10000];
  int length;

  printf("Enter a string to calculate it's length\n");
  gets(a);

  length = strlen(a);
char c[length];
char b[length];
  printf("Length of the string = %d\n", length);
  for(int i=0;i<length;i++)
  {
      printf("gjgh");
      if(i==0)
         c[i] = a[i];
      else if(i%2==0)
        c[i] = a[i];
      else

        b[i] = a[i];
        for(int j=0;j<4;j++)
        {
            printf("%c c = ",c[j]);
            printf("%c b = ",b[j]);
        }

  }

  return 0;
}
