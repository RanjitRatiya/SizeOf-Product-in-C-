/*
1) C++ program to Find Size of int, float, double, char

2)C++ program to find product of two numbers entered by the User
*/


//1) C++ program to Find Size of int, float, double, char

#include<iostream>
using namespace std;

int main()
{
	//Printing the size of different datatypes using 'sizeof' operator
	
	cout<<"Size of char: "<<sizeof(char)<<" byte" <<endl;  
	cout<<"Size of int: "<<sizeof(int)<<" bytes" <<endl;
	cout<<"Size of float: "<<sizeof(float)<<" bytes" <<endl;
	cout<<"Size of double: "<<sizeof(double)<<" bytes" <<endl;
	
	return 0;
}

 
//2)C++ program to find product of two numbers entered by the User

#include<iostream>
using namespace std;

int main()
{
	float num1,num2;  //Declaration of variables
	
	cout<<"Enter two numbers:";
	cin>>num1;			//Taking number from User
	cin>>num2;
	cout<<"Product = "<<num1*num2;		//prints the product of 2 numbers taken by the user
	return 0;
}
