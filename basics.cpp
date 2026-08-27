#include <iostream>
using namespace std;
int main()
{
    // input output,loop,list,conditional statement
    
    int size;
    cout<<"no. of element: ";
    cin>>size;
    int numbers[size];
    for (int i=0;i<size;i++){
        cout<<"Element at index "<<i<<" :\n";
        cin>>numbers[i];
    }
    
    cout<<"Final list :\n[ ";
    for (int i=0;i<size;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<"]";
    
    
    int largest=0;
    cout<<"\nGreatest element is: ";
    for(int i=0;i<size;i++){
        if (numbers[i]>largest){
            largest=numbers[i];
        }
    }
    cout<<largest;
    return 0;
}