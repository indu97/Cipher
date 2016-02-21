/* Ceaser cipher created by Pranay Ankit Tiru and Indu C */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int n, i;

  printf("Enter the value of n\n");
  scanf("%d",&n);

  char a[n];
  printf("Enter the string\n");
  scanf("%s",a);

  int ch;
  printf("Enter 1. For encryption 2. For decryption ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:  for(i=0;i<n;i++)
               {
                 if(a[i]>=97&&a[i]<122)
                  {
                    a[i]=a[i]+2;
                 }
               }
                 printf("Coded string is ");
                 printf("%s",a);
             break;
    case 2:  for(i=0;i<n;i++)
               {
                 if(a[i]>=97&&a[i]<122)
                  {
                    a[i]=a[i]-2;
                 }
               }
                 printf("Decoded string is ");
                 printf("%s",a);
             break;
    default:  exit(0);
  }
  return(0);
}
