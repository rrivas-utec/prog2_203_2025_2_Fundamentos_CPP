#include <iostream>
using namespace std;

void ejercicio_1() {
    // definir las variables
    // int a = 0, b = 0, c = 0, max = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;

    // ingreso de las variables
    cout << "ingrese los valores enteros (a b c):";
    // cin >> a >> b >> c;
    cin >> a;
    cin >> b;
    cin >> c;

    // comparar las variables y seleccionar la mayor
    /*
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }
    */
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // mostrar el resultado
    cout << "El maximo es: " << max << endl;
}

void ejercicio_2() {
    int a, b, c;
    cout << "ingrese 3 valores: ";
    cin >> a >> b >> c;

    if (a > b) {
        const int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        const int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        const int temp = b;
        b = c;
        c = temp;
    }
    cout << "Los valores son: " << a << " " << b << " " << c << endl;
}

void ejercicio_3() {
    int a, b, c;
    cout << "ingrese 3 valores: ";
    cin >> a >> b >> c;

    bool es_triangulo = (a + b > c && a + c > b && b + c > a);
    if (es_triangulo) {
        if (a == b && a == c) {
            cout << "Triangulo equilatero" << endl;
        }
        if (a == b && a != c) {
            cout << "Triangulo isoceles" << endl;
        }
        if (a != b && a != c && b != c) {
            cout << "Triangulo escaleno" << endl;
        }
    }
    else {
        cout << "Invalido, no es triangulo" << endl;
    }
}

int main() {
    // Llamada de funcion ejercicio_1
    // ejercicio_1();
    // ejercicio_2();
    return 0;
}
