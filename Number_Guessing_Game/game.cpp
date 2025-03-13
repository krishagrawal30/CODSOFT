#include<iostream>
using namespace std;
int main()
{
    srand(time(0));
    int n = rand() % 1000 + 1,g;
    cout << "Guess the number (1-1000): ";
    while (true) 
    {
        cin>>g;
        if (g == n) 
        {
            cout << "Congratulations! You guessed the right number.\n";
            break;
        } 
        else if (g < n) cout << "Your guess is too low! Try again: ";
        else cout << "Your guess too high! Try again: ";
    }
    return 0;
}
