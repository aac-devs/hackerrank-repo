#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr) {
  vector<int> frecuency = {0, 0, 0, 0, 0};
  for(int x: arr){
    switch (x) {
      case 1: frecuency[0]++; break;
      case 2: frecuency[1]++; break;
      case 3: frecuency[2]++; break;
      case 4: frecuency[3]++; break;
      case 5: frecuency[4]++; break;
    }
  }
  int greater = frecuency[0];
  int index = 1;
  for(int i = 1; i < 5; i++){
    if(frecuency[i] > greater){
      greater = frecuency[i];
      index = i + 1;
    }
  }
  return index;
}

int main() {
  cout << "MIGRATORY BIRDS" << endl << endl;
  cout << migratoryBirds({1, 4, 4, 4, 5, 3}) << endl;
  cout << migratoryBirds({1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4}) << endl;
  cout << endl;
  return 0;
}
