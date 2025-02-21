#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    vec.push_back(10);
    
        for(auto val:vec){
            cout<<val<<" ";
         }
    cout<<endl;

    
    return 0;
}
