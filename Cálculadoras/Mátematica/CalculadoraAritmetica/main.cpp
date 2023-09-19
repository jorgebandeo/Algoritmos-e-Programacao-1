#include <iostream>

using namespace std;

int main()

{
   int num1,num2,s,sb,m,d;
   cout<<"insira 2 núsmeros para soma, subtração, multiplicação e divição."<<endl;
   cin>>num1; cout<<" e "<<endl; cin>>num2;
   {
       s=num1+num2;
   cout<<num1<<" + "<<num2<<" = "<< s<<endl;
   }
     {
      sb=num1-num2;
      cout<<num1<<" - "<<num2<<" = "<< sb<<endl;
     }
       {
        m=num1*num2;
        cout<<num1<<" * "<<num2<<" = "<< m<<endl;
       }
         {
          d=num1/num2;
          cout<<num1<<" / "<<num2<<" = "<< d<<endl;
         }
return 0;


}

