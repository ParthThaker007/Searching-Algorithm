#include <iostream>

using namespace std;
int binarySearch(int arr[],int size ,int val){
    int start=0,mid,end=size-1;
    while(start<=end){
        mid=(start+end)/2;
        if(mid==val){
            return mid;
        }
        else if(arr[mid]<val){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
}
int main()
{
    int Size,SearchElement;
    cout<<"Please Enter the Size of array "<<endl;
    cin>>Size;
    int arr[n];
    cout<<"Eneter the Element for array in sorted way"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Now Enter the element to be searched"<<endl;
    cin>>SearchElement;
    cout<<binarySearch(arr,Size,SearchElement);
    
    return 0;
}
