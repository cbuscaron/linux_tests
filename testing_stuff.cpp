/*
 * Copyright 2016 and beyond;
 * Author: Camilo F. Buscaron
 */

#include <limits.h>
#include <unistd.h>

#include <string>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <array>
#include <time.h>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <map>
#include <cstdlib>

void print_sample(std::ostream& ss)
{
  ss << "one: " << int(1) << std::endl;
  ss << "two: " << int(2) << std::endl;
  ss << "three: " << int(3) << std::endl;

}

int main(int argc, char* argv[])
{
    std::map<std::string, std::string> map;

    map["file1"] = "content1";
    map["file2"] = "content2";
    map["file3"] = "content3";
    map["file4"] = "content4";

    if (map.find("file5") == map.end())
    {
      std::cout << "Not Found" << std::endl;
    }
    else
    {
      std::cout << "Found" << std::endl;
    }

    if (map.find("file2") == map.end())
    {
      std::cout << "Not Found" << std::endl;
    }
    else
    {
      std::cout << "Found" << std::endl;
    }

    //getting local path linux
  char result[PATH_MAX];
  //ssize_t count = readlink( "/proc/self/exe", result, PATH_MAX );
  //std::cout << std::string( result, (count > 0) ? count : 0 ) << std::endl;
  std::cout << std::string(getcwd(result, sizeof(result))) << std::endl;


  std::stringstream ss;

  print_sample(ss);

  std::string full_string;
  std::string temp_str(ss.str());

  std::cout << temp_str << std::endl;
  char env_var[] = "DRIVER_IP";
  char set_ip[] = "DRIVER_IP=10.42.42.43";
  putenv(set_ip);

  if(const char* env_p = std::getenv("DRIVER_IP"))
        std::cout << "Your IP is: " << env_p << '\n';

  unsetenv(env_var);

  if(const char* env_p = std::getenv("DRIVER_IP"))
        std::cout << "Your IP is: " << env_p << '\n';
  //ss >> full_string;
/*
  while(ss>>full_string)
  {
    std::string value;
    ss >> value;
    std::cout << full_string << value << std::endl;
  }*/

    return 0;
}
