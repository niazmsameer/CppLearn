//
//  main.cpp
//  CppLearn
//
//  Created by Sameer Niaz Mohammad on 2/12/2020.
//

#include <iostream>

void doStringMagic() {
    // Define two individual strings
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    
    // Concatenate the two strings with the + operator
    std::string str3 = str1 + str2;
    
    std::cout << "Str3: " << str3 << std::endl;
    
    // Get length of a string using the size() function
    int len = int(str3.size());
    
    std::cout << "Size of Str3: " << len << std::endl;
}

// Define a function called sumOf that
// takes in two integer arguments
int sumOf(int a, int b) {
    // Return the sum of the two arguments
    return a + b;
}

int main(int argc, const char * argv[]) {
    int a = 100;
    int b = 20;
    // Call the function sumOf and pass a and b as the arguments
    int c = sumOf(a, b);
    
    std::cout << c << std::endl;
    
    doStringMagic();
    
    // Return 0 in the main function if execution was successful
    // Any non-zero number if execution was unsuccessful
    return 0;
}
