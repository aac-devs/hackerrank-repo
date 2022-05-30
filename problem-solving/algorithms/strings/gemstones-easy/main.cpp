#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<char> deleteRepeated(string s){
  vector<char> arr;
  bool add;
  for(int i = 0; i < s.size(); i++){
    add = true;
    for(int j = 0; j < arr.size(); j++){
      if(s[i] == arr[j]){
        add = false;
        j = arr.size();
      }
    }
    if(add) arr.push_back(s[i]);
  }
  return arr;
}

bool containChar(string s, char c){
  for(char x: s){
    if(x == c) return true;
  }
  return false;
}

int gemstones(vector<string> arr) {
  vector<char> first = deleteRepeated(arr[0]);
  int gems = first.size();
  bool decrease = false;
  for(int i = 0; i < first.size(); i++){
    decrease = false;
    for(int j = 1; j < arr.size(); j++){
      if(!containChar(arr[j], (char)first[i])){
        decrease = true;
        j = arr.size();
      }
    }
    if(decrease) gems--;
  }
  return gems;
}

int main() {
  cout << "GEMSTONES:" << endl << endl;

  cout << gemstones({"abcdde", "baccd", "eeabg"}) << endl;;
  cout << gemstones({"basdfj", "asdlkjfdjsa", "bnafvfnsd", "oafhdlasd"}) << endl;
  cout << gemstones({"vtrjvgbj", "mkmjyaeav", "sibzdmsk"}) << endl;

  cout << endl;
  return 0;
}
