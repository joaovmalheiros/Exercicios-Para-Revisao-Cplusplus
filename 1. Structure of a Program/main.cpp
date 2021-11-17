//My first program in C++
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;

    std::cout
        << "I'm a C++ program" << std::endl;

    return 0;
}

//Line 2:
//Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor. They are
//special lines interpreted before the compilation of the program itself begins. In this case, the directive #include
//<<iostream> instructs the preprocessor to include a section of standard C++ code, known as header iostream, that allows
//to perform standard input and output operations.

//Line 4:
//This line initiates the declaration of a function (group of code statements which are given a name)
//The functiion named main is the function called when the program is run.

//std::cout : identifies the standard character output device (usually, this is the computer screen)
//insertion operator (<<): indicates that what follows is inserted into std::cout

//All C++ statements must end with a semicolon character (;). (Preprocessor directives are not statements)


