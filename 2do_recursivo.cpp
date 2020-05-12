#include <iostream>
using namespace std;

void inv(int arre[],int tam){//recibe el arreglo
    if(tam == 1){//caso base 
        return;
    }else{
        int aux,i=0;//aux temporal y variable inicial en 0
        aux=arre[i];//se pone la variable en aux temporalmente para poder cambiar
        arre[i]=arre[tam-1];//el ultimo valor de cambia con el primero 
        arre[tam-1]=aux;//el valor auxiliar (i), se guarda en el ultimo
        inv(&arre[1],tam-2);// se repite el proceso  1 2 3 -> 3 2 1;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};//declara el arreglo 
    inv(arr,7);// llama a fx
    for(int i=0;i<7;i++) {//despues del fx existen nuevos valores
        cout<<arr[i]<<" ";//imprime los valores
    }
    return 0;
}