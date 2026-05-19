#ifndef RESERVABUSETA_H
#define RESERVABUSETA_H
#include<iostream>
#include <sstream>
using namespace std;

class ReservaBuseta {
public:
	ReservaBuseta();
	ReservaBuseta(string nombreTurista, string numeroPasaporte, string aeropuertoLlegada, string hotelDestino, string fechaReserva, 
				  string horaReserva, int cantidadPasajeros, int distanciaKm, int costoPorKm, int costoPorPasajero, 
				  int prioridad, string placaBuseta, string nombreChofer, int costoTotal);
	
	
	~ReservaBuseta();
	
	
	void setnombreTurista(string nombreTurista);
	void setnumeroPasaporte(string numeroPasaporte);
	void setaeropuertoLlegada(string aeropuertoLlegada);
	void sethotelDestino(string hotelDestino);
	void setfechaReserva(string fechaReserva);
	void sethoraReserva (string horaReserva);
	
	void setcantidadPasajeros (int cantidadPasajeros);
	void setdistanciaKm(int distanciaKm);
	void setcostoPorKm(int costoPorKm);
	void setcostoPorPasajero(int costoPorPasajero);
	
	void setprioridad(int prioridad);
	void setplacaBuseta(string placaBuseta);
	void setnombreChofer(string nombreChofer);
	void setcostoTotal(int costoTotal);
	
	string getnombreTurista();
	string getnumeroPasaporte();
	string getaeropuertoLlegada();
	string gethotelDestino ();
	string getfechaReserva ();
	string gethoraReserva ();
	
	
	int getcantidadPasajeros ();
	int getdistanciaKm();
	int getcostoPorKm();
	int getcostoPorPasajero();
	
	
	int getprioridad();
	string getplacaBuseta();
	string getnombreChofer();
	int getcostoTotal();
	
	string toString();
	
private:
	string nombreTurista;
	string numeroPasaporte;
	string aeropuertoLlegada; 
	string hotelDestino;
	string fechaReserva;
	string horaReserva;
	int cantidadPasajeros; 
	int distanciaKm;
	int costoPorKm;
	int costoPorPasajero;
	int prioridad;
	string placaBuseta;
	string nombreChofer;
	int costoTotal;
};

#endif
