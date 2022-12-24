#include<iostream>
using namespace std;
class bubble
{

			int p,temp,n,i,a[100];
		public:
			void get();
			void put();
			void bub();

};
	void bubble::get()
	{
		
		cout<<"how many numbers you want to sort";
		cin>>n;
		cout<<"enter "<<n<<"elements";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
	}
	void bubble::bub()
	{
		
		for(p=1;p<n-1;p++)
		{
			for(i=0;i<=(n-p)-1;i++)
			{
				if(a[i]>a[i+1])
				{
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
				}
			}
			
		} 
	
	}

	void bubble::put()
	{
		cout<<"the sorted array...\n";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
		cout<<"\n";
	}
int main()
{
	bubble ob;
	ob.get();
	ob.bub();
	ob.put();
	return 0;
		}		
