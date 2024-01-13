#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));  
    int secretNumber = 10+33;  // Generate a random number between 1 and 100
    int guess;
    int numGuesses = 0;

    cout << " Guess any number betwween 1 to 100 : ";

    while (cin >> guess) {
        numGuesses++;

        if (guess < secretNumber) {
            cout << "Less than the secret number!!Try again.\n"; 
        } else if (guess > secretNumber) {
            cout << "Greater than the secret number!! Try again.\n";
        } else {
            cout << "Congratulations!You guessed right!!" ;
            break;
        }

        cout << "Guess again: ";
    }

    return 0;
}
