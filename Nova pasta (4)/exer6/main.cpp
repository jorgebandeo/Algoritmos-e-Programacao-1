#include <iostream>

using namespace std;

int main()
{
    float x,y,z,res; //declara��o do tipo de variaves e de variaveias x:NOTA 1, y:NOTA 2, z:NOTA 3, res: resultado da media ponderada
    cout<<"purfabor, insira as suas 3 notas para calcular sua media"<<endl; //indica��o para usuario
    cout<<"nota 1:"<<endl; //indica��o para usuario
    cin>>x; //introdu��p da variavel "x"
    cout<<"nota 2:"<<endl; //indica��o para usuario
    cin>>y; //introdu��p da variavel "y"
    cout<<"nota 3:"<<endl; //indica��o para usuario
    cin>>z; //introdu��p da variavel "z"
    { //calculo requerido
        res=(x*2+y*4+z*6)/12; //calculo da media ponderada das notas do usuario sendo 'nota 1' por 2, 'nota 2' por 4, 'nota 3' por 6
        cout<<"sua media final: "<<res<<endl; //indica��o para usuario do resultado da media ponderada
        cout<<"bons estudos"<<endl; //finaliza��o
    }
  return 0;
}
