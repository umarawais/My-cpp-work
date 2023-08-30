#include<iostream>
using namespace std;
string File(string a, string b);
int main()
{
	cout<<File("My Data "," Images");
}

string File(string Folder, string Name)
{
	return Folder+Name;
}
