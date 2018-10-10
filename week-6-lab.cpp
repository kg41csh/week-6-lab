#include <iostream>

using namespace std;

int main () {
    
    int x;

    cout << "Enter your score : " ;
    cin >> x;
    cout << "You enterd : " << x << "\n";

    if (x >= 86) {

        cout << "Your grade is 'A'"; 
    } 
    
        else if (x >= 72) {

        cout << "Your grade is 'B'"; 
    } 
        else if (x >= 60) {

        cout << "Your grade is 'C'"; 
    } 
        else if (x >= 50) {

        cout << "Your grade is 'D'"; 
    } 

    else {
        cout <<  "Your grade is 'F'";
    }

    return 0;
}