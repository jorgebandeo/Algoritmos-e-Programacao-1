#include <iostream>

using namespace std;

int main()
{
    float S,por,por1,C1,C2,CI,CII,RES; //declara��o de vari�veis S: SALDO, por: PORCENTAGEM REFERENTE A MULTA DE 'C1', por1: PORCENTAGEM REFERENTE A MULTA DE 'C2', C1: DIVIDA 1, C2: DIVIDA 2, CI: MULTA DA DIVIDA 1, CII: MULTA DA DIVIDA 2, RES: RESULTADO
   cout<<" insira o seu saldo total"<<endl; // 1� indica��o para o usu�rio
   cin>>S; //entrada da vari�vel S
   cout<<"agora, insira suas dividas"<<endl; // 2� indica��o para o usu�rio
   cin>>C1; // entrada da vari�vel C1
   cout<<"-"<<endl; //indica��o de separa��o
   cin>>C2; // entrada da vari�vel C2
   cout<<"para finalizar, insira os porcentuais, de multa, respectivos as dividas, sem o uso do %"<<endl; // 3� indica��o para o usu�rio
   cout<<"1�"<<endl; //indica��o da primeira porcentagem
   cin>>por; // entrada da vari�vel por
   cout<<"2�"<<endl; //indica��o da segunda porcentagem
   cin>>por1; // entrada da vari�vel por1
    {// calculo requerido
        CI=(C1*por)/100; //(vari�vel 'C1' multiplicado pela vari�vel 'por') dividido por 100 E recebida por 'CI'
        CII=(C2*por1)/100; //(vari�vel 'C2' multiplicado pela vari�vel 'por1') dividido por 100 E recebida por 'CII'
        RES=S-((CI+C1)+(CII+C2)); //vari�vel 'S' menos ('CI'+'C1')+('CII'+'C1') E recebida por �RES�
        cout<<RES<<endl;

    }
    return 0;
}

