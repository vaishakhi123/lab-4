1#include <iostream>
using namespace std;


int max(int a, int b);
int min(int a, int b);


int main() {
	
	int a,b;
	cout<<"enter two numbers\n";
	cin>>a>>b;
	cout<<"maximum number is " <<max(a,b);
	cout<<"minimum number is "<<min(a,b);
	return 0;
}
int max(int a,int b)
{
	return(a>b)?a:b;
}
int min(int a,int b)
{
	return(a>b)?b:a;
}