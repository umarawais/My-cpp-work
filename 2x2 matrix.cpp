#include<iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2], c[2][2];
	int i, j, k, l, m, n;
	for( i=0; i<2; i++)
	{
		for( j=0; j<2; j++)
		{
			cout<<"Enter value : ";
			cin>>a[i][j];
		}
	}
	
		for( k=0; k<2; k++)
		{
			for( l=0; l<2; l++)
			{
				cout<<"Enter value : ";
				cin>>b[k][l];
			}
		}
		
		cout<<"========================="<<endl;
		
		for( m=0; m<2; m++)
		{
			for( n=0; n<2; n++)
			{
				c[m][n]=a[i][j]+b[k][l];
				cout<<c[m][n]<<"\t";
			}
			cout<<endl;
		}
}

