#include <iostream>
using namespace std;

int camelcase(string s) {
    int count = 1;
    for(int x: s)
        if((int)x < 97) count++;
    return count;
}

int main() {
  cout << camelcase("saveChangesInTheEditor") << endl;
  return 0;
}
