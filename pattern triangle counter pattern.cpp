#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    int counter =1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<counter<<" ";
            counter=counter+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}


// output 7
7
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28 
