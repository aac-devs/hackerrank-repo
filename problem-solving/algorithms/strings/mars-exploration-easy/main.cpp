#include <iostream>
using namespace std;

int marsExploration(string s) {
  int size = s.size() / 3;
  int count = 0;
  for(int i = 0; i < size; i++){
    if(s[i * 3] != 'S') count++;
    if(s[i * 3 + 1] != 'O') count++;
    if(s[i * 3 + 2] != 'S') count++;
  }
  return count;
}

int main() {
  cout << "MARS EXPLORATION:" << endl << endl;

  cout << marsExploration("SOSSPSSQSSOR") << endl;
  cout << marsExploration("SOSSOT") << endl;
  cout << marsExploration("SOSSOSSOS") << endl;

  cout << endl;
  return 0;
}
