#include<iostream>
using namespace std;
int gcd (int n , int m)
{
	return (m !=0) ? gcd(m, n % m) : n;
}

int main(void)
{
	
	int num1, num2, result;
	cout<<" Enter two numbers to find GCD using Euclidean algorithm:";
	cin>>num1 >> num2;
	result = gcd(num1 , num2);
	if(gcd)
	cout<< "\nThe GCD of " << num1 << " and " << num2 <<" is:" << result
	<<endl;
	
	else
	cout<<"\nInvalid input !\n";
	return 0;
}