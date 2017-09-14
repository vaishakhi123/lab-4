#include <iostream>
using namespace std;

int perfect(int n);

int main() {
	int n,pr,i;
	cout<<"enter yhe interval\n";
	cin>>n;
	cout<<"the perfect numbers are ";
	for(i=1;i<=n;i++)
	{
		pr=perfect(i);
		if(pr==i)
		    cout<<i<<" ";
	}
	return 0;
}
 int perfect(int n)
 {
       int j,s=0;
       for(j=1;j<n;j++)
       {
           if(n%j==0)
              s=s+j;
       }
       return s;

 }