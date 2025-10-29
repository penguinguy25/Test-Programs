#include <iostream>

// so the cool thing about c++ is that it has built in OOP
class MyClass
{
public:
    int myNum;

    // and i OOP
    // i had to replace this with another int because the compiler was upsetting me
    int myAge;
};

int main()
{
    MyClass myObj;
    MyClass mySecondObj;

    mySecondObj.myNum = 100;
    mySecondObj.myAge = 20;
    myObj.myNum = 30;
    myObj.myAge = 234;
    // wowzers!


    std::cout << myObj.myNum << std::endl;
    std::cout << myObj.myAge << std::endl;
    std::cout << mySecondObj.myNum << std::endl;
    std::cout << mySecondObj.myAge;

    return 0;
}
