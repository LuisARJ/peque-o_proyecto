/*
Luis Angel Rios Jasso
Crea un programa que pregunte al usuario su edad y el a�o actual,
como resultado le indicar� el a�o en que cumplir� 100 a�os.

Entrada
La edad (entero positivo) de la persona y el a�o actual (entero positivo), en este orden.

Salida
El a�o (entero positivo) en el que la persona cumplir� 100 a�os.
Ejemplo de ejecuci�n del programa
>>>10
>>>2020
2110
*/
#include <iostream>
using namespace std;
int edad, ano_actual,ano_futuro, resultado_edad;

int main (){
cout<<"Este programa pregunta la edad de una persona y el ano , mostrando el ano que quisiera saber "<<endl;
cout<<"Digite su edad: ",cin>>edad;
cout<<"Digite el ano actual: ",cin>>ano_actual;
cout<<"Digite la edad que quisiera saber :",cin>>ano_futuro;
resultado_edad= (ano_actual+ano_futuro)-edad;
cout<<"El ano donde cumplira ",cout<<ano_futuro,cout<<" anos es en el : ",cout<<resultado_edad;
return 0;
}
