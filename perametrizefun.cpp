#include<iostream>
using namespace std;
void Location(string);
void Location(int);
int main()
{
	Location("kotli");
	Location("3");
}
void Location(string Place)
{
	cout<<Place;
}
void Location( int Street)
{
	cout<<Street;
}
