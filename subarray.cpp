#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Createsubarray(vector <int>& vec){
    for (int st=0;st<vec.size();st++){
        for (int end=st;end<vec.size();end++){
            vector <int> sliced(vec.begin()+st,vec.begin()+end+1);
            for (int x : sliced) cout << x << " ";
            cout<<endl;
        }
    }
    return ;
}
int MaxSumSubarray(vector <int>& vec){
    int currsum=0;
    int maxsum=INT_MIN;
    for (int i=0;i<vec.size();i++){
            currsum+=vec[i];
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }
    }
    cout<<maxsum<<endl;
    return 0;
}
int main(){
    vector<int> vec={10,20,-30,40,50,-60};
    // Createsubarray(vec);
    // MaxSumSubarray(vec);
    sort(vec.begin(),vec.end());

    for (int i:vec) cout<<i<<" ";
    return 0;
}