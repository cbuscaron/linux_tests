#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

using namespace std;

int main ()
{
  int n = 0;
  while(n<10)
  {
    int rnd = rand() % 255;
    cout<< rnd << endl;

    n += 1; 
  }

  int a[42]; 
  std::cout << "Length of array = " << (sizeof(a)/sizeof(*a)) << std::endl;

  int *p = new int[42];
  std::cout << "Length of array = " << (sizeof(p)/sizeof(*p)) << std::endl;

  return 0;
}
