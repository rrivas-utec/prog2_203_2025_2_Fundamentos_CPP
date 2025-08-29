#include <iostream>
#include <cctype>
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
/*
$1: Presenta el retrato de George Washington.
$2: Muestra el retrato de Thomas Jefferson.
$5: Presenta a Abraham Lincoln.
$10: Muestra a Alexander Hamilton.
$20: Presenta a Andrew Jackson.
$50: Muestra a Ulysses S. Grant.
$100: Presenta a Benjamin Franklin.
*/
void ejercicio_11() {
    // 1. Definir las variables
    int importe = 0;

    // 2. Solicitar el importe (cout / cin)
    cout << "ingrese el importe de billete: ";
    cin >> importe;

    // 3. Verificar si existe un billete (switch)
    switch (importe) {
        case 1:
            cout << "El billete contiene la imagen de George Washington\n";
        break;
        case 2:
            cout << "El billete contiene la imagen de Thomas Jefferson";
        break;
        case 5:
            cout << "El billete contiene la imagen de Abraham Lincoln";
        break;
        case 500:
        case 1000:
        case 5000:
        case 10000:
            cout << "Billete Descontinuado\n";
        default:
            cout << "Billete Invalido\n";
    }
}

void ejercicio_12() {
    // 1. declarar las variables tipo char
    char color = 0;
    // 2. Ingresar el valor
    cout << "ingrese la letra inicial del color: ";
    cin >> color;
    // 3. Convertir a mayuscula
    // color = toupper(color);
    // 4. Seleccionar el color usando switch
    switch (color) {
        case 'a':
        case 'A':
            cout << "El color seleccionado es Azul\n";
        break;
        case 'r':
        case 'R':
            cout << "El color seleccionado es Rojo\n";
        break;
        case 'm':
        case 'M':
            cout << "El color seleccionado es Amarillo\n";
        break;
        case 'b':
        case 'B':
            cout << "El color seleccionado es Blanco\n";
        break;
        case 'n':
        case 'N':
            cout << "El color seleccionado es Negro\n";
        break;
        default:
            cout << "Color no disponible\n";
    }
}


int main() {
    // Llamada de funcion ejercicio_1
    // ejercicio_1();
    // ejercicio_2();
    return 0;
}
