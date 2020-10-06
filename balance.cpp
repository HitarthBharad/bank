#include<bits/stdc++.h>
#include<ctime>
using namespace std;

vector< pair<string,int> > savings;
vector< pair<string,int> > checking;

void savings_credit(int amount)
{
	string s = "Credit";
	savings.push_back(make_pair(s,amount));
}
void savings_debit(int amount)
{
	string s = "Debit";
	savings.push_back(make_pair(s,-1*amount));
}

void checking_credit(int amount)
{
	string s = "Credit";
	checking.push_back(make_pair(s,amount));
}
void checking_debit(int amount)
{
	string s= "Debit";
	checking.push_back(make_pair(s,-1*amount));
}

int main()
{
	
	int init = 10000;
	string q = "Credit";
	savings.push_back(make_pair(q,init));
	checking.push_back(make_pair(q,init));
	
	int savings_total = init;
	int checking_total = init;
	
	int pin = 1;
	while(pin==1)
	{
		int l;
		cout<<"Account Type: 1.Savings 2.Checking"<<endl;
		cin>>l;
		
		if(l==1)
		{
			
			int temp;
			cout<<"1. Credit"<<endl;
			cout<<"2. Debit"<<endl;
			cin>>temp;
			int n;
			cout<<"Amount : ";
			cin>>n;
		
			if(temp==1)
			{
				savings_credit(n);
				savings_total+=n;
			}
			else if(temp==2)
			{
				savings_debit(n);
				savings_total-=n;
			}	
			else
			{
				cout<<"Bad Choice"<<endl;
			}
		}
		else if(l==2)
		{
			int temp;
			cout<<"1. Credit"<<endl;
			cout<<"2. Debit"<<endl;
			cin>>temp;
			int n;
			cout<<"Amount : ";
			cin>>n;
		
			if(temp == 1)
			{
				checking_credit(n);
				checking_total+=n;
			}
			else if(temp ==2)
			{
				checking_debit(n);
				checking_total-=n;
			}		
			else
			{
				cout<<"Bad Choice !"<<endl;
			}
		}
		else
		{
			cout<<"Bad choice !"<<endl;
		}
		
		cout<<"1. Continue "<<endl;
		cout<<"2. Exit "<<endl;
		cin>>l;
		
		if(l==2)
		{
			pin = -1;
		}
	}
	
	cout<<"Final Transaction: "<<endl;
	cout<<"Savings : "<<savings_total<<endl;
	cout<<"Checking : "<<checking_total<<endl;
	return 0;
}
