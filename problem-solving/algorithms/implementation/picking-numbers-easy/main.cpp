#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> countValues(vector<int> arr){
  vector<int> counts(100);
  for(int i = 0; i < arr.size(); i++) counts[arr[i]]++;
  return counts;
}

int pickingNumbers(vector<int> a) {    
  int max = 0;
  vector<int> counts = countValues(a);
  for(int i = 0; i < counts.size() - 1; i++){
    if(counts[i] + counts[i + 1] > max) 
      max = counts[i] + counts[i + 1];
  }
  return max;
}


int main() {
  cout << "PICKING NUMBERS:" << endl << endl;

  cout << pickingNumbers({4, 6, 5, 3, 3, 1}) << endl;
  cout << pickingNumbers({1, 2, 2, 3, 1, 2}) << endl;
  cout << pickingNumbers({4, 2, 3, 4, 4, 9, 98, 98, 3, 3, 3, 4, 2, 98, 1, 98, 98, 1, 1, 4, 98, 2, 98, 3, 9, 9, 3, 1, 4, 1, 98, 9, 9, 2, 9, 4, 2, 2, 9, 98, 4, 98, 1, 3, 4, 9, 1, 98, 98, 4, 2, 3, 98, 98, 1, 99, 9, 98, 98, 3, 98, 98, 4, 98, 2, 98, 4, 2, 1, 1, 9, 2, 4}) << endl;
  cout << pickingNumbers({4, 97, 5, 97, 97, 4, 97, 4, 97, 97, 97, 97, 4, 4, 5, 5, 97, 5, 97, 99, 4, 97, 5, 97, 97, 97, 5, 5, 97, 4, 5, 97, 97, 5, 97, 4, 97, 5, 4, 4, 97, 5, 5, 5, 4, 97, 97, 4, 97, 5, 4, 4, 97, 97, 97, 5, 5, 97, 4, 97, 97, 5, 4, 97, 97, 4, 97, 97, 97, 5, 4, 4, 97, 4, 4, 97, 5, 97, 97, 97, 97, 4, 97, 5, 97, 5, 4, 97, 4, 5, 97, 97, 5, 97, 5, 97, 5, 97, 97, 97}) << endl;

  cout << endl;
  return 0;
}
