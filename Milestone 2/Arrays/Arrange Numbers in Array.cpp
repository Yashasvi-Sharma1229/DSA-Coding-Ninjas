#include <iostream>
using namespace std;

#include "solution.h"

//answer
void arrange(int *arr,int n)
{
int i,j=1;
if(n%2==1){
  for(i=0;i<n/2+1;i++){
    arr[i]=j;
    //cout<<arr[i]<<" ";
    j=j+2;
    }
    j=n-1;
    for(i=n/2+1;i<n;i++){
     arr[i]=j;
    // cout<<arr[i]<<" ";
     j=j-2;
    }
  }
  else{
  j=1;
    for(i=0;i<n/2;i++){
     arr[i]=j;
    // cout<<arr[i]<<" ";
     j=j+2;
    }
  j=n;
    for(i=n/2;i<n;i++){
      arr[i]=j;
     // cout<<arr[i]<<" ";
      j=j-2;
    }
  }
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
