#include <iostream>
using namespace std;

int howManyGames(int p, int d, int m, int s) {
  int currentValue = p;
  int newValue = 0;
  int budget = s;
  int discount = d;
  int minimum = m;
  int games = 0;
  while((budget >= minimum) && (budget >= currentValue)){
    budget -= currentValue;
    newValue = currentValue - discount;
    if(newValue >= minimum)
      currentValue = newValue;
    else
      currentValue = minimum;
    games++;
  }
  return games;
}

int main() {
  cout << "HALLOWEEN SALE:" << endl << endl;

  cout << howManyGames(20, 3, 6, 80) << endl;
  cout << howManyGames(20, 3, 6, 85) << endl;
  cout << howManyGames(49, 87, 5, 8120) << endl;
  cout << howManyGames(100, 1, 1, 99) << endl;
  cout << howManyGames(100, 19, 1, 180) << endl;

  cout << endl;
  return 0;
}
