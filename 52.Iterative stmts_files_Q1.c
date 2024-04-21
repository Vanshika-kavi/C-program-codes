#include <stdio.h>
#include<stdlib.h>
int main()
{
  char ch;
  FILE*fptr;
  fptr=open("text.txt","r");
  if(fptr==NULL)
  {
      printf("File not available.");
      exit(0);
  }
  else
    while((ch=getc(fptr))!=EOF)
  {
  int couponNum;
int sumOfDigits = (couponNum % 10) + ((couponNum / 10) % 10);
if (sumOfDigits % 2 == 0) {
    printf("Customer is eligible for additional discount!\n");
} else {
    printf("Customer is not eligible for additional discount.\n");
}
return 0;
}
 fclose(fptr);
}
