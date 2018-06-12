#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int secretNumber = 0;
    int digits [4];
    do
    {
        srand (time(NULL));
        secretNumber = rand() % 8999 + 1000;
        digits[0] = secretNumber / 1000;
        digits[1] = (secretNumber / 100) % 10;
        digits[2] = (secretNumber / 10) % 10;
        digits[3] = secretNumber % 10;
    }
    while
        (
            digits[0] != digits[1] &&
            digits[0] != digits[2] &&
            digits[0] != digits[3] &&
            digits[1] != digits[2] &&
            digits[1] != digits[3] &&
            digits[2] != digits[3]
        );
    int guessNumber;
    bool play = true;
    do
    {
        do
        {
            cout<<"Guess: ";
            cin>>guessNumber;
        }
        while(guessNumber / 1000 <= 0 && guessNumber / 1000 >= 10);
        if(guessNumber == secretNumber)
        {
            play = false;
        }
        else
        {
            int guessDigits [4];
            guessDigits[0] = guessNumber / 1000;
            guessDigits[1] = (guessNumber / 100) % 10;
            guessDigits[2] = (guessNumber / 10) % 10;
            guessDigits[3] = guessNumber % 10;
            int bulls = 0;
            int cows = 0;
            for(int i = 0 ; i < 4 ; i++)
            {
                for(int j = 0 ; j < 4 ; j++)
                {
                    digits[i] == guessDigits[j] ? (i == j ? bulls++ : cows++) : false;
                }
            }
            cout<<"Bulls: "<<bulls<<endl;
            cout<<"Cows: "<<cows<<endl;
        }
    }
    while(play);
    cout<<"You win!";
    return 0;
}
