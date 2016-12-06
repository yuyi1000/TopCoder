// Problem Statement
// In a galaxy far far away... each week has N days.
// Obi-Wan has exactly N shirts.
// The shirts are numbered 1 through N.
// Each day he wears one of those N shirts.
// Each week he wears each shirt exactly once. 

// In different weeks Obi-Wan may wear his shirts in different orders.
// However, not all orders are always possible.
// Whenever Obi-Wan wears a shirt for a day, he has to wash it before he can use it again.
// Washing and drying a shirt takes N-2 full days.
// In other words, if he wears a shirt on day x, the earliest day when he can wear it again is day x+N-1. 

// The Jedi council recently sent Obi-Wan on a mission that lasted for some unknown number of full N-day weeks. He remembers the order in which he wore his shirts during the first week of the mission. He also remembers the order in which he wore his shirts during the last week of the mission. You are given this information in s firstWeek and lastWeek. Each of these s contains N elements: the numbers of shirts he wore during that week, in order. 

// For example, assume that N = 4, firstWeek = {1,2,3,4}, and lastWeek = {4,3,2,1}. It is possible that this particular mission took four weeks. One possible order in which Obi-Wan could have worn his shirts looks as follows:
// week 1: {1,2,3,4}
// week 2: {2,3,4,1}
// week 3: {3,4,2,1}
// week 4: {4,3,2,1}
// Given firstWeek and lastWeek, compute and return the smallest number of weeks the mission could have taken.
// Definition
// Class: AttackOfTheClones
// Method: count
// Parameters: vector <int>, vector <int>
// Returns: int
// Method signature: int count(vector <int> firstWeek, vector <int> lastWeek)
// (be sure your method is public)
// Limits
// Time limit (s): 2.000
// Memory limit (MB): 256
// Notes
// - N can be calculated as the number of elements of firstWeek
// Constraints
// - firstWeek will contain between 2 and 2500 integers inclusive.
// - firstWeek and lastWeek will contain the same number of elements.
// - firstWeek and lastWeek will represent permutations of the first N positive integers.
// Examples
// 0)
// {1,2,3,4}
// {4,3,2,1}
// Returns: 4
// The example from the problem statement.
// 1)
// {1,2,3,4}
// {1,2,3,4}
// Returns: 1
// Be careful! The first week and the last week can be indeed the same week.
// 2)
// {8,4,5,1,7,6,2,3}
// {2,4,6,8,1,3,5,7}
// Returns: 7
// This problem statement is the exclusive and proprietary property of TopCoder, Inc. Any unauthorized use or reproduction of this information without the prior written consent of TopCoder, Inc. is strictly prohibited. (c)2003, TopCoder, Inc. All rights reserved.

#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <cmath>

using namespace std;

class AttackOfTheClones 
{
  
public:
  
  int count (vector<int> firstWeek, vector<int> lastWeek)
  {
    int max_shift = 0;
    for (int i = 0; i < firstWeek.size(); i++) {
      for (int j = 0; j < lastWeek.size(); j++) {
        if (firstWeek[i] == lastWeek[j]) {
          int t = i - j;
          if (t > max_shift) {
            max_shift = t;
          }
        }
      }
    }
    return max_shift + 1;
  }

};

int main()
{
  AttackOfTheClones ac;
  int arr1a[] = {1,2,3,4};
  int arr1b[] = {4,3,2,1};
  vector<int> v1a (arr1a, arr1a + sizeof(arr1a) / sizeof(int));
  vector<int> v1b (arr1b, arr1b + sizeof(arr1b) / sizeof(int));

  int arr2a[] = {1,2,3,4};
  int arr2b[] = {1,2,3,4};
  vector<int> v2a (arr2a, arr2a + sizeof(arr2a) / sizeof(int));
  vector<int> v2b (arr2b, arr2b + sizeof(arr2b) / sizeof(int));


  int arr3a[] = {8,4,5,1,7,6,2,3};
  int arr3b[] = {2,4,6,8,1,3,5,7};
  vector<int> v3a (arr3a, arr3a + sizeof(arr3a) / sizeof(int));
  vector<int> v3b (arr3b, arr3b + sizeof(arr3b) / sizeof(int));


  int r1 = ac.count(v1a, v1b);
  cout << "test1: " << r1 << endl;

  int r2 = ac.count(v2a, v2b);
  cout << "test2: " << r2 << endl;  

  int r3 = ac.count(v3a, v3b);
  cout << "test3: " << r3 << endl;  

}
