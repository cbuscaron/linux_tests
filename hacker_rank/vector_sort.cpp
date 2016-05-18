#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

//usign namespace std;

int main(){

  int len = 0;
  std::vector<int> vec_container;

  std::cin >> len;

  std::string raw_line;

  //getline(std::cin, raw_line);

  //std::cout << raw_line << std::endl;
  //std::string enter_key = "\n";
  int ii;
  int x;
  while (std::cin >> ii)
  {
    vec_container.push_back(ii);

    if(x == len)
      break;

    x++;
  }

  std::sort(vec_container.begin(), vec_container.end());



/*  while (getline(std::cin, raw_line, ' ') && raw_line != enter_key)
  {
    vec_container.push_back(atoi(raw_line.c_str()));
    //std::cout << raw_line;

  }*/


  for (size_t i = 0; i < vec_container.size(); i++)
  {
    //std::string temp(vec_container.pop_back())
    std::string temp = std::to_string(vec_container.at(i));
    std::cout << temp  << " ";
  }

  return 0;

}
