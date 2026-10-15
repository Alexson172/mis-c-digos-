/*realice un programa que permita realizar conversiones entre unidades de longitud, masa y tirmpo considere las mas usadas valide la entrada
por teclado y concidere las retricciones del ultimo ejercicio IMPORTANTE el usuario debe ser capaz de seleccionar las unidades que 
desea convertir*/
#include <iostream>

using namespace std;

int main() {
    char repetir = 's';

    // Bucle principal para realizar múltiples conversiones
    while (repetir == 's' || repetir == 'S') {
        int opcionCategoria = 0;

        // 1. Selección y validación de la categoría (Centrado)
        while (opcionCategoria < 1 || opcionCategoria > 4) {
            cout << "\n\n\n"; // Margen superior para centrar verticalmente
            cout << "\t\t\t====================================================\n";
            cout << "\t\t\t         \033[1;38;5;117mCONVERSOR DE UNIDADES UNIVERSAL\033[0m            \n";
            cout << "\t\t\t====================================================\n";
            cout << "\t\t\tSeleccione una categoria:\n";
            cout << "\t\t\t  1. Longitud\n";
            cout << "\t\t\t  2. Masa\n";
            cout << "\t\t\t  3. Tiempo\n";
            cout << "\t\t\t  4. Salir\n";
            cout << "\t\t\t----------------------------------------------------\n";
            cout << "\t\t\tIngrese su opcion (1-4): ";
            cin >> opcionCategoria;

            if (opcionCategoria < 1 || opcionCategoria > 4) {
                cout << "\n\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida. Intente de nuevo.\033[0m\n";
            }
        }

        // Si elige salir
        if (opcionCategoria == 4) {
            break;
        }

        int origen = 0, destino = 0;
        double valor = 0, valorEnBase = 0, resultado = 0;
        string nombreOrigen = "", nombreDestino = "";

        // ==========================================
        // CATEGORÍA 1: LONGITUD
        // ==========================================
        if (opcionCategoria == 1) {
            while (origen < 1 || origen > 6) {
                cout << "\n\t\t\t----------------------------------------------------\n";
                cout << "\t\t\t            \033[1;38;5;222mUNIDADES DE LONGITUD\033[0m            \n";
                cout << "\t\t\t----------------------------------------------------\n";
                cout << "\t\t\t1. Kilometros (km)\n\t\t\t2. Metros (m)\n\t\t\t3. Centimetros (cm)\n\t\t\t4. Milimetros (mm)\n\t\t\t5. Millas (mi)\n\t\t\t6. Pulgadas (in)\n";
                cout << "\t\t\tElija la unidad de \033[1;38;5;158mORIGEN\033[0m (1-6): ";
                cin >> origen;
                if (origen < 1 || origen > 6) cout << "\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida.\033[0m\n";
            }

            while (destino < 1 || destino > 6) {
                cout << "\t\t\tElija la unidad de \033[1;38;5;225mDESTINO\033[0m (1-6): ";
                cin >> destino;
                if (destino < 1 || destino > 6) cout << "\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida.\033[0m\n";
            }

            cout << "\t\t\tIngrese el valor a convertir: ";
            cin >> valor;

            // Conversiones a Metros (Base)
            if (origen == 1) { valorEnBase = valor * 1000.0; nombreOrigen = "km"; }
            else if (origen == 2) { valorEnBase = valor * 1.0; nombreOrigen = "m"; }
            else if (origen == 3) { valorEnBase = valor * 0.01; nombreOrigen = "cm"; }
            else if (origen == 4) { valorEnBase = valor * 0.001; nombreOrigen = "mm"; }
            else if (origen == 5) { valorEnBase = valor * 1609.34; nombreOrigen = "mi"; }
            else if (origen == 6) { valorEnBase = valor * 0.0254; nombreOrigen = "in"; }

            // Conversiones de Metros a Destino
            if (destino == 1) { resultado = valorEnBase / 1000.0; nombreDestino = "km"; }
            else if (destino == 2) { resultado = valorEnBase / 1.0; nombreDestino = "m"; }
            else if (destino == 3) { resultado = valorEnBase / 0.01; nombreDestino = "cm"; }
            else if (destino == 4) { resultado = valorEnBase / 0.001; nombreDestino = "mm"; }
            else if (destino == 5) { resultado = valorEnBase / 1609.34; nombreDestino = "mi"; }
            else if (destino == 6) { resultado = valorEnBase / 0.0254; nombreDestino = "in"; }
        }

        // ==========================================
        // CATEGORÍA 2: MASA
        // ==========================================
        else if (opcionCategoria == 2) {
            while (origen < 1 || origen > 4) {
                cout << "\n\t\t\t----------------------------------------------------\n";
                cout << "\t\t\t              \033[1;38;5;222mUNIDADES DE MASA\033[0m              \n";
                cout << "\t\t\t----------------------------------------------------\n";
                cout << "\t\t\t1. Kilogramos (kg)\n\t\t\t2. Gramos (g)\n\t\t\t3. Libras (lb)\n\t\t\t4. Onzas (oz)\n";
                cout << "\t\t\tElija la unidad de \033[1;38;5;158mORIGEN\033[0m (1-4): ";
                cin >> origen;
                if (origen < 1 || origen > 4) cout << "\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida.\033[0m\n";
            }

            while (destino < 1 || destino > 4) {
                cout << "\t\t\tElija la unidad de \033[1;38;5;225mDESTINO\033[0m (1-4): ";
                cin >> destino;
                if (destino < 1 || destino > 4) cout << "\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida.\033[0m\n";
            }

            cout << "\t\t\tIngrese el valor a convertir: ";
            cin >> valor;

            // Conversiones a Kilogramos (Base)
            if (origen == 1) { valorEnBase = valor * 1.0; nombreOrigen = "kg"; }
            else if (origen == 2) { valorEnBase = valor * 0.001; nombreOrigen = "g"; }
            else if (origen == 3) { valorEnBase = valor * 0.453592; nombreOrigen = "lb"; }
            else if (origen == 4) { valorEnBase = valor * 0.0283495; nombreOrigen = "oz"; }

            // Conversiones de Kilogramos a Destino
            if (destino == 1) { resultado = valorEnBase / 1.0; nombreDestino = "kg"; }
            else if (destino == 2) { resultado = valorEnBase / 0.001; nombreDestino = "g"; }
            else if (destino == 3) { resultado = valorEnBase / 0.453592; nombreDestino = "lb"; }
            else if (destino == 4) { resultado = valorEnBase / 0.0283495; nombreDestino = "oz"; }
        }

        // ==========================================
        // CATEGORÍA 3: TIEMPO
        // ==========================================
        else if (opcionCategoria == 3) {
            while (origen < 1 || origen > 4) {
                cout << "\n\t\t\t----------------------------------------------------\n";
                cout << "\t\t\t             \033[1;38;5;222mUNIDADES DE TIEMPO\033[0m             \n";
                cout << "\t\t\t----------------------------------------------------\n";
                cout << "\t\t\t1. Segundos (s)\n\t\t\t2. Minutos (min)\n\t\t\t3. Horas (h)\n\t\t\t4. Dias (dias)\n";
                cout << "\t\t\tElija la unidad de \033[1;38;5;158mORIGEN\033[0m (1-4): ";
                cin >> origen;
                if (origen < 1 || origen > 4) cout << "\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida.\033[0m\n";
            }

            while (destino < 1 || destino > 4) {
                cout << "\t\t\tElija la unidad de \033[1;38;5;225mDESTINO\033[0m (1-4): ";
                cin >> destino;
                if (destino < 1 || destino > 4) cout << "\t\t\t\033[1;38;5;217m[Aviso] Opcion no valida.\033[0m\n";
            }

            cout << "\t\t\tIngrese el valor a convertir: ";
            cin >> valor;

            // Conversiones a Segundos (Base)
            if (origen == 1) { valorEnBase = valor * 1.0; nombreOrigen = "s"; }
            else if (origen == 2) { valorEnBase = valor * 60.0; nombreOrigen = "min"; }
            else if (origen == 3) { valorEnBase = valor * 3600.0; nombreOrigen = "h"; }
            else if (origen == 4) { valorEnBase = valor * 86400.0; nombreOrigen = "dias"; }

            // Conversiones de Segundos a Destino
            if (destino == 1) { resultado = valorEnBase / 1.0; nombreDestino = "s"; }
            else if (destino == 2) { resultado = valorEnBase / 60.0; nombreDestino = "min"; }
            else if (destino == 3) { resultado = valorEnBase / 3600.0; nombreDestino = "h"; }
            else if (destino == 4) { resultado = valorEnBase / 86400.0; nombreDestino = "dias"; }
        }

        // Mostrar el resultado enmarcado y centrado
        cout << "\n\t\t\t+--------------------------------------------------+\n";
        cout << "\t\t\t|                                                  |\n";
        cout << "\t\t\t|   \033[1;38;5;121mRESULTADO: " << valor << " " << nombreOrigen << " = " << resultado << " " << nombreDestino << "\033[0m\n";
        cout << "\t\t\t|                                                  |\n";
        cout << "\t\t\t+--------------------------------------------------+\n";

        // Preguntar si desea hacer otra conversión
        cout << "\n\t\t\tDesea realizar otra conversion? (s/n): ";
        cin >> repetir;
        cout << "\n";
    }

    cout << "\n\t\t\t\033[1;38;5;183mGracias por usar el conversor. Hasta luego.\033[0m\n\n";

    return 0;
}