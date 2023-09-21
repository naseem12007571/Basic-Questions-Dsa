#include<iostream>
using namespace std;
int main(){
    
  int n;
  cin>>n;
  int sum=0;
  int i=1;
  while(i<=n){
      sum=sum+i;
      i=i+1;
  }
  cout<<"vale of some is "<<sum;
  }


//use for loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    cout<<sum;
}


