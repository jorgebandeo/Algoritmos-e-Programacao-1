#include <iostream>

using namespace std;

int main()
{
    float prt;//declaração do tipo de variáveis e de variáveis prt: PORCENTAGEM DE REPROVADOS TOTAL, tal variável foi indicada por fload já que pode resultar em um número real
    int rc,rd,prc,pad,ad;//declaração do tipo de variáveis e de variáveis prc: PORCENTAGEM DE REPROVADOS DE C, pad: PORCENTAGEM DE APROVADOS DE D, rc: NÚMERO DE REPROVADOS DE C, ad: NÚMERO DE APROVADOS DE D, rd: NÚMERO DE REPROVADOS DE D
    cout<<"insira em porcentagem, sem '%' e em vez de ',' use '.' "<<endl;//regra para o usuário
    cout<<"numero reprovados da turma c "<<endl;//indicação para o usuário
    cin>>prc;//entrada da variável 'prc'
    cout<<"numero de aprovados da turma d"<<endl;//indicação para o usuário
    cin>>pad;//entrada da variável 'pad'
    {//cálculo para a turma C
     rc=60*prc/100;//cálculo para transformar porcentagem em número de alunos reprovados de C
     cout<<"reprovados da turma C "<<rc<<endl;//indicação do número de reprovados da turma C
    }

    {//cálculo para a turma D
     ad=20*pad/100;//cálculo para transformar porcentagem em número de alunos aprovados de D
     rd=20-ad;//cálculo para obter número de alunos reprovados de D
     cout<<"reprovados da turma D "<<rd<<endl;//indicação do número de reprovados da turma D
    }
{ //cálculo para o número de reprovados das duas turmas conjuntas
prt=(((rc+rd)*100)/80);
 cout<<"porcentagem de reprovados geral "<<prt<<endl;//indicação da porcentagem de reprovados das duas turmas
}
return 0;
}

}
