#include<bits/stdc++.h>
using namespace std;

void reArrange(int arr[],int n)
{
	int evenPos = n/2;
	
	int oddPos = n- evenPos;
	
	
	
	int temp[n];
	
	for(int i=0;i<n;i++)
	{
		temp[i]=arr[i];
	}
	
	// sorting 
	sort(temp,temp+n);
	
	int j = oddPos-1;
	
	for(int i=0;i<n;i+=2)
	{
		arr[i]=temp[j];
		j--;
	}
	j= oddPos;
	for(int i=1;i<n;i+=2)
	{
		arr[i]=temp[j];
		j++;
	}
	
}

// print the array 
void PrinArray(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	reArrange(arr,n);
	cout<<" the given array is : ";
	for(int i= 0; i<n;i++)
	{
		cout<<arr[i] << " ";
	}
	cout<<" \n After Rearange array is ";
	PrinArray(arr,n);
	
	
}
