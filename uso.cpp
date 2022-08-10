//Programa para el uso de operadores de c++
#include <iostream>
using namespace std;

main(){

float resultado, operando1, operando2, auxiliar;
int contador=0, incremento, decremento;
cout <<"ingrese valor 1: ";
cin >> operando1 ;
cout <<"ingrese valor 2: ";
cin >> operando2 ;
resultado = 5 %2 + operando1 +operando2;
auxiliar=resultado;
cout<<"el resultado es: "<<resultado<<"\n";
incremento=contador++;
cout<<"el valor del incremento es "<<incremento<<" y contador = "<<contador<<"\n";

resultado+= operando1;   //al resultado le suma operando 1
cout<<"el resultado  de : "<<auxiliar<<" + "<<operando1<<" = "<<resultado<<"\n";

resultado-= operando1;
resultado-= operando2;   //al resultado le resto operando 2
cout<<"el resultado  de : "<<auxiliar<<" - "<<operando1<<" = "<<resultado<<"\n";

resultado+= operando2;
resultado*= operando1;   //multiplico al resultado por operando1
cout<<"el resultado  de : "<<auxiliar<<" * "<<operando1<<" = "<<resultado<<"\n";

resultado/= operando1;
resultado/= operando2;   //divido al resultado por operador 1
cout<<"el resultado  de : "<<auxiliar<<" / "<<operando1<<" = "<<resultado<<"\n";


}