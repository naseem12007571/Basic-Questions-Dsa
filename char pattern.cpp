#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'A'+i+j-2;
        while(j<=n){
            cout<< ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

/tmp/O3dFgln2Nu.o
5
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 
