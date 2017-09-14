#include <iostream>
using namespace std;

double cube(double n) {
	double c;
	c=n*n*n;
	return c;
}
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	double c;
	c= cube(n);
	cout<<"cube of a number is  "<< c;
	return 0;
}