// Yuvraj Sidhu
// 9/8/25
// This program allows the user to guess a number between 1-100

#include <iostream>
#include <ctime>

using namespace std;

// Main function 
int main ()
{
  int play = 1;

  // Outer loop for allowing the user to play again if they wish
  while (play == 1){

    // These two lines are for getting the random number between 1-100
    srand(time(0));
  
    int number = rand() % 101;
    
    int input = 0;

    int guesses = 0;
  
    // This is the main loop of the game, it allows the user to guess a number
    // It also tells the user if their guess is correct, too high, or too low
    while (input != number){
      cout << "Guess a number between 1 and 100" << endl;
      cin >> input;
      if (input > number) {
	// Detects if the users guess was too high, prints if so
	cout << "Your guess was too high!" << endl;
	guesses = guesses + 1;
	continue;
 }
      else if (input < number) {
	// Detects if the users guess was too low, prints if so
	cout << "Your guess was too low!" << endl;
	guesses = guesses + 1;
	continue;
 }
      else if (input == number) {
	// Detects if the users guess was correct, prints the amount of guesses taken if correct
	cout << "Your guess was correct, you win!" << endl;
	guesses = guesses + 1;
	cout << "It took you this many guesses: ";
	cout << guesses << endl;
	break;
 }
      else {
	continue;
      }
    }

    // This section asks the user if they want to play again 
    char input2;
    cout << "Play again? (y/n): ";
    cin >> input2;

    // Continues if the user says yes
      if (input2 = 'y'){
	continue;
    }
      // Stops the game if the user says no
      else if (input2 = 'n'){
	cout << "Thanks for playing!" << endl;
	break;
      }
      else {
	return 0;
      }
  }
  return 0;
}
