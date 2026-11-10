#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> sum;
        int st=0;
        int end=n-1;
        
        for (int val:nums){
            int total=nums[st]+nums[end];
            if(total==target){
                sum.push_back(st);
                sum.push_back(end);
                return sum;
            }
            else if (total>target){
                end-=1;
            }
            else if(total<target){
                st+=1;
            }
        }
    }


int main(){
    vector <int> vec={
        10,20,30,40,50
    };
    for (int i :vec){ //for each loop
        cout<<i<<" ";
    }
    cout<<endl;
    // cout<<vec.size()<<endl;
    
    // vec.push_back(100);
    // for (int i :vec){ 
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // vec.pop_back();
    // for (int i :vec){ 
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(3)<<endl;
    // cout<<vec.capacity()<<endl;

    vector<int>sum = twoSum(vec,30);
    for (int i :sum){ 
        cout<<i<<" ";
    }
    
}