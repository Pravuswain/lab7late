//10. write a c++ program to generate nth Fibonacci term using recursion
//include library
#include<iostream>
using namespace std;

//declare recursion function
int fibo(int);

int main()
{
//give input of the term 
	

	int n;
	cout<<"enter the nth term of fibonacci term : ";
	cin>> n;

	int x;
	x= fibo(n);
	cout<< x << endl;
	
			
}

//mathematical recursion
int fibo(int n)
{	if(n==0 || n==1)
		
		return (n);

	else 
		return fibo(n-1)+fibo(n-2);
	
	
}

