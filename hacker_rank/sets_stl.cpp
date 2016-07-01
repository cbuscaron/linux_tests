#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

// set<int>st; //Creates a set of integers.
// int length=s.size(); //Gives the size of the set.
// s.insert(x); //Inserts an integer x into the set s.
// s.erase(val); //Erases an integer val from the set s.

// set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
// Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().

int main() {

  set<int>  set_container;
  vector<string> responses;
  int query_size = 0;
  int cmd = 0;
  int value = 0;
  int ii;

  cin >> query_size;



  for (int i = 0; i < (query_size); i++)
  {
    int x = 0;
    while (cin >> ii)
    {
      if (x == 0)
        cmd = ii;
      else
      {
        value = ii;
        break;
      }
      ++x;
    }

    switch (cmd)
    {
      case 1:
        set_container.insert(value);
        break;

      case 2:
        set_container.erase(value);
        break;

      case 3:
        if (set_container.find(value) == set_container.end())
          responses.push_back("No");
        else
          responses.push_back("Yes");
        break;
    }
  }

  for (size_t i =0; i< responses.size(); i++)
    cout << responses.at(i) << endl;

    return 0;
}
