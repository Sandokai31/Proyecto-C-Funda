#include "ReservaBuseta.h"

ReservaBuseta::ReservaBuseta() {
	this -> nombreTurista="";
	this -> numeroPasaporte="";
	this -> aeropuertoLlegada="";
	this -> hotelDestino="";
	this -> fechaReserva="";
	this -> horaReserva="";
	this -> aeropuertoLlegada="";
	this -> aeropuertoLlegada="";
	this -> aeropuertoLlegada="";
}
ReservaBuseta::ReservaBuseta(string nombreTurista, string numeroPasaporte, string aeropuertoLlegada, string hotelDestino, string fechaReserva, string horaReserva, int cantidadPasajeros, int distanciaKm, int costoPorKm, int costoPorPasajero, int prioridad, string placaBuseta, string nombreChofer, int costoTotal) {
		
	}


void ReservaBuseta::setnombreTurista(string nombreTurista);
void ReservaBuseta::setnumeroPasaporte(string numeroPasaporte);
void ReservaBuseta::setaeropuertoLlegada(string aeropuertoLlegada);
void ReservaBuseta::setdistanciaKm(int distanciaKm);
void ReservaBuseta::setcostoPorKm(int costoPorKm);
void ReservaBuseta::setcostoPorPasajero(int costoPorPasajero);
void ReservaBuseta::setprioridad(int prioridad);
void ReservaBuseta::setplacaBuseta(string placaBuseta);
void ReservaBuseta::setnombreChofer(string nombreChofer);
void ReservaBuseta::setcostoTotal(int costoTotal);
	
string ReservaBuseta::getnombreTurista();
string ReservaBuseta::getnumeroPasaporte();
string ReservaBuseta::getaeropuertoLlegada();
int ReservaBuseta::getdistanciaKm();
int ReservaBuseta::getcostoPorKm();
int ReservaBuseta::getcostoPorPasajero();
int ReservaBuseta::getprioridad();
string ReservaBuseta::getplacaBuseta();
string ReservaBuseta::getnombreChofer();
int ReservaBuseta::getcostoTotal();

string ReservaBuseta::toString();

ReservaBuseta::~ReservaBuseta() {
	
}

