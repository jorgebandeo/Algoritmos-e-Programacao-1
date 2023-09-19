#include <iostream>

using namespace std;

int main()
{
    int prc,pad,rc,ad,rd;
    cout<<"incira em porsentagem, sem '%' "<<endl;
    cout<<"numero reprovados da turma c"<<endl;
    cin>>prc;
    cout<<"numero de aprovados da turma d"<<endl;
    cin>>pad;
    {
     rc=60*prc/100;
     cout<<"reprovados da turma C "<<rc<<endl;
    }

    {
     ad=20*pad/100;
     rd=20-ad;
     cout<<"reprovados da turma D "<<rd<<endl;
    }

return 0;
}
