#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

  int list_size = 0;
  int ii, x = 0;
  int pos;
  int range_bottom, range_top;

  vector<int> vec_list;

  cin >> list_size;

  while (std::cin >> ii)
  {
    vec_list.push_back(ii);

    if(x == list_size - 1)
      break;
    x++;
  }

  cin >> pos;

  x = 0;
  while (cin >> ii)
  {
    if (x == 0)
      range_bottom = ii;
    else
    {
      range_top = ii;
      break;
    }
    ++x;
  }

  std::cout << vec_list.size() << std::endl;

  vec_list.erase(vec_list.begin() + (pos-1));
  vec_list.erase(vec_list.begin() + (range_bottom-1), vec_list.begin() + (range_top-1));

  std::cout << vec_list.size() << std::endl;

  for (size_t i =0; i<vec_list.size(); i++)
  {
    cout << vec_list.at(i) << " ";
  }


    return 0;
}
