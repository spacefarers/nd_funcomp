#include <stdio.h>

int main()
{
  int a[5];  // the array of numbers
  int num;   // each number being read in

  printf("Enter 5 integers: ");

  for(int i = 0; i < 5; i++){
	scanf("%d", &num);
	a[i] = num;
  }

  // display in reverse order
  for(int i = 4; i >= 0; i--){
	printf("%d ", a[i]);
  }

  return 0;
}