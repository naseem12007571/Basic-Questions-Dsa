#include<iostream>
using namespace std;
int main()
{
    
    int n,fact=1;
    cout<<"Eter the number ";
    cin>>n;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}
