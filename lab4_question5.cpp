#include <iostream>
#include<cmath>
using namespace std;

bool prime(int n);
bool perfect(int n);
bool armstrong(int n);


int main() {
	int n;
	cout<<"enter a number\n";
	cin>>n;
	if(prime(n)==true)
	    cout<<"the number "<<n<<" is prime";	
	else 
	    cout<<"the number "<<n<<" is not prime";
	if(perfect(n)==true)
	    cout<<"the number "<<n<<" is perfect";
	else
	    cout<<"the number "<<n<<" is not perfect";
    if(armstrong(n)==true)
       cout<<"the number "<<n<<" is armstrong";
    else
       cout<<"the number "<<n<<" is not armstrong";
	    return 0;
}
bool prime(int n)
{
    int i,f,c=0;
            for(i=2;i<n;i++)
            {
            	f=n%i;
            	if(f==0)
            	{
                           c=1;
                           break;
            	}
           
            }
            if(c==0)
               return true;
            else
               return false;
}  
bool armstrong(int n)
{
	 int num,i,r,arm=0;
     num=n;
     for(i=1;i<=n;i++)
     {
       r=n%10;
       arm=arm+pow(r,3);
       n=n/10;
     }
     if(num==arm)
         return true;
     else
        return false;
}
bool perfect(int n)
{
	int i,s=0;
    
    for(i=1;i<n;i++)
    {
       if(n%i==0)
         s=s+i;
    }
    if(s==n)
        return true;
    else
        return false;

}
            	
