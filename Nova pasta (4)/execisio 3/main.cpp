#include <iostream>

using namespace std;

int main()
{
    float S,C1,C2,CI,CII,RES;
    S=1200.;
    C1=200.;
    C2=120.;
    {
        CI=C1*2/100;
        CII=C2*2/100;
        RES=S-((CI+C1)+(CII+C2));
        cout<<RES<<endl;

    }
}
