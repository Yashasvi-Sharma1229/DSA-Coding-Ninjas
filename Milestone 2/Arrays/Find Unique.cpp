#include <iostream>
#include "solution.h"
using namespace std;

//answer
int findUnique(int *arr,int size){

    int ans=arr[0];
    for(int i=1;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}
