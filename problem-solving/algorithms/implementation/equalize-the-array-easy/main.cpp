#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int> arr) {
  vector<int> counts(101);
  for(int i = 0; i < arr.size(); i++) counts[arr[i]] += 1;
  int larger = counts[1];
  for(int x: counts) if(x > larger) larger = x;
  return arr.size() - larger;
}


int main() {
  cout << "EQUALIZE THE ARRAY" << endl << endl;
  cout << equalizeArray({3, 3, 2, 1, 3}) << endl;
  cout << equalizeArray({1, 2, 3, 1, 2, 3, 3, 3}) << endl;
  return 0;
}
