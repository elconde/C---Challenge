#include <stdlib.h>
#include <iostream>
using namespace std;

int main() { 
    srand(time(NULL));
    int number=(rand() % 100) + 1;
    int guess=-1;
    int trycount=0;
    while(guess != number && trycount<8) {
        cout<<"Please enter a guess: "; 
        cin>>guess; 
        if(guess<number) {
            cout<<"Too low"<<endl;
        }
        else if(guess>number) {
            cout<<"Too high"<<endl;
        }
        else {
            cout<<"You guessed the number" << endl;
            return 0;
        }
        trycount++;
    }
    printf("Sorry, the number was %d\n",number);
    return 0; 
}

