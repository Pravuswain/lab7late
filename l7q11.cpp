//11. write a c++ program to find HCF of two number
//include library
#include<iostream>
using namespace std;

//declare recursion function
int hcf(int);

int main()
{
//give a large no
	

	int n,m;
	cout<<"enter two no : ";
	cin>> n, m;

	int x;
	x= gcd(n,m);
	cout<< x << endl;
	
			
}

//mathematical recursion
int reverse(int n,m)
{	if(m==0)
		
		return n;

	else
		return gcd(m,n%m);
	
	
}

