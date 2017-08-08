/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   punto.cpp
 * Author: Dell
 * 
 * Created on 7 de agosto de 2017, 10:15
 */
//Ejemplo punto ADT en C++
#include "punto.h"
#include<iostream>
using namespace std;

int main()
{
    class punto{
    private:
	int x;
	int y;
	int z;
	std::string dim = "";
public:
	punto(int coorx, int coory, int coorz,string dim) { //Constructor completo inicializa todos los atributos
		x = coorx;
		y = coory;
		z = coorz;
		dim = "Tres dimensiones";
		}
	punto(int coorx, int coory){ //Constructor dos dimensiones
		x = coorx;
		y = coory;
                z=0;
		dim = "Dos dimensiones";
		}
	punto(){ //Constructor inicializado en el origen
	x = 0;
	y = 0;
	z = 0;	
	dim = "Sin dimesiones";
	}
	//Setters
        void setX(int coorx){
	x = coorx;
		}
	void setY(int coory){
	y = coory;
		}
	void setZ(int coorz){
	z = coorz;
		}
        //Getters
	int getX(){
            return x;
	}
        int getY(){
            return y;
        }
        int getZ(){
            return z;
	}
	};
    return 0;
}

