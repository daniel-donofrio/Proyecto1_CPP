#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ciudad_1, ciudad_2, temporal;
    ciudad_1 = "Bahía Blanca";
    ciudad_2 = "Buenos Aires";
    temporal = ciudad_1;

    ciudad_1 = ciudad_2;
    ciudad_2 = ciudad_1;

    cout << "El intercambio de ciudades ha sido correcto." << endl;

}