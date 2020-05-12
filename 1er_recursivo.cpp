#include<iostream>
using namespace std;

int sum(int arre[],int tam){//paso de arr y su tamaño
    int s=0;//suma de elementos
    if (tam==1){return arre[0];}//si el tamño solo es de 1, retorna el primer valor que en computacion es 0
    else{ return arre[tam-1]+sum(arre,--tam);}// si no es asi, se repite el proceso 
}                                             //el areglo disminuye en -1 y se suma a fx restando en -1 el tamaño.
int main(){
    int arr[]={0,1,2,3,4,5,6};// declara el array
    cout<<sum(arr,7)<<endl;// llama a la fx
    return 0;
}