#include<iostream>
#include "ReservaBuseta.h"
using namespace std;

int main () {
	
	string nombreTurista;
	string numeroPasaporte;
	string aeropuertoLlegada;
	string hotelDestino;
	string fechaReserva;
	string horaReserva;
	int cantidadPasajeros;
	int distanciaKm;
	int costoPorKm=500;
	int costoPorPasajero=20000;
	int costoTotal=0;
	
	
	int op=0;
	
	int reserva=0; //reserva no es igual a reservas
	ReservaBuseta reservas[10];
	
	
	cout <<"-----Reserva de Busetas KMS-----"<<endl;
	cout << "--Bienvenido al sistema de reservas KMS" << endl;
	do {
		cout << endl << "--Elija la opcion que desea realizar--" << endl;
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
				if(reserva<10){
				
				cout<<"Diguite su nombre "<<endl;
				cin>>nombreTurista;
				reservas[reserva].setnombreTurista(nombreTurista);
				
				cout<<"Diguite su Numero de Pasaporte "<<endl;
				cin>>numeroPasaporte;
				reservas[reserva].setnumeroPasaporte(numeroPasaporte);
				
				cout<<"Diguite Aeropuerto de llegada "<<endl;
				cin>>aeropuertoLlegada;
				reservas[reserva].setaeropuertoLlegada(aeropuertoLlegada);
				
				cout<<"Diguite su Hotel destino "<<endl;
				cin>>hotelDestino;
				reservas[reserva].sethotelDestino(hotelDestino);
				
				cout<<"Fecha de reserva (dd/mm/aaaa) "<<endl;
				cin>>fechaReserva;
				reservas[reserva].setfechaReserva(fechaReserva);
				
				cout<<"Hora de reserva (h:m) "<<endl;
				cin>>horaReserva;
				reservas[reserva].sethoraReserva(horaReserva);
				
				cout<<"Cantidad de pasajeros "<<endl;
				cin>>cantidadPasajeros;
				reservas[reserva].setcantidadPasajeros(cantidadPasajeros);
				
				reservas[reserva].setcostoPorPasajero(costoPorPasajero);
				
				cout<<"Distancia en Km "<<endl;
				cin>>distanciaKm;
				reservas[reserva].setdistanciaKm(distanciaKm);
				
				reservas[reserva].setcostoPorKm(costoPorKm);
				
				//Agregar asignacion de chofer y placa
				
				costoTotal=(distanciaKm*costoPorKm)+(cantidadPasajeros*costoPorPasajero);
				reservas[reserva].setcostoTotal(costoTotal);
				
				reserva++; 
				}else{
					cout<<"---Reservas agotadas---"<<endl;
				}
				
			break;
		}
			case 2: {
			
			for(int i=0;i<reserva;i++){
				cout<<reservas[i].toString()<<endl;
			}
			
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
