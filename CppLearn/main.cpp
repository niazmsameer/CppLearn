//
//  main.cpp
//  CppLearn
//
//  Created by Sameer Niaz Mohammad on 2/12/2020.
//

#include <iostream>

void printHeader(std::string header) {
    std::cout << header << std::endl << "-----------------" << std::endl;
}

void printFooter() {
    std::cout << "-----------------" << std::endl << std::endl;
}

void doStringMagic() {
    printHeader("String Magic");

    // Define two individual strings
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    
    // Concatenate the two strings with the + operator
    std::string str3 = str1 + str2;
    
    std::cout << "Str3: " << str3 << std::endl;
    
    // Get length of a string using the size() function
    int len = int(str3.size());
    
    std::cout << "Size of Str3: " << len << std::endl;
    
    printFooter();
}

void doPointerMagic() {
    printHeader("Pointer Magic");
    
    // Actual variable
    int z = 10;
    
    // Pointer to variable
    int *ptr = &z;
    
    std::cout << "Contents of Z: " << z << std::endl;
    std::cout << "Contents of Ptr (Address of Z): " << ptr << std::endl;
    std::cout << "Contents of Z (through Ptr): " << *ptr << std::endl;
    
    printFooter();
}

// Define a function called sumOf that
// takes in two integer arguments
int sumOf(int a, int b) {
    // Return the sum of the two arguments
    return a + b;
}

int main(int argc, const char * argv[]) {
    printHeader("Function Definition");
    
    int a = 100;
    int b = 20;
    // Call the function sumOf and pass a and b as the arguments
    int c = sumOf(a, b);
    
    std::cout << c << std::endl;
    
    printFooter();
    
    doStringMagic();
    
    doPointerMagic();
    
    // Return 0 in the main function if execution was successful
    // Any non-zero number if execution was unsuccessful
    return 0;
}
