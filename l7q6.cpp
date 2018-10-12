//6. write a c++ program to find reverse of any number
//include library
#include<iostream>
using namespace std;

//declare recursion function
int reverse(int);

int main()
{
//give a large no
	

	int n;
	cout<<"no to be reversed : ";
	cin>> n;

	int x;
	x= reverse(n);
	cout<< x << endl;
	
			
}

//mathematical recursion
int reverse(int n)
{	if(n==0)
		
		return 0;

	cout << n%10;
	reverse(n/10);
	
	
}

