#include <bits/stdc++.h>
using namespace std;
void explainpairs(){
    pair<int ,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int ,pair<int ,int>> q={1,{2,6}};
    cout<<q.first<<" "<<q.second.second<< " "<<q.second.first<<endl;
    pair<int,int> arr[]={{5,3},{2,6},{5,8}};
    cout<<arr[1].second;
}

void explainVector() {
    vector<int> v={3,1,3,6,3};

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    vec.push_back({3, 2});
    vec.emplace_back(2, 2);

    vector<int> v1(5, 100);

    vector<int> v2(25);

    vector<int> v3(5, 20);
    vector<int> v4(v1);

    auto it = v.begin();

    it++;
    cout << *(it) << endl;

    it=it + 2;
    cout << *(it) <<endl;

    
    auto it1 = v.end();
     auto it2 = v.rend();
     auto it3 = v.rbegin();

    cout << v[0] << " "<< v.at(0)<<endl;;

    cout << v.back() << endl;

    for (auto i= v.begin(); i != v.end(); i++) {
         cout << *(i) << " ";
    }
    cout<<endl;
    // for (auto i: vec) { 
    //     cout << (i) << " ";
    // }
    // cout<<endl;
}

void explainmap(){
    map<int , int > Map;
    map<pair<int,int>,int>Pmap;
    Map[4]=1;
    Map.emplace(1,8);
    Map.insert({2,3});
    Pmap[{1,10}]=12;

    for (auto it:Map){
        cout<<it.first<<","<<it.second<<endl;
    }


}


void explain(){
    vector<int> v={
        1,5,9,2,6,2,7
    };
    sort(v.begin(),v.end());
    sort(v.begin()+1,v.end());
    sort(v.begin(), v.end(), greater<int>());
}
int main(){
 //stl: 1.alogorithms
//  2. Containers
// 3.functions
// 4.iteraters
    // explainpairs();
    explainVector();
    explainmap();
    return 0;
}