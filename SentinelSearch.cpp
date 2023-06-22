
#include <iostream>
using namespace std;

void sentinelSearch(int arr[], int n, int key)
{

	// Last element of the array
	int last = arr[n - 1];

	// Element to be searched is
	// placed at the last index
	arr[n - 1] = key;
	int i = 0;

	while (arr[i] != key)
		i++;

	// Put the last element back
	arr[n - 1] = last;

	if ((i < n - 1) || (arr[n - 1] == key))
		cout << key << " is present at index " << i;
	else
		cout << "Element Not found";
}

// Driver code
int main()
{
    int Size,SearchElement;
    cout<<"Enter the Size Of Array"<<endl;
    cin>>Size;
    // Creating an integer array with size 'Size' with Dynamic memory allocation
    
	int *arr = new int[Size];
	cout<<"Enter the Element of Array"<<endl;
    for(int i=0;i<Size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the searching element"<<endl;
    cin>>SearchElement;

	

	sentinelSearch(arr, Size, SearchElement);

	return 0;
}

