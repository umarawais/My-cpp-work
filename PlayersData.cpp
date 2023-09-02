#include<iostream>
using namespace std;

struct Matches
{
	int TestMatches;
	int OdiMatches;
	int T20Matches;
};

int main()
{
	Matches Imam_ul_Haq;
	Matches FakherZaman;
	Matches BaberAzam;
	Matches MuhammadRizwan;
	Matches Salman_Ali_Agha;
	Matches IftikharAhmed;
	Matches ShadabKhan;
	Matches MuhammadNawaz;
	Matches ShaheenAfridi;
	Matches NaseemShah;
	Matches HarisRauf;
	
	Imam_ul_Haq.TestMatches= 22;
	Imam_ul_Haq.OdiMatches= 63;
	Imam_ul_Haq.T20Matches= 2;
	
	FakherZaman.TestMatches= 3;
	FakherZaman.OdiMatches= 74;
	FakherZaman.T20Matches= 76;
	
	BaberAzam.TestMatches= 49;
	BaberAzam.OdiMatches= 104;
	BaberAzam.T20Matches= 104;
	
	MuhammadRizwan.TestMatches= 28;
	MuhammadRizwan.OdiMatches= 61;
	MuhammadRizwan.T20Matches= 85;
	
	Salman_Ali_Agha.TestMatches= 9;
	Salman_Ali_Agha.OdiMatches= 15;
	Salman_Ali_Agha.T20Matches= 0;
	
	IftikharAhmed.TestMatches= 4;
	IftikharAhmed.OdiMatches= 15;
	IftikharAhmed.T20Matches= 49;
	
	ShadabKhan.TestMatches= 6;
	ShadabKhan.OdiMatches= 60;
	ShadabKhan.T20Matches= 92;
	
	MuhammadNawaz.TestMatches= 6;
	MuhammadNawaz.OdiMatches= 30;
	MuhammadNawaz.T20Matches= 57;
	
	ShaheenAfridi.TestMatches= 27;
	ShaheenAfridi.OdiMatches= 40;
	ShaheenAfridi.T20Matches= 52;
	
	NaseemShah.TestMatches= 17;
	NaseemShah.OdiMatches= 11;
	NaseemShah.T20Matches= 19;
	
	HarisRauf.TestMatches= 1;
	HarisRauf.OdiMatches= 25;
	HarisRauf.T20Matches= 62;
	
	int i;
	cout<<"Enter your choise\n\n1.Imam_ul_Haq\n2.FakherZaman\n3.BaberAzam\n4.MuhammadRizwan\n5.Salman_Ali_Agha\n6.IftikharAhmed\n7.ShadabKhan\n8.MuhammadNawaz\n9.ShaheenAfridi\n10.NaseemShah\n11.HarisRauf"<<endl;
	cin>>i;
	
	if(i==1)
	{
		int a;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches"<<endl;
		cin>>a;
		if(a==1)
		{
			cout<<"He Played "<<Imam_ul_Haq.TestMatches<<" TestMatches";
		}
		else if(a==2)
		{
			cout<<"He Played "<<Imam_ul_Haq.OdiMatches<<" OdiMatches";
		}
		else if(a==3)
		{
			cout<<"He Played "<<Imam_ul_Haq.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	
	else if(i==2)
	{
		int b;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>b;
		if(b==1)
		{
			cout<<"He Played "<<FakherZaman.TestMatches<<" TestMatches";
		}
		else if(b==2)
		{
			cout<<"He Played "<<FakherZaman.OdiMatches<<" OdiMatches";
		}
		else if(b==3)
		{
			cout<<"He Played "<<FakherZaman.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==3)
	{
		int c;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>c;
		if(c==1)
		{
			cout<<"He Played "<<BaberAzam.TestMatches<<" TestMatches";
		}
		else if(c==2)
		{
			cout<<"He Played "<<BaberAzam.OdiMatches<<" OdiMatches";
		}
		else if(c==3)
		{
			cout<<"He Played "<<BaberAzam.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==4)
	{
		int d;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>d;
		if(d==1)
		{
			cout<<"He Played "<<MuhammadRizwan.TestMatches<<" TestMatches";
		}
		else if(d==2)
		{
			cout<<"He Played "<<MuhammadRizwan.OdiMatches<<" OdiMatches";
		}
		else if(d==3)
		{
			cout<<"He Played "<<MuhammadRizwan.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==5)
	{
		int e;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>e;
		if(e==1)
		{
			cout<<"He Played "<<Salman_Ali_Agha.TestMatches<<" TestMatches";
		}
		else if(e==2)
		{
			cout<<"He Played "<<Salman_Ali_Agha.OdiMatches<<" OdiMatches";
		}
		else if(e==3)
		{
			cout<<"He Played "<<Salman_Ali_Agha.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==6)
	{
		int f;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>f;
		if(f==1)
		{
			cout<<"He Played "<<IftikharAhmed.TestMatches<<" TestMatches";
		}
		else if(f==2)
		{
			cout<<"He Played "<<IftikharAhmed.OdiMatches<<" OdiMatches";
		}
		else if(f==3)
		{
			cout<<"He Played "<<IftikharAhmed.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==7)
	{
		int g;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>g;
		if(g==1)
		{
			cout<<"He Played "<<ShadabKhan.TestMatches<<" TestMatches";
		}
		else if(g==2)
		{
			cout<<"He Played "<<ShadabKhan.OdiMatches<<" OdiMatches";
		}
		else if(g==3)
		{
			cout<<"He Played "<<ShadabKhan.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==8)
	{
		int h;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>h;
		if(h==1)
		{
			cout<<"He Played "<<MuhammadNawaz.TestMatches<<" TestMatches";
		}
		else if(h==2)
		{
			cout<<"He Played "<<MuhammadNawaz.OdiMatches<<" OdiMatches";
		}
		else if(h==3)
		{
			cout<<"He Played "<<MuhammadNawaz.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==9)
	{
		int j;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>j;
		if(j==1)
		{
			cout<<"He Played "<<ShaheenAfridi.TestMatches<<" TestMatches";
		}
		else if(j==2)
		{
			cout<<"He Played "<<ShaheenAfridi.OdiMatches<<" OdiMatches";
		}
		else if(j==3)
		{
			cout<<"He Played "<<ShaheenAfridi.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==10)
	{
		int k;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>k;
		if(k==1)
		{
			cout<<"He Played "<<NaseemShah.TestMatches<<" TestMatches";
		}
		else if(k==2)
		{
			cout<<"He Played "<<NaseemShah.OdiMatches<<" OdiMatches";
		}
		else if(k==3)
		{
			cout<<"He Played "<<NaseemShah.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else if(i==11)
	{
		int l;
		cout<<"Enter your choise\n1.TestMatches\n2.OdiMatches\n3.T20Matches";
		cin>>l;
		if(l==1)
		{
			cout<<"He Played "<<HarisRauf.TestMatches<<" TestMatches";
		}
		else if(l==2)
		{
			cout<<"He Played "<<HarisRauf.OdiMatches<<" OdiMatches";
		}
		else if(l==3)
		{
			cout<<"He Played "<<HarisRauf.T20Matches<<" T20Matches";
		}
		else
		{
			cout<<"Invalid Choise";
		}
	}
	else
	{
		cout<<"Invalid Choise";
	}
}
