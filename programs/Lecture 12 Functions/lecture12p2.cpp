#include<iostream>
#include <cmath>
using namespace std;

void printNumbersOneToHundred(){
    for(int i=1;i<=100;i++){
        cout << i << " ";
    }
}

int calculateSimpleInterest(int p, int r, int t){
    int simpleInt = (p * r * t)/100;
    return simpleInt;
}

void printPrimeNumbers() {
    for (int i = 2; i <= 100; i++) { // Start from 2, as 1 is not a prime number
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << i << " ";
        }
    }
}

void isEligible(int n){
    if(n > 18){
        cout << "You are eligible";
    } else{
        cout << "You are not";
    }
}

int calculateSip(int p, int n, double i){
    int result = p * (((pow(1+i, n) - 1) / i) * (1+i));
    cout << "Result:" << result << endl;
    return result;
}

int main(){
    // printNumbersOneToHundred();
    // int ansSimple = calculateSimpleInterest(1000, 12, 5);
    // cout << ansSimple << endl;
    // printPrimeNumbers();
    // isEligible(3);
    int ansSip = calculateSip(1000,12,0.12);
    
    return 0;
}