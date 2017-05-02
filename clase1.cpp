#include <iostream>

using namespace std;

/*La funcion muestra el menu y valida la entrada
-que el valor sea un numero correcto
-retorna la opcion elegida por el usuario
*/
int menu();

int main(){

bool salir = false;
  while(!salir){

	switch(menu()){
	case 1:{

	int num1, num2;
	cout<<"Escriba un numero: ";
	cin>>num1;
	cout<<"Escriba otro numero: ";
	cin>>num2;
	cout<<"El resultado es: "<<num1 * num2<<endl;
		
	break;
	}
	case 2:{
	
	int num1, num2;
	cout<<"Escriba un numero: ";
        cin>>num1;
        cout<<"Escriba otro numero: ";
        cin>>num2;
        cout<<"El resultado es: "<<num1 + num2<<endl;

 
	break;
	}
	case 3:{
	
	int num1, num2, resul;
	cout<<"Escriba un numero: ";
        cin>>num1;
	
        cout<<"El factorial de "<<num<<" es:"<<factorial(num)<<endl;


	
	break;
	}
	case 4:{
	
	salir=true;
	
	break;
	}

	}//switch
  }//while
return 0;
}//main

int factorial(int i){
  if(i<0)/validar input
     return -1;
  else if(i==0){
     return 1;
  }else{
     return i * factorial(i-1);
  }
}

int menu(){
  int opcion;
  bool valido = false;
  do{
     cout<<"      MENU"<<endl
	 <<"1.- Multiplicar dos numeros"<<endl
	 <<"2.- Sumar dos numeros"<<endl
	 <<"3.- Calcular factorial"<<endl
	 <<"4.- Salir"<<endl;

	cout<<"Ingrese una Opcion: ";
	cin>>opcion;

	if(opcion > 0 && opcion <5){

	valido=true;
	
	}else{
	    cout<<"Opcion no valida, intente de nuevo ..."<<endl;
	}

  }while(!valido);

return opcion;
}
