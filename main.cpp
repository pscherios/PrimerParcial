#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,i;
	cout<<"¿Cuantos alumnos va a ingresar?"<<endl;
	cin>>n;
	cout<<""<<endl;
	for(i=0;i=n;i++){
		int not1,not2,not3,not4;
		float prom;
		char cod[3];
		char nom[20];
		char ape[20];
		cout<<"Ingrese el codigo del alumno"<<endl;
		cin>>cod;
		cout<<"Ingrese el nombre del alumno"<<endl;
		cin>>nom;
		cout<<"Ingrese el apeliido del alumno"<<endl;
		cin>>ape;
		cout<<"Ingrese las 4 notas"<<endl;
		cin>>not1;
		cin>>not2;
		cin>>not3;
		cin>>not4;
		prom=(not1+not2+not3+not4)/4;
		cout<<"El promedio del alumno es: "<<prom<<endl;
		cout<<""<<endl;
		if(prom>59){
			cout<<"ALUMNO APROBADO"<<endl;
		}
		else{
			cout<<"ALUMNO REPROBADO"<<endl;
		}
		cout<<""<<endl;
	}
}
