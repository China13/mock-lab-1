#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int input, random,trials=0;

    srand(time(0));   //initiaising  random number generator
    random = (rand() %100 )+1;


    cout << random<<endl;


    do
    {
        //cout <<"Guess The Number"<<endl;
        cin >> input;
        trials ++;
        //cout << "Trials ="<<" "<<trials<<endl;

        if(input < random)
        {
            cout << "Guess Higher"<<endl;
        }
        else if
        (input > random)
        {
            cout << "Guess lower"<<endl;

        }
        else if (input == random)
        {

            cout << "You win"<<endl;
            return 0;

        }
        else
            cout <<"You Lose"<<endl;
    }

        while(trials <5);



        return 0;
    }
