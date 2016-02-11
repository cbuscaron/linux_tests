#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <stdint.h>

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

typedef struct //MotorTraceSample
{
  uint8_t state;
  uint8_t error;
  uint16_t target_torque;
  uint16_t measured_torque;
  uint16_t angle;
  uint16_t velocity;
  uint16_t current_a;
  uint16_t current_b;
  uint16_t current_c;
  uint16_t supply_voltage;
  uint16_t duty_a;
  uint16_t duty_b;
  uint16_t duty_c;
  uint16_t alignment_offset;
} MotorTraceSample_t;



//using namespace std;

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
  std::cout<<"-------------------------"<<std::endl;
  while(n<20)
  {
    
    //int rnd = rand() % 255;
    std::cout<< (int(rand() % 255) & 0xFF)  << std::endl;
    //srand(n);
    n += 1; 
  }
  std::cout<<"-------------------------"<<std::endl;

  int a[42]; 
  std::cout << "Length of array = " << (sizeof(a)/sizeof(*a)) << std::endl;

  int *p = new int[42];
  std::cout << "Length of array = " << (sizeof(p)/sizeof(*p)) << std::endl;
  
  std::cout<<"-------------------------"<<std::endl;
  std::cout<<"Struct test"<<std::endl;

  MotorTraceSample_t test1;
  test1.state = 42;
  test1.angle = 90;
  std::cout << int(test1.state) << std::endl;
  std::cout << sizeof(test1.state) << std::endl;
  std::cout << sizeof(test1.angle) << std::endl;
  std::cout << sizeof(test1) << std::endl;



  return 0;
}
