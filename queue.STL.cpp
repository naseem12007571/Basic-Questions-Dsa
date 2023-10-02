#include<bits/stdc++.h>
using namespace std;
int main()
{
   queue<string> q;  // queue means jo sab se pahle gaya wo sab se pahale nikalega 
   
   q.push("naseem");
   q.push("choudhary");
   q.push("khan");
   
   cout<<" print first element "<<q.front()<<endl;
   q.pop();   // naseem pop ho gaya ab first choudhary ayega
   cout<<" print first element "<<q.front();
    
}
