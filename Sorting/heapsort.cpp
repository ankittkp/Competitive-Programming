#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i)
{
	int largest =i;
	int right = 2*i+2;
	int left = 2*i+1;

	if(left<n && a[left] > a[largest])
	{
		largest = left;
	}
	if(right <n && a[right] > a[largest])
	{
		largest = right;
	}
	if(largest !=i)
	{
		swap(a[largest],a[i]);
		heapify(a,n,largest);
	}

}
void heapsort(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);
	}
	for(int i=n-1;i>=0;i--)
	{
		swap(a[0],a[i]);
		heapify(a,i,0);

	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		heapsort(a,n);
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
	}

	return 0;
}