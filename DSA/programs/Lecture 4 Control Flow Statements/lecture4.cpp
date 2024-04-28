#include<iostream>
using namespace std;

int main() {
        // //Example 1
    // int budget;
    // cout << "Enter your budget" << endl;
    // cin >> budget;
    // if(budget > 2000000) {
    //     cout << "You can buy a car" << endl;
    // } else{
    //     cout <<  "You cannot buy a car" << endl;
    // }

    //Example 2
    // int marks;
    // cout << "Enter the marks" << endl;
    // cin >> marks;
    // if(marks > 90){
    //     cout << "A";
    // } else if(marks > 80){
    //     cout << "B";
    // } else if(marks > 70) {
    //     cout << "C";
    // } else if(marks > 60) {
    //     cout << "D";
    // } else{
    //     cout << "E";
    // }

    //Example 3
    int weight;
    int height;
    cout << "Enter your weight" << endl;
    cin >> weight;
    if(weight > 80){
        cout << "Enter height";
        cin >> height;
        if(height < 5){
            cout << "You are not fit" << endl;
        }
        else {
            cout << "You are fit" << endl;
        }
    } else{
        cout << "You have to work on " << weight << "to 60" << endl;
    }
    return 0;
}