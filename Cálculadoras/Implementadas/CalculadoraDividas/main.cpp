#include <iostream>

using namespace std;

int main()
{
    float S,por,por1,C1,C2,CI,CII,RES; //declaração de variáveis S: SALDO, por: PORCENTAGEM REFERENTE A MULTA DE 'C1', por1: PORCENTAGEM REFERENTE A MULTA DE 'C2', C1: DIVIDA 1, C2: DIVIDA 2, CI: MULTA DA DIVIDA 1, CII: MULTA DA DIVIDA 2, RES: RESULTADO
   cout<<" insira o seu saldo total"<<endl; // 1º indicação para o usuário
   cin>>S; //entrada da variável S
   cout<<"agora, insira suas dividas"<<endl; // 2º indicação para o usuário
   cin>>C1; // entrada da variável C1
   cout<<"-"<<endl; //indicação de separação
   cin>>C2; // entrada da variável C2
   cout<<"para finalizar, insira os porcentuais, de multa, respectivos as dividas, sem o uso do %"<<endl; // 3º indicação para o usuário
   cout<<"1º"<<endl; //indicação da primeira porcentagem
   cin>>por; // entrada da variável por
   cout<<"2º"<<endl; //indicação da segunda porcentagem
   cin>>por1; // entrada da variável por1
    {// calculo requerido
        CI=(C1*por)/100; //(variável 'C1' multiplicado pela variável 'por') dividido por 100 E recebida por 'CI'
        CII=(C2*por1)/100; //(variável 'C2' multiplicado pela variável 'por1') dividido por 100 E recebida por 'CII'
        RES=S-((CI+C1)+(CII+C2)); //variável 'S' menos ('CI'+'C1')+('CII'+'C1') E recebida por ‘RES’
        cout<<RES<<endl;

    }
    return 0;
}

