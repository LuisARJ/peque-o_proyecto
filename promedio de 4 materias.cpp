/*Luis Angel Rios Jasso
En una universidad cada estudiante cursa 4 materias en el semestre.
Desarrolla un programa que reciba la calificaci�n de cada materia,
calcula el promedio de las 4 materias y lo despliega.
Entradas
4 n�meros enteros que representan las calificaciones de 4 materias, un n�mero en cada rengl�n.

Salidas
Un n�mero decimal correspondiente al promedio.
Ejemplo de ejecuci�n del programa
>>> 90
>>> 60
>>> 100
>> 70
80
*/
#include <iostream>
using namespace std;

int cal1,cal2,cal3,cal4, promedio ;
int main (){
	cout<<"Este programa realiza un promedio de 4 materias "<<endl;
	cout<<"Digite la primera calificacion: ",cin>>cal1;
	cout<<"Digite la segunda calificacion: ",cin>>cal2;
	cout<<"Digite la tercera calificacion: ",cin>>cal3;
	cout<<"Digite la cuarta calificacion:  ",cin>>cal4;
	promedio= (cal1+cal2+cal3+cal4)/4;
	cout<<"El promedio de las materias es: ",cout<<promedio;	
	return 0;
}
