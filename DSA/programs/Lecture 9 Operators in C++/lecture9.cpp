#include<iostream>
using namespace std;

int main() {
    //Urinary operator : 
    int a = 5;
    //Increment
    cout << a << endl;
    //a =5
    cout<< (++a) << endl;
    //a = 6
    cout << (a++) << endl;
    // a = 6 but 7 ho chuki hogi
    //Verify
    cout << a << endl;
    //a = 7


    //Decrement
    //a = 7
    cout << (--a) << endl;
    // a = 6
    cout << (a--) << endl;
    // a = 6, but 5 ho chuki hogi
    //Verify
    cout << a << endl;
    // a = 5

    return 0;
}