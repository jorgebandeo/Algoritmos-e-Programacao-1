#include <iostream>
#include <math.h>
using namespace std;

int main()
{

       float x,x2,ax,bx,y,y2,ay,by,g,dis;
       cout<<"inserir pontos de um plano para determinar a distancia entre eles"<<endl;
       {
        cout<<"("<<endl;
        cin>>ax>>bx;
        cout<<")"<< endl;
        cout<<"-"<<"\n("<< endl;
        cin>>ay>>by;
        cout<<")"<<endl;
}
{
    x=ay-ax;
    y=by-bx;
}
{
    x2=x+x;
   y2=y+y;
   g=x2+y2;
}
{
   dis=sqrt(g);
   cout<<dis<<endl;
}
return 0;

}
