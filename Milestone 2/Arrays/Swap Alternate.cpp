#include <iostream>
using namespace std;

#include "solution.h"

//answer
void swapAlternate(int *arr,int n){
int temp,i=0,j=1;
while(i<n-1){
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  if(j>=n){
  //cout<<temp;
  break;
  }
  //cout<<arr[i]<<" ";
  //cout<<arr[j]<<" ";
  i=i+2;
  j=i+1;
 }
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}
