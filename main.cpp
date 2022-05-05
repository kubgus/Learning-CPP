#include <iostream>
#include <random>

using namespace std;

int main()
{
    // This code gets a random integer from 1 to 100
    // Please ignore
    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution<int> distr(1, 100);
    //----------------------------------------------

    int secret = distr(eng); // random integer from 1 to 100
    int guess;
    int attepts = 0;
    int limit = 10;
    bool limitHit = false;

    while (guess != secret && !limitHit)
    {
        if (attepts < limit)
        {
            cout << "Guess: ";
            cin >> guess;

            if (guess > secret)
            {
                cout << "The secret number is lower." << endl;
            }
            else if (guess < secret && !limitHit)
            {
                cout << "The secret number is higher." << endl;
            }

            attepts++;
        }
        else
        {
            limitHit = true;
        }
    }

    if (!limitHit)
    {
        cout << "CONGRATULATIONS, You guessed correctly!" << endl;
        cout << "It took you " << attepts << " attepts out of " << limit << "." << endl;
    }
    else
    {
        cout << "You lost!" << endl;
        cout << "The secret number was " << secret << "." << endl;
    }

    system("pause");
}