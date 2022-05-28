#include <iostream>
using namespace std;

string hackerrankInString(string s) {
    string hack = "hackerrank";
    int h = 0;
    for(int x: s)
        if(x == hack[h]) h++;
    if(h == 10) return "YES";
    return "NO";
}

int main() {
  cout << hackerrankInString("hereiamstackerrank") << endl;
  cout << hackerrankInString("hackerworld") << endl;
  cout << hackerrankInString("hhaacckkekraraannk") << endl;
  cout << hackerrankInString("rhbaasdndfsdskgbfefdbrsdfhuyatrjtcrtyytktjjt") << endl;
  return 0;
}
