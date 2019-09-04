#include<iostream>
#include <string>
using std::to_string;
using namespace std;


void promediador(int numero_alumnos)
    {int PC1,PC2,PC3,PC4,Proyecto,E1,E2; float promedio;
  
  for(int i=1;i<=numero_alumnos;i++){
  cout<<"Alumno numero " + to_string(i) + "\n";
  do{
  cout<<"Ingrese nota de PC1:";
  cin>>PC1;
  }while(PC1<0 || PC1>20);
  do{
  cout<<"Ingrese nota de PC2:";
  cin>>PC2;
  }while(PC2<0 || PC2>20);
  do{
  cout<<"Ingrese nota de PC3:";
  cin>>PC3;
  }while(PC3<0 || PC3>20);
  do{
  cout<<"Ingrese nota de PC4:";
  cin>>PC4;
  }while(PC4<0 || PC4>20);
  do{
  cout<<"Ingrese nota de Proyecto:";
  cin>>Proyecto;
  }while(Proyecto<0 || Proyecto>20);
  do{
  cout<<"Ingrese nota de E1:";
  cin>>E1;
  }while(E1<0 || E1>20);
  do{
  cout<<"Ingrese nota de E2:";
  cin>>E2;
  }while(E2<0 || E2>20);
  promedio  = (PC1 + PC2 +PC3 + PC4 + Proyecto + E1 +E2)/7;
  
  cout<< "Su promedio es " + to_string(promedio) + "\n";
  if(promedio>=18.0 && promedio<=20.0 )
  {
    cout<<"UD asistirá al ACM - ICPC International Collegiate Programming Contest\n";
  }
  if(promedio>=15.0 && promedio<=17.99 )
  {
     cout<<"Imagine Cup\n";
  }
  if(promedio>=12.00 && promedio<=14.99 )
  {
     cout<<"Hackathon de Miraflores\n";
  }
  if(promedio<12.0 )
  {
    cout<<"Necesita mejorar\n";
  }
    }
    }

int main(){
  int numero_alumnos;
  cout<<"Ingrese numero de alumnos:\n";
  cin>>numero_alumnos;
  promediador(numero_alumnos);
  
  
}


