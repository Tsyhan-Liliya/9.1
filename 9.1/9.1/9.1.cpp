#include <iostream>
#include <iomanip>
#include <math.h>   

#include "dod.h"
#include "sum.h"       
#include "var.h"       

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;

    cout << fixed;

    cout << "------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(10) << "log(x)" << " |"
        << setw(7) << "s" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum(); 

        cout << "|" << setw(5) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << log(x) << " |"
            << setw(7) << setprecision(5) << s << " |"
            << setw(5) << n << " |" << endl;
        x += dx;
    }
    cout << "------------------------------------" << endl;

    return 0;
}


