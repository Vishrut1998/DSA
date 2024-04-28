//Preprocessor Directives : Preprocessor program provide preprocessor directives that tell the compiler to preprocess the source code before compiling.
//std::cout is an instance of std::ostream and is connected to the standart output stream of the application.It uses a buffer to hold the characters to be output, which is managed by the stream buffer


#include<iostream> //iostream is a header file. Any functionality, related to input, output or std namespace is included in this header file.
using namespace std; //now from iostream we want to use the standard namespace. So we write namespace std. This will have the cout definition.

int main() { //main function is the entry point of our code. The execution of the code will start from here.
    cout << "Namaste Duniya \n";
    cout << "Namaste Vishrut" ;// cout is the identifier or keyword for output or printing something. '<<' is an operator used with cout to print something.
    //And after words 'endl' is used to print a new line
    //';' is used to show termination of a line.
    return 0;
}
