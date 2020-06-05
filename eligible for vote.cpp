//c++ program to check age of a user is eligible  for voting or not
#include<iostream>
using namespace std;
main()
{
	system("color D");
	int age;
	cout<<"\n\n\t\t\t\t\t\tEligibility For Voting\n\n";
	cout<<"Enter your age\n\n";
	cin>>age;
	if(age>18)
	{
		cout<<"\n\nYou can vote";
	}
	else
	{
		cout<<"\n\nYou can not vote";
	}
}
