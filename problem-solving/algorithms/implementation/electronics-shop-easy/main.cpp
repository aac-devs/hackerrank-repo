#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
  int optimal = -1;
  for(int k = 0; k < keyboards.size(); k++){
    for(int d = 0; d < drives.size(); d++){
      if(((keyboards[k] + drives[d]) > optimal) && ((keyboards[k] + drives[d]) <= b)) 
        optimal = keyboards[k] + drives[d];
    }
  }
  return optimal;
}

int main() {
  cout << "ELECTRONICS SHOP" << endl << endl;
  cout << getMoneySpent({3, 1}, {5, 2, 8}, 10) << endl;
  cout << getMoneySpent({4}, {5}, 4) << endl;
  cout << endl;
  return 0;
}
