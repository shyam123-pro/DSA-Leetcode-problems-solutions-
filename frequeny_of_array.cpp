#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main(){
    int arr[10]={1,4,4,4,5,2,1,1,7,5};
    int val=1;
    map<int,int>umap;
    for(auto val:arr){
        umap[val]++;
    }
    for(const auto&pair:umap){
        cout<<"Keys : "<<pair.first<<" Value : "<<pair.second<<endl;
    }

    return 0;
}