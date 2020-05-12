#include<iostream>
using namespace std;

int sum(int arre[],int tam){
    int sum=0; //contador
    for(int i=0;i<tam;i++){//bucle de 0 tam
        sum+=arre[i];//se suma cada elemento
    }
    return sum; //retorna la suma total
}
int main(){
    int arr[]={0,1,2,3,4,5,6};//se declara el array
    cout<<sum(arr,7)<<endl;//incoca ala fx
    return 0;
}