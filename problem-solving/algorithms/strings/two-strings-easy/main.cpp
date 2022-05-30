#include <iostream>
using namespace std;

bool usedLetter(string s, int letter){
  for(int i = 0; i < s.size(); i++){
    if(letter == s[i]) return true;
  }
  return false;
}

string twoStrings(string s1, string s2) {
  string done = "";
  for(int i = 0; i < s1.size(); i++){
    if(usedLetter(done, s1[i]) == false){
      done = done + s1[i];
      for(int j = 0; j < s2.size(); j++){
        if(s1[i] == s2[j])
          return "YES";
      }
    }
  }
  return "NO";
}


int main() {
  cout << "TWO STRINGS:" << endl << endl;

  cout << twoStrings("hello", "world") << endl;
  cout << twoStrings("hi", "world") << endl;
  cout << twoStrings("wouldyoulikefries", "abcabcabcabcabcabc") << endl;
  cout << twoStrings("hackerrankcommunity", "cdecdecdecde") << endl;
  cout << twoStrings("jackandjill", "wentupthehill") << endl;
  cout << twoStrings("writetoyourparents", "fghmqzldbc") << endl;
  cout << twoStrings("aardvark", "apple") << endl;
  cout << twoStrings("beetroot", "sandals") << endl;

  cout << endl;
  return 0;
}
