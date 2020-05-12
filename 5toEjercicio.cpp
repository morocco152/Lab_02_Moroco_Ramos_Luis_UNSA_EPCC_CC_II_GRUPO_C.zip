#include <iostream>
using namespace std;

int longitud(char cadena[])
{
   int acum = 0;
   while( cadena[acum] != '\0' )
       acum++;
   return acum;// codigo recursivo de # elementos
}
void insertarCadena(char cadenaA[],char cadenaB[]){
    int tam1 = longitud(cadenaB);
    int a=0;
    for (int i = tam1; i<50; i++) {
        cadenaA[i] = cadenaA[a];
        a++;
    }
    
}

int c = 0;
int main(){
    char a[50]="hola";// espacio en memoria
    char b[50]="mundo";
    insertarCadena(a, b);// llama fx
    cout<<"LACADENA UNIDA ES: "<<b<<endl;
}