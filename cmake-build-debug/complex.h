#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>
#include <math.h>
struct Complex {
    double Re = 0;
    double Im = 0;

    Complex slog(Complex n);
    Complex vich(Complex n);
    double modul(Complex n);
    Complex del(Complex n);
    Complex umnog(Complex n);
};



#endif //UNTITLED2_COMPLEX_H