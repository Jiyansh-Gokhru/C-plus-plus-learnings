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
    return;
}
pair<int,int> smallLargeArrayElement(int arr[],int size){
    int smallest=0;
    int largest=0;

    for (int i=0;i<size;i++){
        if (arr[i]>arr[largest]){
            largest=i;
        }
        if (arr[i]<arr[smallest]){
            smallest=i;
        }
    }
    

    cout<<"Largest: "<<arr[largest]<<endl;
    cout<<"Smallest: "<<arr[smallest]<<endl;
    return {smallest,largest};
}
int linearSearch(int arr[],int n){ //O(n)
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

void reverseArray(int arr[],int n){ //O(n)
    int st=0;
    int end=n-1;
    while(st<n/2){
        swap(arr[st],arr[end]);
        st+=1;
        end-=1;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void arrayCalc(int arr[],int n){
    int sum=0;
    long int product=1;
    int i=0;
    while(i<n){
        sum+=arr[i];
        product*=arr[i];
        i++;
    }
    cout<<"Sum: "<<sum<<" and Product: "<<product<<endl;
    return;
}

void SwapMaxMinArray(int arr[],int n){
    auto [min,max]=smallLargeArrayElement(arr,n);
    swap(arr[min],arr[max]);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void UniqueArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
}



int main(){
    int n;
    cout<<"Enter No of elements:";
    cin>>n;
    int arr[n];
    CreateArray(arr,n);
    smallLargeArrayElement(arr,n);
    cout<<"Linear Search "<<linearSearch(arr,n)<<endl;
    reverseArray(arr,n);
    arrayCalc(arr,n);
    SwapMaxMinArray(arr,n);
    UniqueArray(arr,n);
    return 0;
}