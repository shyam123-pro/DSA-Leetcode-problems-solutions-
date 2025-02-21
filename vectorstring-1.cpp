#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    vector<string>words={"Apple","Mango","Banana"};
    for(auto & word:words){
        word+="$";
    }
    for(const auto&word:words){
        cout<<word<<" ";
    }

    return 0;
}