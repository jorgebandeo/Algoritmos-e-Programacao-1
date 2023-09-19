#include <iostream>

using namespace std;

int main()
{
    float x,y,z,res; //declaração do tipo de variaves e de variaveias x:NOTA 1, y:NOTA 2, z:NOTA 3, res: resultado da media ponderada
    cout<<"purfabor, insira as suas 3 notas para calcular sua media"<<endl; //indicação para usuario
    cout<<"nota 1:"<<endl; //indicação para usuario
    cin>>x; //introduçãp da variavel "x"
    cout<<"nota 2:"<<endl; //indicação para usuario
    cin>>y; //introduçãp da variavel "y"
    cout<<"nota 3:"<<endl; //indicação para usuario
    cin>>z; //introduçãp da variavel "z"
    { //calculo requerido
        res=(x*2+y*4+z*6)/12; //calculo da media ponderada das notas do usuario sendo 'nota 1' por 2, 'nota 2' por 4, 'nota 3' por 6
        cout<<"sua media final: "<<res<<endl; //indicação para usuario do resultado da media ponderada
        cout<<"bons estudos"<<endl; //finalização
    }
  return 0;
}
