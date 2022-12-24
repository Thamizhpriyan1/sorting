#include<iostream>
using namespace std;
class selection
{
	int i,j,temp,a[100],n,min;
  public:
  	 void get();
  	 void sel();
  	 void put();
};

void selection::get()
{
	cout<<"enter the n value";
	cin>>n;
	cout<<"enter the \t"<<n<<"\t value";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void selection::sel()
{
	for(i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1 ;j<=n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
void selection::put()
{
	cout<<"the sorted elements are ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	selection ob;
	ob.get();
	ob.sel();
	ob.put();
	return 0;

}
