#include <iostream>

struct Elementos{
    
    std:: string codigo[9], nombre, Elementos[9];
    double longitud, capacidadmax;
    float cargas[3];
    int factor, estadosegu;


};

void registrarElemento(Elementos &elemento){
    int opc;
    std:: cout << "Cuantos elementos desea registrar? " << std:: endl;
    std:: cin >> opc;

    if (opc < 1 || opc > 10){

        std:: cout << "Opcion invalida, intenta de nuevo" << std:: endl;
    }

    else{ 
std:: cout << "Elige un nombre, codigo, longitud, las tres cargas y la capacidad maxima para tus elementos: " << std:: endl;
for (int i = 0; i < opc; i++){
        std:: cout << "Nombre del elemento: " << std:: endl;
        std:: cin >> elemento.nombre;
        std:: cout << "Codigo del elemento: " << std:: endl;  
        std:: cin >> elemento.codigo[9];
        std:: cout << "Longitud del elemento: " << std:: endl;
        std:: cin >> elemento.longitud;
        std:: cout << "Capacidad maxima: " << std:: endl;
        std:: cin >> elemento.capacidadmax;
        
        for (int i = 0; i < 3; i++){
            std:: cout << "Ingresa el valor de las cargas: " << std:: endl;
            std:: cin >> elemento.cargas[i];
        }

    }
        }
}


int main (){
    Elementos codigos;
    registrarElemento (codigos);
    return 0;
}