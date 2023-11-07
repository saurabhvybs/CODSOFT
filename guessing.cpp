#include <iostream>
#include <time.h>

using namespace std;

int main() {
  int number, guess;
  srand((unsigned)time(NULL));
  number = rand() % 100 + 1; // Generate a random number between 1 and 100

  cout << "Welcome to the number guessing game! I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

  while (guess != number) {
    cout << "Enter your guess: ";
    cin >> guess;

    if (guess < number) {
      cout << "Your guess is too low." << endl;
    } else if (guess > number) {
      cout << "Your guess is too high." << endl;
    }
  }

  cout << "Congratulations! You guessed the number correctly!" << endl;

  return 0;
}