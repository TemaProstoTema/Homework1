#include <iostream>
#include "complex.h"
#include "cmake-build-debug/complex.h"
#include <cmath>

int main(){
    setlocale(0,"rus");
    double w,e;
    int n;
    int i =1;
    std::cout<<"Введите количество комплексных чисел";
    std::cin>>n;
    std::cout<<"Введите два комплексных числа: ";
    Complex a = {w,e};
    std::cin>>w>>e;
    std::cout<<"Введите желаемое дейстиве\n";
    std::cout<<"1.Сложение\n"<<"2.Вычитание\n"<<"3.Умножение\n"<<"4.Деление\n";
    int ch,ch1;
    std::cin>>ch;
    while(i<n){
        Complex b = {w,e};
        std::cin>>w>>e;
        std::cout<<"Введите желаемое дейстиве\n";
        std::cout<<"1.Сложение\n"<<"2.Вычитание\n"<<"3.Умножение\n"<<"4.Деление\n";
        switch (ch) {
            case 1:
                b = a.slog(b);
                std::cout << b.Re << " " << b.Im << "i";
                break;
            case 2:
                b = a.vich(b);
                std::cout << b.Re << " " << b.Im << "i";
                break;
            case 3:
                b = a.umnog(b);
                std::cout << b.Re << " " << b.Im << "i";
                break;
            case 4:
                b = a.del(b);
                std::cout << b.Re << " " << b.Im << "i";
                break;


        }
    }
    return 1;
}
