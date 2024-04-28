#include<iostream>
using namespace std;

int sum(int a, int b){
    int totalSum = a + b;
    return totalSum;
}

int getMultiplication(int x, int y, int z){
    int result = x * y * z;
    return result;
}

void printNameTenTimes(){
    for(int i=1; i<=10; i++){
        cout << "Vishrut" << endl;
    }
}

void printMultiples(int num){
    for(int i=1; i<= 10; i++){
        cout << num * i << endl;
    }
}

int convertToCelsius(int far) {
    int celsius = ((far-32)*5)/9;
    return celsius;
}

char convertToUppercase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

int main() {
    // int ans = getMultiplication(3, 4, 5);
    // cout << ans << endl;

    // printNameTenTimes();

    // printMultiples(5);

    // int cel = convertToCelsius(50);
    // cout << cel<< endl;

    char result = convertToUppercase('v');
    cout << result << endl;
    return 0;
}