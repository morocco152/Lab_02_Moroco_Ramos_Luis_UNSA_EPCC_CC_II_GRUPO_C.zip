#include <iostream>
using namespace std;

int tmn(int arre[],int t){//recibe el arreglo y tamaño 
    if (t==0){return 0;}//si el tamaño es cero solo regresa cero 
    return (tmn(arre,t-1) + 1);//cada ves que es t!=0, suma +1 y repite el proceso, pero con t-1; para seguir bajando
}
int main(){
    int array[] = {3,1,8,4,5,9,7};//declarar 
    int tam=7;// tamaño 
    cout<<"#:"<<tmn(array,tam);// se llama a la fx
 
}