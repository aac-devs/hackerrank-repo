#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string pangrams(string s) {
  vector<int> alpha(26);
  string message = "pangram";
  int letter, i;
  for(int x: s){
    letter = (int)x;
    if(letter >= 97 && letter <= 122) // minus
      alpha[letter - 32 - 65]++;          
    if(letter >= 65 && letter <= 90) // MAYUS
      alpha[letter - 65]++;          
  }
  i = 0;
  while(i < 26){
    if(alpha[i] == 0){
      message = "not pangram";
      i = 26;
    }
    i++;
  }
  return message;
}

int main() {
  cout << "PANGRAMS" << endl << endl;
  cout << pangrams("We promptly judged antique ivory buckles for the next prize") << endl;
  cout << pangrams("We promptly judged antique ivory buckles for the prize") << endl;
  cout << endl;
  return 0;
}
