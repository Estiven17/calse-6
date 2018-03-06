#include <iostream> //biblioteca I/O
#include <math.h> //biblioteca matematica
using namespace std; //palabras reservadas

int main()
{
    int contador=0,suma=0;

    while (contador<50)
    {
        suma=suma+contador;
        contador=contador+1;
        cout<<" - "<<contador<<endl;
    }

    cout<<"suma: "<<suma<<endl;
    suma=pow(suma,3);
    cout<<"suma al cubo: "<<suma<<endl;














    return 0;
}
