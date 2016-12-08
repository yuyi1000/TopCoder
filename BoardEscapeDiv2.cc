
#include <vector>
#include <iostream>
#include <tuple>

using namespace std;

class BoardEscapeDiv2 {

public:

  string findWinner(vector <string> s, int k) {
    int r, c;
    tie(r, c) = findT(s);
    if (r == -1 && c == -1) {
      cout << "can't find T in s." << endl;
    } else {
      if (k % 2 == 0) {
	if (isAjacentE(s, r, c)) return "Alice";
	return "Bob";
      } else {
	cout << "TO BE IMPLEMENTED." << endl;
      }
    }
    

    }
  }

private:

  pair<int, int> findT(vector <string> s) {
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < s[0].size(); j++) {
	if (s[i][j] == 'T')
	  return make_pair(i, j);
      }
    }
    return make_pair(-1, -1);
  } 
  
  // to find out whether a cell has an adjacent Exit cell 
  bool isAdjacentE(vector <string> s, int row, int col) {
    if (isCellE(s, row - 1, col - 1)) return true;
    if (isCellE(s, row - 1, col + 1)) return true;
    if (isCellE(s, row + 1, col - 1)) return true;
    if (isCellE(s, row + 1, col + 1)) return true;
    return false;
  }

  // to check whether a cell is Exit cell
  bool isCellE(vector <string> s, int row, int col) {
    int rowT = s.size();
    int colT = s[0].size();
    if (row < 0 || col < 0 || row >= rowT || col >= colT) return false;
    if (s[row][col] == 'E') return true;
    return false;
  }
  
};

int main()
{
  return 0;
}


