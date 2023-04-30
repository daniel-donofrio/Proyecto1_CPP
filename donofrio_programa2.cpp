#include <iostream>
using namespace std;

int main()
{
    //Definicion de variables
    int dia, mes;

    //Solicitud de datos para el signo del zodiaco.
    cout << "Ingrese su dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese su mes de nacimiento: ";
    cin >> mes;

    //Comprobacion del signo de zodiaco correspondiente.
    switch (mes)
    {
    case 1:
        if (dia >= 1 && dia <= 20) {
            cout << endl << "Su signo zodiacal es Capricornio." << endl << endl;
        } else if (dia >= 21 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Acuario." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 2:
        if (dia >= 1 && dia <= 19) {
            cout << endl << "Su signo zodiacal es Acuario." << endl << endl;
        } else if (dia >= 20 && dia <= 29) {
            cout << endl << "Su signo zodiacal es Piscis." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }    
        break;
    case 3:
        if (dia >= 1 && dia <= 20) {
            cout << endl << "Su signo zodiacal es Piscis." << endl << endl;
        } else if (dia >= 21 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Aries." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 4:
        if (dia >= 1 && dia <= 19) {
            cout << endl << "Su signo zodiacal es Aries." << endl << endl;
        } else if (dia >= 20 && dia <= 30) {
            cout << endl << "Su signo zodiacal es Tauro." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 5:
        if (dia >= 1 && dia <= 20) {
            cout << endl << "Su signo zodiacal es Tauro." << endl << endl;
        } else if (dia >= 21 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Geminis." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 6:
        if (dia >= 1 && dia <= 21) {
            cout << endl << "Su signo zodiacal es Geminis." << endl << endl;
        } else if (dia >= 22 && dia <= 30) {
            cout << endl << "Su signo zodiacal es Cancer." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 7:
        if (dia >= 1 && dia <= 22) {
            cout << endl << "Su signo zodiacal es Cancer." << endl << endl;
        } else if (dia >= 23 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Leo." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 8:
        if (dia >= 1 && dia <= 23) {
            cout << endl << "Su signo zodiacal es Leo." << endl << endl;
        } else if (dia >= 24 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Virgo." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 9:
        if (dia >= 1 && dia <= 22) {
            cout << endl << "Su signo zodiacal es Virgo." << endl << endl;
        } else if (dia >= 23 && dia <= 30) {
            cout << endl << "Su signo zodiacal es Libra." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 10:
        if (dia >= 1 && dia <= 22) {
            cout << endl << "Su signo zodiacal es Libra." << endl << endl;
        } else if (dia >= 23 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Escorpio." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 11:
        if (dia >= 1 && dia <= 22) {
            cout << endl << "Su signo zodiacal es Escorpio." << endl << endl;
        } else if (dia >= 23 && dia <= 30) {
            cout << endl << "Su signo zodiacal es Sagitario." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    case 12:
        if (dia >= 1 && dia <= 21) {
            cout << endl << "Su signo zodiacal es Sagitario." << endl << endl;
        } else if (dia >= 22 && dia <= 31) {
            cout << endl << "Su signo zodiacal es Capricornio." << endl << endl;
        } else {
            cout << endl << "Ingrese una fecha valida." << endl << endl;
        }
        break;
    default:
        cout << endl << "Ingrese una fecha valida." << endl << endl;
        break;
    }
    return 0;
}