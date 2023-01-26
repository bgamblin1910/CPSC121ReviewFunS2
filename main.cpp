#include <iostream>
#include <vector>
#include "vecfunc.h"

using namespace std;

void fillVector(vector<int> &);
  //prototype?

int main() {
  vector<int> userNums;
  std::cout << "Hello World!\n";
  fillVector(userNums);
  findExtreme(userNums);
  cout << "size: " << userNums.size() << endl;
  return 0;
}
void fillVector(vector<int> cev) {
int num;


  for(int i = 0; i <5; i++)
    {
    cout<<"Type in an integer:";
    cin >> num;
    cev.push_back(num);
    }
  }
 void findExtreme(vector<int> vec)
  {
  int min = vec.at(0);
    int max = vec.at(0);
    for(int i=0; i < vec.size();i++)
      {
      if (vec.at(i) > max)
      {
        max = vec.at(i);
      }
      else if (vec.at(i) < min)
      {
        min = vec.at(i);
      }
        
      }
    cout << min << max;
    }
