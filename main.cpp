#include <iostream>
#include "Complex.h"

int main() {
    Complex a{1.6,-1.09};
    Complex b{a};
    Complex c=-a;
    Complex d{3,6};
    Complex f{7};
    a++;
    ++b;
    std::cout << a++<< std::endl;
    std::cout << ++b << std::endl;
    c =a+b;
    c =c+5;
    c =5+c;
    c+=5;
    c+=a;
    std::cout << c << std::endl;
    a--;
    --b;
    std::cout << a--<< std::endl;
    std::cout << --b << std::endl;
    c-=b;
    c-=a;
    c=c-15;
    c=5-c;
    c-=c;
    std::cout << c << std::endl;
    a=a*d;
    b*=d;
    std::cout<<a<<std::endl;
    b=-b;
    std::cout<<b<<std::endl;
    std::cout<<"Put in the number: ";
    std::cin>>b;
    std::cout<<std::endl<<"Your number was: ";
    std::cout<<b<<std::endl;

    return 0;
}
