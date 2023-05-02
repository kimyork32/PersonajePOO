#include "Personaje.h"
#include "DynamicPersonajeArray.h"

int main(){
    Personaje p1("Aurora", "Elfa", "Maga", "Femenino", 170);
    Personaje p2("Backhand", "Orco", "Guerrero", "Masculino", 142);
    Personaje p3("Zephyr", "Humano", "Ladrón", "Masculino", 180);
    Personaje p4("Saphira", "Dragón", "Guerrera", "Femenino", 220);
    Personaje p5("Lydia", "Nigromante", "Nigromante", "Femenino", 160);


    DynamicPersonajeArray arr;
    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    arr.push_back(p5);
	
    arr.print();
    
    cout << p1.getName() << endl;
}

