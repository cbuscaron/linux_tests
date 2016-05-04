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
    return 0;
}
