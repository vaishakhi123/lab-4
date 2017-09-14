#include <iostream>
using namespace std;

int prime(int n);

int main() {

    int n,i,c;
    cout<<"enter the interval\n";
    cin>>n;
    cout<<"the prime numbers are ";
    for(i=2;i<n;i++)
    {
        c=prime(i);
        if(c==0)
             cout<<i<<" ";
    }
    
    
	return 0;
}
 int prime(int n)
 {
        int pr,j,c;
        
        c=0;
        for(j=2;j<=n/2;j++)
        {
          if(n%j==0)
          {   c=1;
             break;
          }
        }
       
       return c;
     
    
 }