#include <iostream>
int main()
{
    std::cout << "hello" << std::endl;
    std::cout << "hello" << std::endl;
    
    int i;
    std::cout << "i++:"<<std::endl;
    for(i=0; i<5; i++) {
        std::cout << "in -- i:" << i<<std::endl;
    }
    std::cout << "out -- i:" << i<<std::endl;

    std::cout << "++i:"<<std::endl;
    for(i=0; i<5; ++i) {
        std::cout << "in -- i:" << i<<std::endl;
    }
    std::cout << "out -- i:" << i<<std::endl;

    std::cout << "inside i++:"<<std::endl;
    for(i=0; i<5;) {
        std::cout << "in -- i:" << i++<<std::endl;
    }
    std::cout << "out -- i:" << i<<std::endl;

    std::cout << "inside ++i:"<<std::endl;
    for(i=0; i<5;) {
        std::cout << "in -- i:" << ++i<<std::endl;
    }
    std::cout << "out -- i:" << i<<std::endl;
}