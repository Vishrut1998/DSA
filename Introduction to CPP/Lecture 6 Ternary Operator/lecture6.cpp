#include<iostream>
using namespace std;

int main() {

    int age;
    cout<< "Enter age"<<endl;
    cin >> age;
    (age > 18) ? cout << "Can Vote" << endl : cout << "Cannot vote" << endl;
    return 0;
}