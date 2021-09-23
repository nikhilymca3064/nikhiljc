// guess.cpp.  Maggie Johnson
// Description: A guessing game where the player guesses
// the secret number.

#include <iostream>
#include <time.h>
using namespace std;

int main () {
  int random_number, guess;

  // Initialize random seed.
  srand (time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  cout << "Guess our number (1 to 100) ";
  if (!(cin >> guess)) {
    cout << "Please enter only numbers" << endl;
  } else {
    if (random_number < guess) cout << "The secret number is lower than " << guess << endl;
    else if (random_number > guess) cout << "The secret number is higher than" << guess << endl;
    else cout << "You guessed it: " << random_number << endl;
  }
  cout << "random: " << random_number << endl;
  return 0;
}