#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

using namespace std;

int main (int argc, char* argv[])
{
  int i;
    if (argc < 2) {
        printf ("No arguments.\n");
    } else {
        printf ("Arguments:\n");
        for (i = 1; i < argc; i++) {
            printf ("   %d: %s\n", i, argv[i]);
        }
    }

  int days[] = {1,2,3,4,5};
  int *ptr = days;
  std::cout<< sizeof((days))<<std::endl;
std::cout<< sizeof((days)[0])<<std::endl;
  std::cout<< ARRAY_SIZE(days)<<std::endl;
  std::cout<< sizeof(ptr) <<std::endl;
  
  

  int n = 0;
  srand(time(0));
  while(n<10)
  {
    
    int rnd = rand() % 255;
    cout<< rnd << endl;
    //srand(n);
    n += 1; 
  }

  int a[42]; 
  std::cout << "Length of array = " << (sizeof(a)/sizeof(*a)) << std::endl;

  int *p = new int[42];
  std::cout << "Length of array = " << (sizeof(p)/sizeof(*p)) << std::endl;

  return 0;
}
