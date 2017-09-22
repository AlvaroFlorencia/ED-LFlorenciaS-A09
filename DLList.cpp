/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DLList.cpp
 * Author: Dell
 * 
 * Created on 21 de septiembre de 2017, 20:56
 */

#include "DLList.h"
#include "NodeDL.cpp"
#include<iostream>
using namespace std;
template<typename T> class DLList{
public:
NodeDL<T>* first;
NodeDL<T>* last;
NodeDL<T>* pointer;
int length;
DLList(){
first= NULL;
last=NULL;
pointer=NULL;
length=0;

}
DLList(T d){ //Constructor con un primer nodo
NodeDL<T> node = new NodeDL<T>(d);
//Apuntamos primero y último el nuevo nodo
*first=node;
*last=node;

//Incrementamos el contador de los elementos de la lista
length++;
}
//Métodos
//Está vacía?
bool isEmpty(){
return length==0;
}
//Insertar al inicio
//Escenarios:Lista vacía,Lista con elementos.
void insertFirst(T d){
NodeDL<T> node=new NodeDL<T>(d);//Si la lista está vacía
if(isEmpty()){
*first=node;
*last=node;


}else{//Si la lista ya cuenta con elementos
//El siguiente dfel nuevo nodo apunta a donde apunta first
node.next* =first;//Node es un objeto por eos el astedisco
//EL nodo que apunta first en su apuntadr back apuna al nuevo nodo
first->back=node; //first es un apuntador por eso la flecha
//El apuntador first apunta al nuevo nodo
*first=node;

}
length++;
}
void insertLast(T d){
//Instanciamos el nuevo nodo
NodeDL<T> node =new NodeDL<T>(d);
if(isEmpty()){   //Si està vacia se añade como inicio y final
*first=node;
*last=node;

}else{
node.back*=last; //Si no està vacia se agrega al final
last->next=node;
*last=node;
}
length++;
}
void deleteFirst(){   
    
    if(isEmpty){
        printf("The list is empty"); //Se checa si està vacìa 
    }else{
        if(first.next==nullptr){ //Si se tiene un solo elemento
        *first=nullptr;
        *last=nullptr;
        }
        else{
            *first=first->next; //Si se tienen distintos elementos
            first->back=nullptr;
        }
        length--;
    }
    
}
 
void deleteLast(){
    if(isEmpty){
        printf("The list is empty"); //Se checa que la lita este vacìa
    }else{
        if(first.next==nullptr){  //Si solo es un elemento
        *first=nullptr;
        *last=nullptr;
        }else{ //Si se tiene distintos elementos
            pointer=first;
            while(pointer->next!=last){  //Se recoroe  la lista hasta que llegue uno antes del final
                pointer=pointer.next;
            }
            last=pointer;
            last->next=nullptr;
            pointer=nullptr;
        }
        length--;
    }
    
}
void DeleteNode(T d){
     pointer=first;
        NodeDL<T> node= new NodeDL<T>(d);
    if(isEmpty){ //Se checa que esta vacìa
        printf("The list is empty");
    }else{
        if(first==last){ //Si hay un solo elemento
            if(first.data==d){ //
                deleteFirst();
            }
        }else{ //
           
                if(first.data==d){//Se vuelve a anzalizar los demàs datos
                    deleteFirst();
                }else{
                    pointer=first; //Puntero se vuelve first
                    NodeDL<T>*node2=first.next.next; //Se crea un segundo nodo
                    while(pointer.next!=NULL){ //miestras no se llegue al final
                        if(pointer.next.data==node){ //Si los dato siguiente igual nodo
                            pointer.next=pointer.next.next;  //Se mueven los punteros 
                            node2=node2.back.back;
                        }
                        pointer=pointer.next; 
                        node2=node2.next;
                    }
                    
                }
            }
        }
        
    }


void ShowListStartEnd(){
    pointer=first;
    cout<<"first->";
    for(int i= 0; i<length;i++){  //Se corrre el arreglo de izquierda a derecha y se muestra el contenido
        cout<<"["<<pointer.data.toString<<"]->";
        pointer=pointer.next;
    }
    cout<<"<-last";
    
}
void ShowListEndStart(){
    pointer=last;
    cout<<"last->"; //Se corre el arreglo de derecha  a izquierda y se muestra el contenido
    for(int i= 0; i<length;i--){
        cout<<"["<<pointer.data.toString<<"]->";
        pointer=pointer.back;
    }
    cout<<"<-first";
    
}


};
