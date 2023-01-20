// P3Lab3_HectorCaceres.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


int opcion;

int main()
{
    
    cout << "Que desea realizar: Error Numerico[1] Division de dos entradas[2] Salir[3] " << endl;

    cin >> opcion;
    switch (opcion) {
    case 1:
        int P, A, B, J, M;
        std::cout << "Ingrese P: ";
        std::cin >> P;
        std::cout << "Ingrese A: ";
        std::cin >> A;
        std::cout << "Ingrese B: ";
        std::cin >> B;
        M = 0;
        for (int i = 0; i < P; i++) {
            if (B != 0) {
                J = A / B;
                M += J;
            }
            else {
                J = 0;
            }
            B--;
        }
        std::cout << "M = " << M << std::endl;
    
        break;
    case 2:
        unsigned int N;
        cout << "Ingrese el valor de N: ";
        cin >> N;

        // Cálculo con double
        double Xd = 1.0 / N;
        double Sd = 0.0;
        for (unsigned int i = 0; i < N; i++) {
            Sd += Xd;
        }
        double Ed = abs(1.0 - Sd);
        cout << "Usando Double:" << endl;
        cout << "E: " << Ed << endl << endl;

        // Cálculo con float
        float Xf = 1.0f / N;
        float Sf = 0.0f;
        for (unsigned int i = 0; i < N; i++) {
            Sf += Xf;
        }
        float Ef = abs(1.0f - Sf);
        cout << "Usando Float:" << endl;
        cout << "E: " << Ef << endl << endl;

        // Cálculo con long double
        long double Xld = 1.0L / N;
        long double Sld = 0.0L;
        for (unsigned int i = 0; i < N; i++) {
            Sld += Xld;
        }
        long double Eld = abs(1.0L - Sld);
        cout << "Usando Long Double:" << endl;
        cout << scientific << "E: " << Eld << endl;
        cout << endl;
        break;
    } 
}

   
    


