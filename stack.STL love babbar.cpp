#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<string> s;   // stack mean jo sab se last mein dalange wo sab se pahle nikalega
                      //like book 1st book es ke uppr ek or rakhi to pahl jo upper rakhi  ab wo niklagi
                      // (Last In First Out) or FILO(First In Last Out)
   s.push("naseem");
   s.push("choudhary");
   s.push("dhkiya");
   
   cout<<" who is on top  "<<s.top()<<endl;
   
   s.pop();    //ye meine ab hata diya to ye ab second pop per ayega 
   cout<<" who is on top  "<<s.top()<<endl;
   
   
    
}
