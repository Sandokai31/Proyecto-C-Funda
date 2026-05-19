#include "ReservaBuseta.h"

ReservaBuseta::ReservaBuseta() {
	this -> nombreTurista="";
	this -> numeroPasaporte="";
	this -> aeropuertoLlegada="";
	this -> hotelDestino="";
	this -> fechaReserva="";
	
	
	
	this -> horaReserva="";
	this -> cantidadPasajeros=0;
	this -> distanciaKm=0;
	this -> costoPorKm=0;
	this -> costoPorPasajero=0;
	
	this -> prioridad=0;
	this -> placaBuseta="";
	this -> nombreChofer="";
	this -> costoTotal=0;
	
}
ReservaBuseta::ReservaBuseta(string nombreTurista, string numeroPasaporte, string aeropuertoLlegada, string hotelDestino, string fechaReserva, 
			  string horaReserva, int cantidadPasajeros, int distanciaKm, int costoPorKm, int costoPorPasajero, 
			  int prioridad, string placaBuseta, string nombreChofer, int costoTotal){
	
	this -> nombreTurista=nombreTurista;
	this -> numeroPasaporte=numeroPasaporte;
	this -> aeropuertoLlegada= aeropuertoLlegada;
	this -> hotelDestino=hotelDestino;
	this -> fechaReserva=fechaReserva;
	
	
	
	this -> horaReserva=horaReserva;
	this -> cantidadPasajeros=cantidadPasajeros;
	this -> distanciaKm=distanciaKm;
	this -> costoPorKm=costoPorKm;
	this -> costoPorPasajero=costoPorPasajero;
	
	this -> prioridad=prioridad;
	this -> placaBuseta=placaBuseta;
	this -> nombreChofer=nombreChofer;
	this -> costoTotal=costoTotal;
}



void ReservaBuseta::setnombreTurista(string nombreTurista){
	this -> nombreTurista=nombreTurista;
	
}
void ReservaBuseta::setnumeroPasaporte(string numeroPasaporte){
	this -> numeroPasaporte=numeroPasaporte;
	
}
void ReservaBuseta::setaeropuertoLlegada(string aeropuertoLlegada){
	this -> aeropuertoLlegada= aeropuertoLlegada;
	
}
void ReservaBuseta::sethotelDestino(string hotelDestino){
	this -> hotelDestino=hotelDestino;
	
}
void ReservaBuseta::setfechaReserva(string fechaReserva){
	this -> fechaReserva=fechaReserva;
	
}

void ReservaBuseta::sethoraReserva (string horaReserva){
	this -> horaReserva=horaReserva;
	
}
void ReservaBuseta::setcantidadPasajeros (int cantidadPasajeros){
	this -> cantidadPasajeros=cantidadPasajeros;
	
}
void ReservaBuseta::setdistanciaKm(int distanciaKm){
	this -> distanciaKm=distanciaKm;
	
}
void ReservaBuseta::setcostoPorKm(int costoPorKm){
	this -> costoPorKm=costoPorKm;
	
}
void ReservaBuseta::setcostoPorPasajero(int costoPorPasajero){
	this -> costoPorPasajero=costoPorPasajero;
}

void ReservaBuseta::setprioridad(int prioridad){
	this -> prioridad=prioridad;
	
}
void ReservaBuseta::setplacaBuseta(string placaBuseta){
	this -> placaBuseta=placaBuseta;
	
}
void ReservaBuseta::setnombreChofer(string nombreChofer){
	this -> nombreChofer=nombreChofer;
	
}
void ReservaBuseta::setcostoTotal(int costoTotal){
	this -> costoTotal=costoTotal;
}

string ReservaBuseta::getnombreTurista (){
	return nombreTurista;
}
string ReservaBuseta::getnumeroPasaporte (){
	return numeroPasaporte;
}
string ReservaBuseta::getaeropuertoLlegada (){
	return aeropuertoLlegada;
}
string ReservaBuseta::gethotelDestino (){
	return hotelDestino;
}
string ReservaBuseta::getfechaReserva (){
	return fechaReserva;
}
string ReservaBuseta::gethoraReserva (){
	return horaReserva;
}
int ReservaBuseta::getcantidadPasajeros (){
	return cantidadPasajeros;
}
int ReservaBuseta::getdistanciaKm (){
	return distanciaKm;
}
int ReservaBuseta::getcostoPorKm (){
	return costoPorKm;
}
int ReservaBuseta::getcostoPorPasajero (){
	return costoPorPasajero;
}
int ReservaBuseta::getprioridad (){
	return prioridad;
}
string ReservaBuseta::getplacaBuseta (){
	return placaBuseta;
}
string ReservaBuseta::getnombreChofer (){
	return nombreChofer;
}
int ReservaBuseta::getcostoTotal (){
	return costoTotal;
}

string ReservaBuseta::toString(){
	stringstream x;
	x<< "Nombre de turista: " << nombreTurista << endl;
	x<< "Numero de pasaporte: " << numeroPasaporte << endl;
	x<< "Llegada al aeropuerto: " << aeropuertoLlegada << endl;
	x<< "Hotel de Destino: " << hotelDestino << endl;
	x<< "Fecha de reserva: " << fechaReserva << endl;
	x<< "Cantidad de pasajeros: " << cantidadPasajeros << endl;
	x<< "Distancia en Km: " << distanciaKm << endl;
	x<< "Costo Por Km: " << costoPorKm << endl;
	x<< "Costo por Pasajero: " << costoPorPasajero << endl;
	x<< "Prioridad: " << prioridad << endl;
	x<< "Placa de buseta: " << distanciaKm << endl;
	x<< "Chofer: " << nombreChofer << endl;
	x<< "Costo Total: " << costoTotal << endl;
	return x.str();
}

ReservaBuseta::~ReservaBuseta() {
	
}
