//
//  main.cpp
//  CppLearn
//
//  Created by Sameer Niaz Mohammad on 2/12/2020.
//

#include <iostream>

void doStringMagic() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    
    std::string str3 = str1 + str2;
    
    std::cout << "Str3: " << str3 << std::endl;
    
    int len = int(str3.size());
    
    std::cout << "Size of Str3: " << len << std::endl;
}

int sumOf(int a, int b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    int a = 100;
    int b = 20;
    int c = sumOf(a, b);
    
    std::cout << c << std::endl;
    
    doStringMagic();
    
    return 0;
}
