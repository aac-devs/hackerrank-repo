#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    int size = p.size();
    vector<int> p_;
    vector<int> q(size + 1);
    vector<int> q_(size);

    p_.push_back(-1);
    for(int x: p) p_.push_back(x);
    
    q[0] = -1;
    for(int i = 1; i <= size; i++) q[p_[i]] = i;

    for(int i = 1; i <= size; i++) q_[i - 1] = q[q[i]];
    return q_;
}

int main() {
  cout << "SEQUENCE EQUATION" << endl;
  vector<int> seq1 = permutationEquation({2, 3, 1});
  vector<int> seq2 = permutationEquation({4, 3, 5, 1, 2});
  for(int x: seq1) cout << x <<endl;
  cout << endl;
  for(int x: seq2) cout << x <<endl;
  return 0;
}
