#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter the marks" << endl;
    cin >> grade;
    switch(grade){
        case 'A': cout << "Your marks range between 90 - 100" << endl; break;
        case 'B': cout << "Your marks range between 80 - 90" << endl; break;
        case 'C': cout << "Your marks range between 70 - 80" << endl; break;
        case 'D': cout << "Your marks range between 60 - 70" << endl; break;
        default: cout << "You have failed. Please improve yourself." << endl; break;
    }
    return 0;
}