//
//  main.cpp
//  CppLearn
//
//  Created by Sameer Niaz Mohammad on 2/12/2020.
//

#include <iostream>

int sumOf(int a, int b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    int a = 100;
    int b = 20;
    int c = sumOf(a, b);
    
    std::cout << c << std::endl;
    
    return 0;
}
