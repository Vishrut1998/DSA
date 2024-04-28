#include<iostream>
using namespace std;

int main(){
    
    // for(int i = 1; i<= 10; i++) {
    //     cout << "Iteration : " << i << " "; //The print statement is coming before the condition of break.
    //     if(i == 5) {
    //         break;
    //     }
    // }
    // cout << endl;
    
    // for(int i = 1; i<= 10; i ++){
    //     if(i == 5) {
    //         break;  
    //     }
        
    //     cout << "Iteration : " << i << " "; //This is because the print statement came after the break.
    // }

    // for(int i = 0; i <= 10; i++) {
    //     if(i == 3){
    //         continue;
    //     }

    //     // cout<< "Iteration for continue" << i << endl;
    // }

    // int i=100;
    // while(i >=1){
    //     cout << i<< " ";
    //     i--;
    // }

    // for(int i = 0; i >= -10; i--){
    //     cout << i << " ";
    // }

    // for(int i=0; i<= 50; i++){
    //     cout << "Vishrut" << i << endl;
    // }

    // for(int i=0; i<= 10; i++){
    //     cout << "7 X " << i << "" << " = " << 7 * i << endl;
    //     // cout << 7 * i << endl;
    // }
    // return 0;

    for(char ch = 'A' ; ch <= 'Z'; ch ++){
        cout << ch << " ";
    }
    cout << endl;
    for(char ch = 'a' ; ch <= 'z'; ch ++){
        cout << ch << " ";
    }
    return 0;
}