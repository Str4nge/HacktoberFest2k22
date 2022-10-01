#include <stdio.h>
int main()
{
  int n, r = 0, t;

  printf("Enter a number to check if it's a palindrome or not\n");
  scanf("%d", &n);

  t = n;

  while (t != 0)
  //Complete the While loop to find Palindrome or not

  if (n == r)
    printf("%d is a palindrome number.\n", n);
  else
    printf("%d isn't a palindrome number.\n", n);

  return 0;
}
