#include<iostream>
 
using namespace std;
 
int main()
{
	int a[50],n,i,j,temp, swap=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the array elements: "; 
	
	for(i=0;i<n;++i)
		cin>>a[i];
		bool flag=false;
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<(n-1-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=true;
				swap++;
			}
			if(flag=false)
			{
				break;
			}
	}
	
	cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
		cout<<"total no swaps="<<swap;
		
	return 0;
}
