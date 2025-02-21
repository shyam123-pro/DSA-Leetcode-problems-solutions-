#include<iostream>
#include<String>
#include<vector>
using namespace std;
int main(){
    vector<string>words={"Apple","Mango","Banana"};
    for(const auto&word:words){
        cout<<word<<" ";
    }

    return 0;
}