#include<iostream>
using namespace std;
int nName;
int main()
{
    cout<<"how many names you want to add: "; cin>> nName;
	string nameList[nName],name;
	for(int x=0;x<nName;x++)
	{
		cout<<"Enter Name: ";
		cin>>nameList[x];
	}
		for(int i=0;i<nName;i++)
		{
			for(int x=i+1;x<nName;x++)
			{
				if(nameList[i]>nameList[x])
				{
					name=nameList[i];
					nameList[i]=nameList[x];
					nameList[x]=name;
				}
			}
		}

		cout<<"The Alphabetical order of names are:"<<endl;
		for(int x=0;x<nName;++x)
		{
			cout<<nameList[x]<<endl;
		}



}
