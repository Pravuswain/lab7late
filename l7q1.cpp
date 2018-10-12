//1. write a c++ program to find power of any no.
//include library
#include<iostream>
using namespace std;

//declare recursion function
int power(int, int);

int main()
{
//base no
	int a;
	cout<<"enter base no. : ";
	cin>> a;
//power no
	int b;
	cout<<"enter power no. :" ;
	cin>> b;
//result
	int x;
	x=power(a, b);
	cout<< x <<endl;

	return 0;		
}

//mathematical recursion
int power(int a, int b)
{
	if(b>0)
		return (a*power(a, b-1));
	else
	return 1;
}

