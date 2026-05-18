#ifndef RESERVABUSETA_H
#define RESERVABUSETA_H
#include<iostream>
using namespace std;

class ReservaBuseta {
public:
	ReservaBuseta();
	ReservaBuseta(string nombreTurista, string numeroPasaporte, string aeropuertoLlegada, string hotelDestino, string fechaReserva, string horaReserva, string cantidadPasajeros, string distanciaKm, string costoPorKm, string costoPorPasajero, string prioridad, string placaBuseta, string nombreChofer, string costoTotal);
	~ReservaBuseta();
	void setnombreTurista(string nombreTurista);
	void setnumeroPasaporte(string numeroPasaporte);
	void setaeropuertoLlegada(string aeropuertoLlegada);
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
	string getdistanciaKm();
	string getcostoPorKm();
	string getcostoPorPasajero();
	string getprioridad();
	string getplacaBuseta();
	string getnombreChofer();
	string getcostoTotal();

	string toString();
private:
	string nombreTurista;
	string numeroPasaporte;
	string aeropuertoLlegada; 
	string hotelDestino;
	string fechaReserva;
	string horaReserva;
	string cantidadPasajeros; 
	string distanciaKm;
	string costoPorKm;
	string costoPorPasajero;
	string prioridad;
	string placaBuseta;
	string nombreChofer;
	string costoTotal;
};

#endif

