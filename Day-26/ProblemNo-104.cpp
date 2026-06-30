//Write a program to create quiz application
#include <iostream>
using namespace std;

int main() 
{
    int score = 0;
    char answer;
    cout << "Simple Quiz Application\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "A. Mumbai\nB. Delhi\nC. Kolkata\nD. Chennai\n";
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;

    if (answer == 'B' || answer == 'b') 
    {
        cout << "Correct!\n";
        score++;
    } 
    else 
    {
        cout << "Wrong! Correct answer is B. Delhi\n";
    }

    // Question 2
    cout << "\n2. Which language is primarily used for C++ programming?\n";
    cout << "A. HTML\nB. Python\nC. C++\nD. SQL\n";
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') 
    {
        cout << "Correct!\n";
        score++;
    } 
    else 
    {
        cout << "Wrong! Correct answer is C. C++\n";
    }

    // Question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "A. 365\nB. 364\nC. 366\nD. 367\n";
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') 
    {
        cout << "Correct!\n";
        score++;
    } 
    else 
    {
        cout << "Wrong! Correct answer is C. 366\n";
    }

    // Display Result
    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent! You got all answers correct.\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else if (score == 1)
        cout << "Keep Practicing!\n";
    else
        cout << "Better Luck Next Time!\n";

    return 0;
}
