//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n;
    int a,b;
  	scanf("%d", &n);

  	//Write your code here
  	for(a=1;a<=n;a++)
    {
      for(b=1;b<=a;b++)
      {
        printf("*");
      }
      printf("\n");
    }

  	return 0;
}
