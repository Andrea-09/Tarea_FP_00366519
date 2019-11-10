#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;

class planilla_mensual{
public:
void sueldo_base(void);
void descuentos(void);
void sueldo_neto(void);
float sb;
int dep;
float s_n;
};//fin clase


int main(){
planilla_mensual depar;

depar.departamento();

planilla_mensual suel_b;

suel_b.sueldo_base();

planilla_mensual inf;

inf.informe();



getch();
}//fin main


void planilla_mensual::sueldo_base(void){

cout<<"Ingrese su sueldo base "<<endl;
cin>>sueldo_base;

}//fin sueldo_base

void planilla_mensual::descuentos(void){
sb=s_n;
float renta= 0;
float afp= 0;
float isss= 0;

renta=sb*renta;
afp=sb*afp;
isss=sb*isss;
s_n=sb-renta-afp-isss;

}//fin descuentos

void planilla_mensual::sueldo_neto(void){
return s_n;

}//fin sueldo_neto

}