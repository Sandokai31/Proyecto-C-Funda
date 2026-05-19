#include<iostream>
#include "ReservaBuseta.h"
using namespace std;

int main () {
	
	int op=0;
	ReservaBuseta reservas[10];
	
	cout <<"-----Reserva de Busetas KMS-----"<<endl;
	cout << "--Bienvenido al sistema de reservas KMS" << endl;
	do {
		cout << endl << "--Elija la opcion que desea realizar. Para ello, digite el numero que aparece a la izquierda de cada opcion" << endl;
		cout << endl << "0- Registrar 5 reservas (valores por defecto)" << endl;
		cout << "1. Registrar reserva" << endl;
		cout << "2. Mostrar todas las reservas" << endl;
		cout << "3. Calcular costo total de todas las reservas" << endl;
		cout << "4. Ordenar reservas por prioridad" << endl;
		cout << "5. Eliminar una reserva (por pasaporte)" << endl;
		cout << "6. Salir"<< endl;
		cout << endl << "Opcion: ";
		cin >> op;
		switch (op) {
			case 1: {
				break;
			}
			case 2: {
				break;
			}
			case 3: {
				break;
			}
			case 4: {
				break;
			}
			case 5: {
				break;
			}
			case 6: {
				cout << endl << "--- Muchas gracias por su atencion. Feliz viaje. ---";
				break;
			}
			default: {
				cout << "---ERROR--" << endl; 
				cout << "Opcion incorrecta" << endl;
			}
		}
	} while(op!=6);
	
	return 0;
}
