#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c) {
  int count = 0;
  int index = 0;
  int i = 0;
  while((index < (c.size() - 1)) && (i < 100)){
    if(c[index + 2] == 0) index += 2;
    else index++;
    count++;
    i++;
  }
  return count;
}

int main() {
  cout << "JUMPING ON THE CLOUDS" << endl << endl;

  cout << jumpingOnClouds({0, 0, 1, 0, 0, 1, 0}) << endl;
  cout << jumpingOnClouds({0, 0, 0, 1, 0, 0}) << endl;

  cout << endl;
  return 0;
}
