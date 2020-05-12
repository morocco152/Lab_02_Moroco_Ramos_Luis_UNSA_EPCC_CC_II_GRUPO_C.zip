#include<iostream>
using namespace std;

void inv(int arre[],int tam){
  for(int i=tam-1;i>=0;i--){//bucle que inicia desde el final del arreglo y decrece hasta 0
    cout<<arre[i];//imprime cada elemento a la inversa
  }
}
int main(){
    int arr[]={0,1,2,3,4,5,6};//declarar arreglo
    inv(arr,7);//llama a fx
    return 0;
}
