#include <iostream>
#include <bitset>
#include <math.h>
#include <iomanip>
#include <ios>
using namespace std;

long long int sumXor(long long int n) {
  long long int div = n;
  int zeros = 0;
  while(div > 0){
    if(div % 2 == 0) zeros++;
    div /= 2;
  }  
  return (zeros == 0) ? 1 : pow(2, zeros);
}

int main() {
  cout << "SUM VS XOR" << endl << endl;

  cout << sumXor(5) << endl;
  cout << sumXor(10) << endl;
  cout << sumXor(28) << endl;
  cout << sumXor(29) << endl;
  cout << sumXor(31) << endl;
  cout << sumXor(32) << endl;
  cout << sumXor(25) << endl;
  cout << sumXor(26) << endl;
  cout << sumXor(48) << endl;
  cout << sumXor(1000) << endl;
  cout << sumXor(510) << endl;
  cout << sumXor(512) << endl;
  cout << sumXor(398) << endl;
  cout << sumXor(65535) << endl;
  cout << sumXor(65536) << endl;
  cout << sumXor(1023) << endl;
  cout << sumXor(1024) << endl;
  // cout << sumXor(3434444444333) << endl;

  cout << endl;
  return 0;
}
