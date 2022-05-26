#include <iostream>
using namespace std;

int countingValleys(int steps, string path) {
    int sea_level = 0, num_valleys = 0;
    for(int i = 0; i < steps; i++){
        if(sea_level == -1 && path[i] == 'U'){
            sea_level = 0;
            num_valleys++;
        }else if(path[i] == 'U') sea_level++;
        else if(path[i] == 'D') sea_level--;
    }
    return num_valleys;
}

int main() {
  cout << countingValleys(8, "UDDDUDUU") << endl;
  cout << countingValleys(12, "DDUUDDUDUUUD") << endl;
  return 0;
}
