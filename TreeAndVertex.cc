
#include <vector>
#include <iostream>
using namespace std;

class TreeAndVertex 
{

  vector<int>::iterator max_element(vector<int>::iterator b, vector<int>::iterator e) 
  {
    vector<int>::iterator p = b;
    while (b != e) {
      b++;
      if (*b > *p) {
        p = b;
      }
    }
    return p;
  }

public:

  int get(vector<int> tree)
  {
    int n = tree.size() + 1;
    vector<int> degree(n, 0);
    for (int i = 0; i < n - 1; i++) {
      degree[i+1]++;
      degree[tree[i]]++;
    }
    return *max_element(degree.begin(), degree.end());
  }



};

int main()
{
  
  TreeAndVertex tav;

  int arr1[] = {0, 1, 2, 3};
  vector<int> tree1 (arr1, arr1 + sizeof(arr1) / sizeof(int));
  int r1 = tav.get(tree1);
  cout << "tree1: " << r1 << endl;

  int arr2[] = {0, 0, 2, 2};
  vector<int> tree2 (arr2, arr2 + sizeof(arr2) / sizeof(int));
  int r2 = tav.get(tree2);
  cout << "tree2: " << r2 << endl;

  int arr4[] = {0, 0, 0, 1, 1, 1};
  vector<int> tree4 (arr4, arr4 + sizeof(arr4) / sizeof(int));
  int r4 = tav.get(tree4);
  cout << "tree4: " << r4 << endl;
    

  return 0;
}


