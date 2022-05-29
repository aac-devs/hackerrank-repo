#include <math.h>
#include <bits/stdc++.h>
using namespace std;

bool compare_halfs(long long int n, vector<int> arr){
    int half1 = arr.size() / 2;
    int half2 = arr.size() - half1;
    int n1{0}, n2{0}, n3{0}, n4{0};

    for(int i = 0; i < half1; i++) n1 += arr[i] * pow(10, i);
    for(int i = 0; i < half2; i++) n2 += arr[i + half1] * pow(10, i);

    int aux = half1;
    half1 = half2;
    half2 = aux;

    for(int i = 0; i < half1; i++) n3 += arr[i] * pow(10, i);
    for(int i = 0; i < half2; i++) n4 += arr[i + half1] * pow(10, i);
    
    if(n1 == 0 || n2 == 0) return false;
    if((n1 + n2) == n || (n3 + n4) == n) return true;
    return false;
}

bool compute(long long int n){
    if(n == 1) return true;
    long long int square = n * n;
    vector<int> digits;
    int mod;
    while(square > 0){
        mod = square % 10;
        digits.push_back(mod);
        square = square / 10;
    }
    return compare_halfs(n, digits);
}

void kaprekarNumbers(int p, int q) {
    int count = 0;
    for(int i = p; i <= q; i++){
        if(compute(i) == true){
            cout << i << " ";
            count++;
        }
    }
    if(count == 0) cout << "INVALID RANGE";
}

int main() {
  cout << "MODIFIED KAPREKAR NUMBERS" << endl << endl;
  kaprekarNumbers(1, 100);
  kaprekarNumbers(100, 300);
  cout << endl;
  return 0;
}
