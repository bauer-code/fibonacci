
/*
// Fibonacci Recursão
#include <stdio.h>
int fib(int n)
{
  if (n <= 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}
 
int main()
{
  int n = 8;
  printf("%d", fib(n));
  return 0;
}



*/

// Fibonacci Programação Dinâmica
#include <stdio.h> 
int fib(int n)
{

  int f[n + 1];
  int i;
 

  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++) {

    f[i] = f[i - 1] + f[i - 2];
  }
 
  return f[n];
}
 
int main()
{
  int n = 8;
  printf("%d", fib(n));
  return 0;
}

