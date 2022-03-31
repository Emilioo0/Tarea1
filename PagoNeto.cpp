#include <iostream>
using namespace std;

int main(){ 
    /* Crear un programa que mediante una clave específica permita ingresar el sueldo de 6 meses de un trabajador,
       calcular la media aritmética, el total de los 6 meses y mostralos en pantalla*/

       //Variables que almacenaran el total de sueldo por mes
       double pago1 = 0, pago2 = 0, pago3 = 0, pago4 = 0, pago5 = 0, pago6 = 0;

       //Variables que almacenará la media aritmética
       double mediaAritmetica = 0;

       //Variable que almacenará la clave
       string clave = "";

       //Variable que almacenará la suma de los sueldos
       double sueldoFinal = 0;

       while (clave != "R65"){ 

           cout<<"Ingrese la clave: "<<endl;
           cin>>clave;

           if (clave == "R65"){
               
               cout<<"Ingrese el primer sueldo: "<<endl;
               cin>>pago1;

               cout<<"Ingrese el segundo sueldo: "<<endl;
               cin>>pago2;

               cout<<"Ingrese el tercer sueldo: "<<endl;
               cin>>pago3;

               cout<<"Ingrese el cuarto sueldo: "<<endl;
               cin>>pago4;

               cout<<"Ingrese el quinto sueldo: "<<endl;
               cin>>pago5;

               cout<<"Ingrese el sexto sueldo: "<<endl;
               cin>>pago6;

               sueldoFinal = (pago1 + pago2 + pago3 + pago4 + pago5 + pago6); //Suma de todos los sueldos

               mediaAritmetica = (sueldoFinal/6); //Proceso para sacar la media aritmética
               
               
               cout<<"La clave de empleado es: "<<clave<<endl;
               cout<<"El sueldo total de los 6 meses es de: $" <<sueldoFinal<<endl;
               cout<<"La media de estos sueldos es de: $" <<mediaAritmetica<<endl;
           }    
       }
    return 0;
}