#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string funnyString(string s) {
  vector<int> arr1, arr2;
  int diff_head, diff_tail, first, next;
  for(int i = 0; i < s.size() - 1; i++){
    first = s[i]; 
    next = s[i + 1];
    diff_head = (first < next) ? next - first : first - next;
    first = s[s.size() - 2 - i]; 
    next = s[s.size() - 1 - i];
    diff_tail = (first < next) ? next - first : first - next;
    if(diff_head != diff_tail) return "Not Funny";
  }
  return "Funny";
}


int main() {
  cout << "FUNNY STRINGS" << endl << endl;

  cout << funnyString("acxz") << endl;
  cout << funnyString("bcxz") << endl;
  cout << funnyString("ivvkxq") << endl;
  cout << funnyString("ivvkx") << endl;

  cout << endl;
  return 0;
}
