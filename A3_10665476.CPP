#include<iostream>
using namespace std;
int main()
{
	int score;
	int n;
	cout<<"Enter your score";
	cin>>n;
	
	if(n >=80 && n <=100)
	{
		cout<<"A";
		
	}
	else if(n >=79 && n <=75)
	{
		cout<<"B+";
	}
	else if(n >=74 && n<=70)
	{
		cout<<"B";
		
	}
	else if(n>=69 && n<=65)
	{
		cout<<"C+";
		
	}
	else if(n>=64 && n<=60)
	{
		cout<<"C";
		
	}
	else if(n>=59 && n<=55)
	{
		cout<<"D+";
		
	}
	else if(n>=54 && n<=50)
	{
		cout<<"D";
		
	}
	else if(n>=49 && n<=45)
	{
		cout<<"E";
	}
	else if(n>=44 &&n==0);
	
	
	return 0;
 }
 