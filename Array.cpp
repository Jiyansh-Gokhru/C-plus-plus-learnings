#include <iostream>

using namespace std;



void CreateArray(int Array[],int n){
    for (int i=0;i<n;i++){
        cout<<"Enter Element at: "<<i<<endl;
        cin>>Array[i];    
    }
    for (int i=0;i<n;i++){

        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
int smallLargeArrayElement(int arr[],int size){
    int smallest=INT_MAX;
    int largest=INT_MIN;

    for (int i=0;i<size;i++){
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }

    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest<<endl;
    return 0;
}
int linearSearch(int arr[],int n){
    int target;
    cout<<"Target: "<<endl;
    cin>>target;

    cout<<"at Index: ";
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter No of elements:";
    cin>>n;
    int arr[n];
    CreateArray(arr,n);
    // smallLargeArrayElement(arr,n);
    cout<<"Linear Search"<<linearSearch(arr,n)<<endl;
    return 0;
}