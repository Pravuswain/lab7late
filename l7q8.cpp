//8. write a c++ program to find sum of digits of a given number
//include library
#include<iostream>
using namespace std;

//declare recursion function
int sumofdigits(int);

int main()
{
//give a  no
	

	int n;
	cout<<"enter the no whose sum of digits are required : ";
	cin>> n;

	int x;
	x= sumofdigits(n);
	cout<< x << endl;
	
			
}

//mathematical recursion
int sumofdigits(int n)
{	if(n==0)
		
		return 0;
	else	{
		return (n%10)+sumofdigits(n/10);
		}
}
