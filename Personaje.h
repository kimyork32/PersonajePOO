#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
using namespace std;

class Personaje{
    private:
        string name;
        string species;
        string type;
        string gender;
        int high;
        
    public:
        
        Personaje(string name="", string species="", string type="", string gender="", int high=0) {
	        this->name = name;
	        this->species = species;
	        this->type = type;
	        this->gender = gender;
	        this->high = high;
    	}
        
        string getName() const{
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        string getSpecies() const{
            return species;
        }
        void setSpecies(string species){
            this->species = species;
        }
        string getType() const{
            return type;
        }
        void setType(string type){
            this->type = type;
        }
        string getGender() const{
            return gender;
        }
        void setGender(string gender){
            this->gender = gender;
        }
        int getHigh() const{
            return high;
        }
        void setHigh(int high){
            this->high = high;
        }
};

#endif
