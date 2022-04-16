/*5. Calcular: s=(n+12)+(n+22)+(n+32)...(n+n2);donde
n es ingresado y s constituye la respuesta a mostrar
Autor --> Franklin Hiustong Gutierrez Arizaca*/
#include <iostream>
#include <conio.h>
int suma=0;//variable global
using namespace std;
//============= FUNCION===========
int sumatoria(int a, int b, int limite){
    int aux = a+b;
    cout<<" "<<aux;
    if(limite>=0){
        return sumatoria(a,aux,limite-1);
    }
    return 0;

}

//================================
int main() {
    int num, limit;
    cout<<"Ingrese un valor para [n]: "; cin>>num;
    cout<<"Ingrese un limite: "; cin>>limit;
    sumatoria(num,12, limit);

    getch();
    return 0;
}
