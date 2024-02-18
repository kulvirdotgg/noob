#include <iostream>

class hornyClass{
public:
    int veryNiceNum = 69;
    double getHigh = 420.00;

    hornyClass() {
        std::cout << "Constructor called" << '\n';
    }
};

int main(){
    /*
    some crazy shit for checking the size allocated by malloc and new

    char* getHorny = new char[69];
    std::cout << sizeof(*getHorny) << '\n';

    int* someFuncMalloc = (int*)malloc(69);
    for(int i = 0; i < 699696; i++){
        someFuncMalloc[i] = i;
    }
    std::cout << sizeof(*someFuncMalloc) << '\n';
    */

    
    hornyClass gettingHorny;
    hornyClass moreHorny = gettingHorny;
    gettingHorny.getHigh = 420.69;

    printf("Get high num: %.2f", gettingHorny.getHigh);
    std::cout << &gettingHorny << " - " << &moreHorny << '\n'; 
    return 0;
}
