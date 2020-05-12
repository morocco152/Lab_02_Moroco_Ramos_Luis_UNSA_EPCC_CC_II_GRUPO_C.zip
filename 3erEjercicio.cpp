#include<iostream>
using namespace std;

int orden(int arre[],int tam){
    int aux;//valo auxiliar temporal
    for(int i=0;i<tam;i++){//bucle inicio de 0->
        for(int j=i+1;j<tam;j++){//bucle que inica de 1-> Asi compara (n) <> (n+1)
            if(arre[i]<arre[j]){// se comparan los valores 
                aux=arre[i];// valor a aux, temporalmente
                arre[i]=arre[j];//se guarda n+1 en n 
                arre[j]=aux;//valor de n en n+1
            }
        }
    }
    for(int i=0;i<tam;i++){cout<<arre[i]<<" ";}
}
int main(){
    int arr[]={0,1,2,3,4,5,6};//declara elarreglo 
    orden(arr,7);//llama a fx
    return 0;
}