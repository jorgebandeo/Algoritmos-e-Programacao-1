#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
///jorge bandeo
int main()
{ setlocale(LC_ALL, "Portuguese");
    int lin,col,num_bom,errolin;
for(errolin=0;errolin<1;errolin){
    cout<<"\n insira o tamanho do campo "<<"\n"<<"\nNúmero de linhas: ";
    cin>>lin;
    cout<<"\n";
    if(lin<2){cout<<"erro"<<endl;}else{errolin=1;}
}
for(errolin=0;errolin<1;errolin){
    cout<<"Número de colunas: ";
    cin>>col;
    cout<<"\n";
    if(col<2){cout<<"erro"<<endl;}else{errolin=1;}
}
for(errolin=0;errolin<1;errolin){
    cout<<"Número de minas: ";
    cin>>num_bom;
    cout<<"\n";
    if(num_bom<2){cout<<"erro"<<endl;}else{errolin=1;}
}
    int campo[lin][col],R,R1,R2,x,y,mv[num_bom][2],som1,som_1;///2º declaração
    mv[0][0]=-1;
    mv[0][1]=-1;
    for(R=0;R<lin;R++){
     for(R1=0;R1<col;R1++){
       campo[R][R1]=0;
    }}
   for(R=0;R<num_bom;R++){///valores das bombas de forma aleatória
    x=(rand()%lin-1);
    y=(rand()%col-1);

    for(R1=0;R1<num_bom;R1++){///verificação dos números.
    if(x==mv[R1][0]){
    if(y==mv[R1][1]){
        campo[x][y]=0;R=R-1;
    }else{
    campo[x][y]=-1;}
    }else{campo[x][y]=-1;}
}
if(campo[x][y]==-1){
    mv[R][0]=x;
  mv[R][1]=y;
  for(som1=x-1;som1<x+2;som1++){///NÚMEROS LATERAIS DOS -1, há algum erro quando o número de bombas satura a matriz.
    for(som_1=y-1;som_1<y+2;som_1++){
        if(campo[som1][som_1]!=-1){
        if(som1==x){
            if(som_1==y){

            }else{campo[som1][som_1]=campo[som1][som_1]+1;}
        }else{campo[som1][som_1]=campo[som1][som_1]+1;}
    }
    }
}
}
}
     int jogadas,contador=0,mnr[lin][col],R3,R4;///3º declaração
     char EX[lin][col];
      for(R=0;R<lin+1;R++){
     for(R1=0;R1<col+1;R1++){
       mnr[R][R1]=-6;
       EX[R][R1]='#';///A matriz EX é como se fosse um papel tampando cada número
    }}
for(jogadas=0; jogadas>-1;jogadas++){
        cout<<" ";
for(R=0;R<lin;R++){{cout<<" /   "<<R<<"  /";}}
cout<<"\n";
for(R=0;R<lin;R++){
  for(R1=0;R1<col;R1++){

        if(R1==0){cout<<R;}
  cout<<" /   "<<EX[R][R1]<<"  /";
}
cout<<"\n";

}
cout<<"escolha o número da linha e da coluna que você que selecionar"<<"\n linha : ";
cin>>x;
cout<<"coluna : ";
cin>>y;
cout<<"\n";

contador=contador+1;
if(x>=0){
    if(x<lin){
        if(y>=0){
            if(y<col){
                    if(campo[x][y]==-1){
                             mnr[x][y]=campo[x][y];
                  jogadas=-3;

              }else if(contador!=(lin*col)-num_bom){mnr[x][y]=campo[x][y];///o valor selecionado e passado para a matriz "vazia" para que cada valor vá sendo revelado a cada jogada
            cout<<campo[x][y];} else { mnr[x][y]=campo[x][y];
                  jogadas=-3;}

            for(R=0;R<lin;R++){
     for(R1=0;R1<col;R1++){

            switch (mnr[R][R1]){///aqui transcrevo os valores em formato int para char
        case -6:
            EX[R][R1]='#';
            break;
        case -1:
            EX[R][R1]='X';
            break;
        case 0:
            EX[R][R1]='0';
            break;
        case 1:
            EX[R][R1]='1';
            break;
        case 2:
            EX[R][R1]='2';
            break;
        case 3:
            EX[R][R1]='3';
            break;
        case 4:
            EX[R][R1]='4';
            break;
        case 5:
            EX[R][R1]='5';
            break;
        case 6:
            EX[R][R1]='6';
            break;
        case 7:
            EX[R][R1]='7';
            break;
        case 8:
            EX[R][R1]='8';
            break;

            }
            }}
           }else{cout<<"y não pode ser maior que o numero de colunas, tente novamente"<<endl;
contador =contador-1;}
        }else{cout<<"y não pode ser menor que zero, tente novamente"<<endl;contador=contador-1;}
    }else{cout<<"x não pode ser maior que o número de linhas, tente novamente"<<endl;contador=contador-1;}
}else{cout<<"x não pode ser menor que zero, tente novamente"<<endl;contador=contador-1;}
}///aqui o jogo termina falando se ganhou ou perdeu, a matriz final e o número de jogadas
if(contador!=(lin*col)-num_bom){cout<<"Você Perdeu"<<endl;}else{cout<<"Você Ganhou"<<endl;}
cout<<" ";
for(R=0;R<lin;R++){{cout<<" /   "<<R<<"  /";}}
cout<<"\n";
for(R=0;R<lin;R++){
  for(R1=0;R1<col;R1++){

        if(R1==0){cout<<R;}
  cout<<" /   "<<EX[R][R1]<<"  /";
}
cout<<"\n";

}
cout<<"número de jogadas: "<<contador;
return 0;}
