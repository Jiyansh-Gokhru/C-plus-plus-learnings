#include <iostream>
#include <vector>

using namespace std;
vector<int> CreateArray(int n){

    vector<int> Array(n);
    for (int i=0;i<n;i++){
        cout<<"Enter Element at: "<<i<<endl;
        cin>>Array[i];    
    }
    for (int i=0;i<n;i++){

        cout<<Array[i]<<" ";
    }
    cout<<endl;
    return Array;
}
int smallLargeArrayElement(const vector<int>& arr,int size){
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

int main(){
    int n;
    cout<<"Enter No of elements:";
    cin>>n;
    
    vector<int> Array=CreateArray(n);
    smallLargeArrayElement(Array,n);
    return 0;
}