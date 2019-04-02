#include<fstream>
#include<iostream>
using namespace std;
int S;
int i,n,rez,nul;
int k;
int V[100];
int read_data()
{
   cout<<"Suma=";cin>>S;
    cout<<"Numarul de bancnote:";cin>>k;
    for(i=1;i<=n;i++)
        {
        cout<<"V["<<i<<"]=";cin>>V[i];
    }
}
int sort_data()
{
do
    {
        rez=0;
        for(i=1;i<=k-1;i++)
        if(V[i]<V[i+1])
        {
            nul=V[i];
            V[i]=V[i+1];
            V[i+1]=nul;
        }
    }
}
int greedy()
{
while(rez);
    i=1;
    cout<<S<<endl;
    do
    {
        if(S/V[i]>0)
            cout<<S/V[i]<<" bancnote cu valoarea "<<V[i]<<endl,S=S%V[i];
            i++;
    }
    while(i<=k);
}
}
int main()
{
read_data();
sort_data();
cout<<" utilizez "<<greedy()<<" bancnote ";
}
