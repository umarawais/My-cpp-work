#include<iostream>
using namespace std;
int main()
{
	 int x,y,z=1;
	 cout<<"Which Table do you want to print?"<<endl;
	 cin>>x; 
	 cout<<"Enter Limit:"<<endl;
	 cin>>y;
	 while(z<=y)
	 {
	 	cout<<x<<" x "<<z<<" = "<<x*z<<endl;
	 	 z++;
	 }
	 
	 
}
