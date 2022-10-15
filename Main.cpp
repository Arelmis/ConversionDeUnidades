#include<iostream>
using namespace std;

void float temperatura (int escala)
float Masa (float unidad)
int main()
{
	float Temp, masa, vol, eq;
	float resultado; 
    int conver;
    int escala, unidad; 
    
	do{
    cout<<"Menu de conversiones " <<endl;
	cout<<"1. Temperatura" <<endl;
	cout<<"2. Masa" <<endl;
	cout<<"3. Volumen" <<endl;
	cout<<"4. Moles " <<endl;
	cout<<"5. Salir "<<endl;
	cout<<"Indique la conversion a realizar:";
	cin>>conver;
	
	if (conver==1)
	{
		system("cls")
		cout<<"ingrese la escala a la que desea convertir: ";
		cin>> escala; 
		Temperatura (escala);
	}
	else (conver==2)
	{
	system("cls");
				cout<<"Ingrese la unidad que desea convertir : ";
				cin>>unidad;
				//Invocar a la función para realizar la operación seleccionada y el valor retornado lo asigna a la variable resultado
				resultado = masa (float unidad)
				cout<<el resultado de su conversion es: <<endl;
				system("pause");	
			} 
	
	}while(mn<1 || mn>5)

	
}

float Masa (float unidad)
{
		int conver;
	//Mostrar menú con las unidades a convertir 
	cout<<"1. Gramos a Decagramos"<<endl;
	cout<<"2. Gramos a Hectogramos"<<endl;
	cout<<"3. Gramos a Kilogramos"<<endl;
	cout<<"4. Gramos a Decigramos"<<endl;
    cout<<"5. Gramos a Centigramos"<<endl;
    cout<<"6. Gramos a Miligramos"<<endl;
    cout<<"7. Kilogramos a toneladas"<<endl;
    cout<<"8. Kilogramos a libras"<<endl;
	cout<<"9. salir"<<endl;
	cout<<"Escoja la unidad a la que desea convertir: ";
	cin>>conver;
	system("cls");
	
	if(conver==1)
	// 1gr= 0.1 decagramos. 
	{
		cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>gramos; 
	 	gramos=gramos*0.1
	 	return gramos*0.1;
	 	
	}
	if (conver==2)
	// 1 gr= 00.1 hectogramos.
	{
	    cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>gramos; 
	 	gramos=gramos*00.1
	 	return gramos*00.1;
	 		
	}
    if (conver==3)
    // 1gr=0,001 kilogramos
    {
	cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>gramos; 
	 	gramos=gramos*0,001
	 	return gramos*0,001;
	 }
    if (conver==4)	
    // 1 gr= 10 decigramos
    {
    	cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>gramos; 
	 	gramos=gramos*10
	 	return gramos*10;	
	}
	if(conver==5)
	// 1 gr= 100 centigramos 
	{
		cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>gramos; 
	 	gramos=gramos*100
	 	return gramos*100;
	}
	if (conver==6)
	// 1 gr= 1000 miligramos
	{
		cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>gramos; 
	 	gramos=gramos*1000
	 	return gramos*1000;
	}
	if(conver==7)
	// 1 kg= 0.001 toneladas
	{
	cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>kilogramos; 
	 	kilogramos=kilogramos*0.001
	 	return kilogramos*0.001;
	 	
	 }
	if (conver==8)
	// 1 kg = 2,205
	{
		cout<<"ingrese la cantidad de gramos que desea convertir: "; 
		cin>>kilogramos; 
	 	kilogramos=kilogramos*2.205
	 	return kilogramos*2.205;	
	 } 
	 
}
