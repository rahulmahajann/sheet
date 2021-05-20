#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	

    cout<<"original array"<<endl;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
	
	rvereseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
		
	return 0;
}
