#include <iostream> //biblioteca I/O
#include <math.h> //biblioteca matematica
using namespace std; //palabras reservadas

int main()
{
    long long contador=0,suma=0,fin=1,num1=0,num2=0,mul=0,sum=0;
    char calculo='o';

    while(fin==1){
        cout<<"ingrese s para sumar o m para multiplicar: ";
        cin>>calculo;
        switch (calculo) {
        case 's':
            cout<<"ingrese primer numero: ";
            cin>>num1;
            cout<<"ingrese segundo numero: ";
            cin>>num2;
            sum=num1+num2;
            cout<<"resultado: "<<sum<<endl;
            break;

        case 'm':
            cout<<"ingrese primer numero: ";
            cin>>num1;
            cout<<"ingrese segundo numero: ";
            cin>>num2;
            mul=num1*num2;
            cout<<"resultado: "<<mul<<endl;
            break;
        default:



            while (contador<10)
            {
                suma=suma+contador;
                cout<<"suma: "<<suma<<endl;
                contador=contador+1;
                cout<<" - "<<contador<<endl;
            }
            suma=pow(suma,3);
            contador = 0;
            cout<<"suma al cubo: "<<suma<<endl;
            cout<<"  "<<endl;
            cout<<"  "<<endl;
            suma=0;
            break;
        }
    cout<<"desea cerrar el programa?. ingrese '0'"<<endl;
    cout<<"de lo contrario ingrese 1: ";
    cin>>fin;
    }

    return 0;

}
