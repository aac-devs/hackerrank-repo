#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lonelyinteger(vector<int> a) {
  int value = 0;
  for(int x: a) value ^= x;
  return value;
}

int main() {
  cout << "LONELY INTEGER" << endl << endl;

  cout << lonelyinteger({1}) << endl;
  cout << lonelyinteger({1, 1, 2}) << endl;
  cout << lonelyinteger({0, 0, 1, 2, 1}) << endl;

  cout << endl;
  return 0;
}
