#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
   
	int SearchElement, Size;
	cout << "Enter the number of items:" << "\n";
	cin >>Size;
	int *arr = new int(Size);
	cout << "Enter the elements of array" << endl;
	for (int i= 0; i < Size; i++) {
		cin >> arr[i];
	}
	

    cout<<"Enter the element to be searched"<<endl;
    cin>>SearchElement;
    for(int i=0;i<Size;i++){
        if(arr[i]==SearchElement){
            cout<<"Element Found at "<<i<<" Position"<<endl;
        }
    }
    return 0;
}
