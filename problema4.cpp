/*5. Calcular: s=(n+12)+(n+22)+(n+32)...(n+n2);donde
n es ingresado y s constituye la respuesta a mostrar
Autor --> Franklin Hiustong Gutierrez Arizaca*/
#include <iostream>
#include <conio.h>
int suma=0;//variable global
using namespace std;
//============= FUNCION===========
int sumatoria(int n, int i, int n2){
    //condicion de parada
    if(i>=n2){
        cout<<"\n"<<i<<" ";
        return n+i;
    }
    //caso general
        cout<<"\n"<<i<<" ";
        return n+i+sumatoria(n,i+10,n2);
}
//================================

int main() {
    int num, limit;
    cout<<"Ingrese un valor para [n]: "; cin>>num;
    cout<<"Ingrese un limite: "; cin>>limit;
    cout<<sumatoria(num,12, limit);

    getch();
    return 0;
}