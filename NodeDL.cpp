/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeDL.cpp
 * Author: Dell
 * 
 * Created on 21 de septiembre de 2017, 20:31
 */
#include "NodeDL.h"
#include <string>
template <typename T> class Node{//Template es igual a clase generica en Java
public:
T data;
NodeDL* next;//Apuntador a siguiente
NodeDL* back;//Apuntador a anterior
NodeDl(T d){ //Constructor
data=d;
next= nullptr;
back= nullptr;
}
/*
std:: toString(){
return data;
}
*/
};