#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

//usign namespace std;

int main(){

  int len = 0;
  int ii, x;
  std::vector<int> vec_container;

  std::cin >> len;

  while (std::cin >> ii)
  {
    vec_container.push_back(ii);

    if(x == len)
      break;

    x++;
  }

  std::sort(vec_container.begin(), vec_container.end());


  for (size_t i = 0; i < vec_container.size(); i++)
  {
    std::string temp = std::to_string(vec_container.at(i));
    std::cout << temp  << " ";
  }

  return 0;

}
