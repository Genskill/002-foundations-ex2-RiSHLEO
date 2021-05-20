#include <stdio.h>
#include <cs50.h>
int main (void)
{
  float a,b,c;
  a=get_float("side 1 ");
  b=get_float("side 2 ");
  c=get_float("side 3 ");
  if (a>b&&a>c)
  {
    if((aa)==((bb)+(cc)))
      printf ("Yes");
    else
      printf ("No");
  }
  else if (b>a&&b>c)
  {
    if((bb)==((cc)+(aa)))
      printf ("Yes");
    else
      printf ("No");
  }
  else
  {
    if((cc)==((aa)+(b*b)))
      printf ("Yes");
    else
      printf ("No");
  }
}
[10:16 PM, 5/19/2021] Ahnaaf: pythagorean.c
[12:02 PM]
#include <stdio.h>
#include <cs50.h>
int main (void)
{
  int ch;
  ch=get_int("Enter type of pattern (1 or 2) ");
  int row;
  int space;
  if (ch==1)
  {
    row=get_int("Number of rows");
    for (int i=row;i>=1;i--)
    {
      for (int j=1;j<=i;j++)
        printf ("#");
      printf ("\n");
    }
  }
  else if (ch==2)
  {
    row=get_int("Number of rows");
    space=1;
    for (int i=row;i>=1;i--)
    {
      for (int j=1;j<=i-1;j++)
        printf (" ");
      for (int k=1;k<=space;k++)
        printf ("#");
      printf ("\n");
      space++;
     }
   }
    else
    printf("Inavalid choice");
}
