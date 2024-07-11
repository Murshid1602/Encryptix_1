#include<iostream>
using namespace std;

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    
    do {
        cout << "koi number dalo 1 se 100 ke beech" << endl;
        cin >> guess;
        
        if(guess > number) {
            cout << "isse chota number hai" << endl;
        }
        else if(guess < number) {
            cout << "isse bada number hai" << endl;
        }
        else {
            cout << "chlo shi number guess to kr liye lekin " << nguess << " brr me" << endl;
        }
        
        nguess++;

    } while(guess != number);

    return 0;
}