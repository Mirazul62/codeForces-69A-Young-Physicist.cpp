
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,z,c1=0,c2=0,c3=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        c1+=x;
        c2+=y;
        c3+=z;

    }
    if(c1==0 && c2==0 && c3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
