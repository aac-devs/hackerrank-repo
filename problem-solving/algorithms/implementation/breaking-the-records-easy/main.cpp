#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
  int min = scores[0], max = scores[0];
  vector<int> records = {0, 0};
  for(int x: scores){
    if(x > max){
      max = x;
      records[0]++;
    }
    if(x < min){
      min = x;
      records[1]++;
    }
  }    
  return records;
}

int main() {
  cout << "BREAKING THE RECORDS" << endl << endl;
  vector<int> rec1 = breakingRecords({10, 5, 20, 20, 4, 5, 2, 25, 1}); 
  for(int x: rec1) cout << x << " ";
  cout << endl;
  vector<int> rec2 = breakingRecords({3, 4, 21, 36, 10, 28, 35, 5, 24, 42}); 
  for(int x: rec2) cout << x << " ";
  cout << endl << endl;
  return 0;
}
