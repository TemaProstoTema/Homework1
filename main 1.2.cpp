#include <iostream>
#include <fstream>
#include "complex.h"
#include "cmake-build-debug/complex.h"
using namespace std;

int main()
{
    ifstream fin("complex.txt");
    double a, b, c, n;
    int q = 0;
    int w = 0;
    double max = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a >> b;
        Complex c{ a,b };
        if (c.modul(c) > max)
        {
            max = c.modul(c);
            q = a;
            w = b;
        }
    }
    cout << q << " " << w <<" i" ;
    return 0;

}
