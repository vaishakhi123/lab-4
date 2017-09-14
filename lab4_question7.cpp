#include <iostream>
using namespace std;

int strong(int n);

int main() {
	int n,s,i;
	cout<<"enter the interval\n";
	cin>>n;
	cout<<"the strong number are ";
	for(i=1;i<=n;i++)
	{
		s=strong(i);
		if(s==i)
		   cout<<i<<" ";
	}
	return 0;
}

int strong(int n)
{
	int num,r,k,fact,s;
    
          s=0;
          num=n;
          while(num>0)
          {
    	             fact=1;
                     r=num%10;
    	             for(k=1;k<=r;k++)
    	             {
                     fact=fact*k;
    	             }
                  s=s+fact;
    	            num=num/10;
          }
    
         return s;

}