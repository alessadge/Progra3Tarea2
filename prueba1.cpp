#include <iostream>
using namespace std;

void ejemplo();

int main(){

cout <<"Hola mundo" <<endl;
int salir=1;
while(salir == 1){
int arreglo[5];

//leer valores
for(int i = 0 ; i < 5 ; i++){
	cout<< "Escriba un numero: ";
	cin>>arreglo[i];
}

//imprimir valores
cout<<endl<<"Los valores leidos son: "<<endl;
for(int i = 0; i < 5 ; i++){
	cout<<arreglo[i]<<endl;
}


cout<<endl<<"Ingrese 1 para continuar, 0 para salir\n";
cin>>salir;
}
return 0;
}
void ejemplo(){

}
