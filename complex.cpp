#include "complex.h"
#include "cmake-build-debug/complex.h"
#include <iostream>
#include <cmath>

Complex Complex::slog(Complex n){
    return Complex  {n.Re + this->Re,n.Im+ this->Im};
}
Complex Complex::vich(Complex n){
    return Complex {(n.Re-this->Re),(n.Im-this->Im)};

}
double Complex::modul(Complex n){
    return double (sqrt(n.Im*n.Im + n.Re*n.Re));
}
Complex Complex::del(Complex n){
    return Complex{ ((n.Im *Im) * (-1) + n.Re * Re) / (pow(Re, 2) + pow(Im, 2)),(n.Im * Re + n.Re * (-1) *Im) / (pow(Re, 2) + pow(Im, 2))};
}
Complex Complex::umnog(Complex n){
    return Complex {(n.Re*this->Re+n.Im* this->Im*(-1)),(n.Re* this->Im+n.Im*this->Re)};

}

