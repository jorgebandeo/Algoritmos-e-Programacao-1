#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
///aluno:jorge bandeo
int main()
{
       setlocale(LC_ALL,"Portuguese");
    int cpf;//cpf de 9 a 8 d�gitos
    int d1,d2,d3,d4,d5,d6,d7,d8,d9;///fragmenta��o do cpf
    int c1d1,c1d2,c1d3,c1d4,c1d5,c1d6,c1d7,c1d8,c1d9,restodasomadoc1;///calculo 1
    int c2d1,c2d2,c2d3,c2d4,c2d5,c2d6,c2d7,c2d8,c2d9,c2dv1,restodasomadoc2;///calculo 2
    int digitoverificador1,digitoverificador2;
    cout<<"para calcular os d�gitos verificadores de seu CPF"<<"\n favor insira os 9 ou 8 n�meros do seu cpf:  ";
    cin>>cpf;/// vari�veis entrada da vari�vel 'cpf'
    cout<<"\n";



{///restri��o para a quantidades de d�gitos inseridos
if(1000000000>cpf&&cpf>9999999)
{////se for verdadeiro, prossegue para os c�lculos do cpf
    {///separa��o dos d�gitos do n�mero de cpf
    d1=cpf/pow(10,8);
    d2=(cpf%100000000)/pow(10,7);
    d3=(cpf%10000000)/pow(10,6);
    d4=(cpf%1000000)/pow(10,5);
    d5=(cpf%100000)/pow(10,4);
    d6=(cpf%10000)/pow(10,3);
    d7=(cpf%1000)/pow(10,2);
    d8=(cpf%100)/pow(10,1);
    d9=(cpf%10)/pow(10,0);
    }
    {///contas para identifica��o dos d�gitos identificadores

        {///conta para o primeiro d�gito
        ///produto de cada digito pelo seu respectivo multiplicador
        c1d1=d1*10;
        c1d2=d2*9;
        c1d3=d3*8;
        c1d4=d4*7;
        c1d5=d5*6;
        c1d6=d6*5;
        c1d7=d7*4;
        c1d8=d8*3;
        c1d9=d9*2;
        ///soma dos produtos, posteriormente o resto da sua divis�o por 11
        restodasomadoc1=(c1d1+c1d2+c1d3+c1d4+c1d5+c1d6+c1d7+c1d8+c1d9)%11;
        ///restri��o para o primeiro d�gito
        if(restodasomadoc1<2){digitoverificador1=0;}else{digitoverificador1=11-restodasomadoc1;}
        }

        {///conta para o segundo d�gito
        ///produto de cada digito pelo seu respectivo multiplicador
        c2d1=d1*11;
        c2d2=d2*10;
        c2d3=d3*9;
        c2d4=d4*8;
        c2d5=d5*7;
        c2d6=d6*6;
        c2d7=d7*5;
        c2d8=d8*4;
        c2d9=d9*3;
        c2dv1=digitoverificador1*2;
        ///soma dos produtos, posteriormente o resto da sua divis�o por 11
        restodasomadoc2=(c2d1+c2d2+c2d3+c2d4+c2d5+c2d6+c2d7+c2d8+c2d9+c2dv1)%11;
         ///restri��o para o segundo d�gito
        if(restodasomadoc2<2){digitoverificador2=0;}else{digitoverificador2=11-restodasomadoc2;}
        }
    }
    cout<<"seus d�gitos verificadores s�o " <<digitoverificador1<<" e "<<digitoverificador2<<"\n por tanto seu cpf completo � "<<cpf<<"-"<<digitoverificador1<<digitoverificador2<<endl;}
///se for falso, declara como um erro e sugere a verifica��o do cpf
else{cout<<"           ERRO"<<"\n n�mero de cpf invalido"<<"\n"<<"\n favor verificar seu cpf"<<endl;}

}
 return 0;   }




