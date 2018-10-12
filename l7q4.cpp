//4. write a c++ program to find sum of all natural numbers
//include library
#include<iostream>
using namespace std;

//declare recursion function
int add(int);

int main()
{
//set the limit of natural no.
	

	int n;
	cout<<"sum of natural no. upto : ";
	cin>> n;

	int x;
	x= add(n);
	cout<< x << endl;
	
	return 0;		
}

//mathematical recursion
int add(int n)
{
	if(n>0)
		return (n + add(n-1));
	
	return 0;
}

