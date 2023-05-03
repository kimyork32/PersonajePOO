#ifndef DYNAMICPERSONAJEARRAY_H
#define DYNAMICPERSONAJEARRAY_H

#include "Personaje.h"

class DynamicPersonajeArray{
    private:
        Personaje *data;
        int size;
    public:
        DynamicPersonajeArray(){   //constructor predeterminado
            this->size = 0;
            this->data = new Personaje[size];
        }
        DynamicPersonajeArray(Personaje arr[], int size){  //constructor con tamaño inicial y arreglo predeterminado
            this->size = size;
            this->data = new Personaje[size];
            for(int i=0; i<size; i++)
                data[i] = arr[i];
        }
        DynamicPersonajeArray(const DynamicPersonajeArray &o){  //constructor copia
            this->size = o.size;
            this->data = new Personaje[o.size];
            for(int i=0; i<size; i++)
                data[i] = o.data[i];
        }
        ~DynamicPersonajeArray(){   //destructor
            delete[] data;
        }
        
        void push_back(Personaje value){
            Personaje *temp = new Personaje[size+1];
            for(int i=0; i<size; i++){
                temp[i] = data[i];
            }
            temp[size] = value;
			delete[] data;
            data = temp;
            size++;
            
        }
        
        void insert(int index, Personaje value){
        	if(index<0||index>=size){
        		return;
		}
			
            Personaje *temp = new Personaje[size+1];
            for(int i=0; i<size; i++){
                if(i>=index){
                    temp[i+1] = data[i];
                }else{
                    temp[i] = data[i];
                }
            }
            temp[index] = value;
            delete[] data;
            data = temp;
            size++;
        }
        
        void remove(int index){
            if(index<0||index>=size){
            	return;
	    }
            Personaje *temp = new Personaje[size-1];
            for(int i=0; i<size-1; i++){
                if(i>=index){
                    temp[i] = data[i+1];
                }else{
                    temp[i] = data[i];
                }
            }
            delete[] data;
	    data = temp;
            size--;
        }
        
        void print(){   
            for(int i=0; i<size; i++)
                cout << data[i].getName() << " ";
            cout << endl;
        }
};

#endif
