#include <iostream>

using namespace std;

int main()
{
    float prt;//declara��o do tipo de vari�veis e de vari�veis prt: PORCENTAGEM DE REPROVADOS TOTAL, tal vari�vel foi indicada por fload j� que pode resultar em um n�mero real
    int rc,rd,prc,pad,ad;//declara��o do tipo de vari�veis e de vari�veis prc: PORCENTAGEM DE REPROVADOS DE C, pad: PORCENTAGEM DE APROVADOS DE D, rc: N�MERO DE REPROVADOS DE C, ad: N�MERO DE APROVADOS DE D, rd: N�MERO DE REPROVADOS DE D
    cout<<"insira em porcentagem, sem '%' e em vez de ',' use '.' "<<endl;//regra para o usu�rio
    cout<<"numero reprovados da turma c "<<endl;//indica��o para o usu�rio
    cin>>prc;//entrada da vari�vel 'prc'
    cout<<"numero de aprovados da turma d"<<endl;//indica��o para o usu�rio
    cin>>pad;//entrada da vari�vel 'pad'
    {//c�lculo para a turma C
     rc=60*prc/100;//c�lculo para transformar porcentagem em n�mero de alunos reprovados de C
     cout<<"reprovados da turma C "<<rc<<endl;//indica��o do n�mero de reprovados da turma C
    }

    {//c�lculo para a turma D
     ad=20*pad/100;//c�lculo para transformar porcentagem em n�mero de alunos aprovados de D
     rd=20-ad;//c�lculo para obter n�mero de alunos reprovados de D
     cout<<"reprovados da turma D "<<rd<<endl;//indica��o do n�mero de reprovados da turma D
    }
{ //c�lculo para o n�mero de reprovados das duas turmas conjuntas
prt=(((rc+rd)*100)/80);
 cout<<"porcentagem de reprovados geral "<<prt<<endl;//indica��o da porcentagem de reprovados das duas turmas
}
return 0;
}

}
