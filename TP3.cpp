/* TP3 JUEGO
 * MARTIN DANIEL AGUEL
 * 20150422
 */

#include <iostream>
using namespace std;

int main()
{
int m1, r1;
int resultado;

do{
    cout <<"Juego de preguntas y respuestas, eliga la categoria:" << endl;
    cout <<"1. Geografia" << endl;
    cout <<"2. Matematica" << endl;
    cout <<"3. Historia" << endl;
    cout <<"4. Salir" << endl;
    cin >> m1;

    switch (m1){

        case 1:cout <<"Pregunta 1: La capital de Brasil es:" << endl;
        cout <<"1. Brasilia" << endl;
        cout <<"2. Rio" << endl;
        cin >> r1;
        if(r1 == 1)
        cout <<"CORRECTO" << endl;
        else
        cout <<"INCORRECTO" << endl;

        cout <<"Pregunta 2: La capital de Uruguay es:" << endl;
        cout <<"1. Montevideo" << endl;
        cout <<"2. Bs As" << endl;
        cin >> r1;
        if(r1 == 1)
        cout <<"CORRECTO" << endl;
        else
        cout <<"INCORRECTO" << endl;
        break;

        case 2: cout <<"Pregunta 1: Raiz cuadrada de 16:" << endl;
        cout <<"1. 4" << endl;
        cout <<"2. 8" << endl;
        cin >> r1;
        if(r1 == 1)
        cout <<"CORRECTO" << endl;
        else
        cout <<"INCORRECTO" << endl;

        cout <<"Pregunta 2: El doble de 100" << endl;
        cout <<"1. 200" << endl;
        cout <<"2. 1000" << endl;
            cin >> r1;
        if(r1 == 1)
        cout <<"CORRECTO" << endl;
        else
        cout <<"INCORRECTO" << endl;
        break;

        case 3: cout <<"Pregunta 1: Fecha inicio 1er Guerra Mundial:" << endl;
        cout <<"1. 1914" << endl;
        cout <<"2. 1918" << endl;
        cin >> r1;
        if(r1 == 1)
        cout <<"CORRECTO" << endl;
        else
        cout <<"INCORRECTO" << endl;

        cout <<"Pregunta 2: Quien vencio en la 2da Guerra Mundial" << endl;
        cout <<"1. Los Aliados" << endl;
        cout <<"2. El Eje" << endl;
        cin >> r1;
        if(r1 == 1)
        cout <<"CORRECTO" << endl;
        else
        cout <<"INCORRECTO" << endl;
        break;

        case 4: break;

        default: cout <<"Opcion no valida" << endl;
        }
}while (m1 != 4);

}
