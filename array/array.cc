#include <iostream>
      
using namespace std;
int main() {
    string array[8] ;
    for(int x=0; x<5; x++) {
        string input;
        cin >> input;
        array[x] = input;
    }
    for(int x = 0; x<5; x++) {
        cout << array[x] << endl;
    }
    return 0;
}
