#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    
    // binary_search use like that 
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    
    // max and min function 
    int a=3;
    int b=8;
    
    
     cout<<" max "<<max(a,b)<<endl;
     cout<<" min "<<min(a,b)<<endl;
     
     
     // swap function 
     swap(a,b);
     cout<<" swap a is  " <<a<<endl;
     
     
     // reverse string 
     string naseem= "KHANSAB";
     reverse(naseem.begin(),naseem.end());
     cout<< " reverse is " <<naseem<<endl;
     
     
     
     
    
    
    
    
    
}
