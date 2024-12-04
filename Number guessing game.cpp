#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame(int lower, int upper, int maxTries) {
    srand(static_cast<unsigned int>(time(0)));
    int number = rand() % (upper - lower + 1) + lower;
    int guess;
    int tries = 0;
    
    cout << "Guess the number between " << lower << " and " << upper << "!" << endl;

    while (tries < maxTries) {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess == number) {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
            return;
        } else if (guess < number) {
            cout << "Too low!" << endl;
        } else {
            cout << "Too high!" << endl;
        }
    }

    cout << "Sorry, you ran out of tries. The number was " << number << "." << endl;
}

int main() {
    int lower = 1, upper = 100, maxTries = 7;
    playGame(lower, upper, maxTries);
    return 0;
}
