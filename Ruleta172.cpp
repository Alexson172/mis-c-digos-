#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Configurar la semilla para números aleatorios
    srand(time(0));

    char reiniciarJuego = 's';

    // Bucle principal para permitir reiniciar todo el programa
    while (reiniciarJuego == 's' || reiniciarJuego == 'S') {
        int cantidad = 0;

        // Validación de la cantidad de opciones (centrado)
        while (cantidad != 2 && cantidad != 3 && cantidad != 4 && cantidad != 10) {
            cout << "\n\t====================================================\n";
            cout << "\t         \033[1;36mSIMULADOR DE RULETA DE OPCIONES\033[0m            \n";
            cout << "\t====================================================\n";
            cout << "\tElija la cantidad de opciones para la ruleta\n";
            cout << "\t(\033[1;33mOpciones permitidas: 2, 3, 4 o 10\033[0m): ";
            cin >> cantidad;

            if (cantidad != 2 && cantidad != 3 && cantidad != 4 && cantidad != 10) {
                cout << "\n\t\033[1;31m[Error] Cantidad no valida. Intente de nuevo.\033[0m\n\n";
            }
        }

        // Declaración del arreglo unidimensional
        string opciones[10];

        cout << "\n\t----------------------------------------------------\n";
        cout << "\t          \033[1;35mINGRESO DE OPCIONES\033[0m                \n";
        cout << "\t----------------------------------------------------\n";
        cout << "\tPuede ingresar palabras, numeros o simbolos.\n\n";

        // Ingreso y validación por teclado de cada opción
        for (int i = 0; i < cantidad; i++) {
            bool valido = false;
            while (!valido) {
                cout << "\tIngrese la opcion " << (i + 1) << ": ";
                cin >> opciones[i];

                if (opciones[i] != "") {
                    valido = true;
                } else {
                    cout << "\t\033[1;31m[Error] La opcion no puede estar vacia.\033[0m\n";
                }
            }
        }

        // Mostrar las opciones registradas (Centrado)
        cout << "\n\t====================================================\n";
        cout << "\t           \033[1;32mOPCIONES REGISTRADAS\033[0m             \n";
        cout << "\t====================================================\n";
        for (int i = 0; i < cantidad; i++) {
            cout << "\t             [" << (i + 1) << "] " << opciones[i] << "\n";
        }
        cout << "\t====================================================\n";

        // Bucle para girar la ruleta las veces que desee con las MISMAS opciones
        char girarOtraVez = 's';
        while (girarOtraVez == 's' || girarOtraVez == 'S') {
            cout << "\n\t\033[1;33m>>> Girando la ruleta... <<<\033[0m\n";
            
            // Generar un índice aleatorio
            int ganador = rand() % cantidad;

            cout << "\t+--------------------------------------------------+\n";
            cout << "\t|                                                  |\n";
            cout << "\t|   \033[1;41;37m ¡EL GANADOR ES: " << opciones[ganador] << " ! \033[0m\n";
            cout << "\t|                                                  |\n";
            cout << "\t+--------------------------------------------------+\n";

            cout << "\n\tDesea volver a girar la ruleta actual? (s/n): ";
            cin >> girarOtraVez;
        }

        // Preguntar si quiere reiniciar todo (nuevas opciones / cambiar cantidad)
        cout << "\n\tDesea configurar una \033[1;36mnueva ruleta\033[0m desde cero? (s/n): ";
        cin >> reiniciarJuego;
        cout << "\n";
    }

    cout << "\n\t\033[1;32m¡Gracias por usar el simulador de ruleta! Hasta luego.\033[0m\n\n";

    return 0;
}