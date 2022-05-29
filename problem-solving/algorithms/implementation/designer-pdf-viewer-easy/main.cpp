#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
  vector<int> sizes;
  for(int x: word) sizes.push_back(h[x - 97]);
  int greater = sizes[0];
  for(int x: sizes) if(x > greater) greater = x;
  return greater * word.size();
}

int main() {
  cout << "DESIGNER PDF VIEWER" << endl << endl;

  cout << designerPdfViewer({1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}, "abc") << endl;
  cout << designerPdfViewer({1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7}, "zaba") << endl;

  cout << endl;
  return 0;
}
