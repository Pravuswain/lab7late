//9. write a c++ program to find factorial of any number
//include library
#include<iostream>
using namespace std;

//declare recursion function
int factorial(int);

int main()
{
//ask the question
	

	int n;
	cout<<"factorial of : ";
	cin>> n;

	int x;
	x= factorial(n);
	cout<< x << endl;
	
	return 0;		
}

//mathematical recursion
int factorial(int n)
{
	if(n>0)
		return ( n*factorial(n-1));
	
	else
	return 1;
}

  

