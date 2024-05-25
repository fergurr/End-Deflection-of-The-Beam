#include <iostream>
#include <cmath>
using namespace std;

void def(float P, float L, float E = 2.10E11, float I = 8.333E-5) {
    double deflection = (P * pow(L, 3)) / (3 * E * I) * -1;
    cout << "End deflection of the beam  : " << deflection << endl;
}

int main() {
    float P, L; 
    cout << "Give vertical end load (kN): " << endl;
    cin >> P;
    cout << "Give length of beam (M): " << endl;
    cin >> L;
    def(P, L); 
}

