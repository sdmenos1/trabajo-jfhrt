#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main(){
	int i, dato,b;
	char band='F';
	cout<<"Ingrese cuantos numeros desea ingresar"<<endl;cin>>b;
	int a[b];
	i=0;
	while((band=='F')&&(i<b)){
	    cout<<"Ingrese el "<<i<<" numero: ";
	    cin>>a[i];
		if(a[i]==dato){
			band='V';
			}
			i++;
	}
	cout<<"Ingrese el numero que desea buscar:";cin>>dato;
	if(band=='F'){
		cout<<"el numero no se encuentra"<<endl;
	}
	else if(band=='V'){
		cout<<"el numero ha sido encontrado en la posicion:"<<i-1<<endl;
			
		
}
	getch();
	return 0;
}
	    