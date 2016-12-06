#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // vector<int> v1;
  // v1.push_back(1);
  // v1.push_back(10);
  // v1.push_back(100);

  // v1 (4, 100);

  vector<int> v1 (10, 0);

  for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
    cout << *it << ' ';
  }
  cout << "\n";

  return 0;
}
