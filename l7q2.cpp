//2. write a c++ program to print all natural numbers
//include library
#include<iostream>
using namespace std;

//declare recursion function
int print(int);

int main()
{
//set the limit of natural no.
	

	int n;
	cout<<"natural no. upto : ";
	cin>>n;

	int x;
	x=print(n);
	cout<< x <<endl;
	
			
}

//mathematical recursion
int print(int n )
{
	if(n==1)
		
		return 1;
	
	else
	cout<< n <<endl;
	return print(n-1);
}


