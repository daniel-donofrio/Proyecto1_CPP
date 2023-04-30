#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Definicion de variables.
    int dia, mes;
    char cumpleanios;
    float invitados, total_invitados;

    //Solicitud de datos para el signo del zodiaco.
    cout << "Ingrese su dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese su mes de nacimiento: ";
    cin >> mes;

    //Comprobacion del signo de zodiaco correspondiente.
    if ((dia >= 21 && mes == 1 || dia <= 19 && mes == 2) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Acuario." << endl;
    } 
    else if ((dia >= 20 && mes == 2 || dia <= 20 && mes == 3) && (dia >= 1 && dia <= 29)) {
        cout << endl <<  "Su signo zodiacal es Piscis." << endl;
    } 
    else if ((dia >= 21 && mes == 3 || dia <= 19 && mes == 4) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Aries." << endl;
    }
    else if ((dia >= 20 && mes == 4 || dia <= 20 && mes == 5) && (dia >= 1 && dia <= 30)) {
        cout << endl << "Su signo zodiacal es Tauro." << endl;
    }
    else if ((dia >= 21 && mes == 5 || dia <= 21 && mes == 6) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Geminis." << endl;
    }
    else if ((dia >= 22 && mes == 6 || dia <= 22 && mes == 7) && (dia >= 1 && dia <= 30))  {
        cout << endl << "Su signo zodiacal es Cancer." << endl;
    }
    else if ((dia >= 23 && mes == 7 || dia <= 23 && mes == 8) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Leo." << endl;
    }
    else if ((dia >= 24 && mes == 8 || dia <= 22 && mes == 9) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Virgo." << endl;
    }
    else if ((dia >= 23 && mes == 9 || dia <= 22 && mes == 10) && (dia >= 1 && dia <= 30)) {
        cout << endl << "Su signo zodiacal es Libra." << endl;
    }
    else if ((dia >= 23 && mes == 10 || dia <= 22 && mes == 11) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Escorpio." << endl;
    }
    else if ((dia >= 23 && mes == 11 || dia <= 21 && mes == 12) && (dia >= 1 && dia <= 30)) {
        cout << endl << "Su signo zodiacal es Sagitario." << endl;
    }
    else if ((dia >= 22 && mes == 12 || dia <= 20 && mes == 1) && (dia >= 1 && dia <= 31)) {
        cout << endl << "Su signo zodiacal es Capricornio." << endl;
    }
    else {
        cout << endl << "Ingrese una fecha valida." << endl;
    }
    
    //2. Pregunta por la fiesta de cumpleaños.
    cout << endl << "¿Le gusta festejar su cumpleaños? (ingrese 'S' para si o 'N' para no): ";
    cin >> cumpleanios;

    if (cumpleanios == 'S' || cumpleanios == 's') {
        cout << endl << "Que bueno!! =D" << endl;
    } else if (cumpleanios == 'N' || cumpleanios == 'n') {
        cout << endl << "Que lastima! =(" << endl;
    } else if (cumpleanios != 'S' || cumpleanios != 's' || cumpleanios != 'N' || cumpleanios != 'n') {
        cout << endl << "Ingrese una respuesta valida." << endl;
    }

    //3. Invitados a la fiesta.
    cout << endl << "Ingrese el numero de invitados a su fiesta de cumpleaños: ";
    cin >> invitados;

    total_invitados = round (sqrt(pow (invitados, 4)));

    cout << endl << "Si elevamos a 4 su numero de invitados, luego sacamos su raiz cuadrada y lo redondeamos nos da: " << total_invitados << endl << endl;
    
    return 0;
}