#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int printMax(vector<int> arr){
  int max = 0;
  for(int x: arr) if(x > max) max = x;
  cout << max << endl;
  return max;
}

vector<int> decodeStr(string s){
  int oper = s[0] - 48;
  string value = "";
  int intValue = 0;
  if(oper == 1){
    for(int i = 2; i < s.size(); i++)
      value += s[i];
    intValue = stoi(value);
  }
  return {oper, intValue};
}

vector<int> getMax(vector<string> operations) {
  vector<int> item, stack, answers;
  for(int i = 0; i < operations.size(); i++){
    item = decodeStr(operations[i]);
    if(item[0] == 1){
      stack.push_back(item[1]);
    }else if(item[0] == 2){
      stack.pop_back();
    }else{
      answers.push_back(printMax(stack));
    }
  }
  return answers;
}

int main() {
  cout << "MAXIMUM ELEMENT" << endl << endl;

  vector<int> answers;
  answers = getMax({"1 97", "2", "1 20", "2", "1 26", "1 20", "2", "3", "1 91", "3"});

  cout << "--------------------------" << endl;
  for(int x: answers){
    cout << x << " ";
  }

  cout << endl;
  return 0;
}
