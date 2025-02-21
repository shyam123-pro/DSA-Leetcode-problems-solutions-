#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="One";
    m[2]="Two";
    m[3]="Three";
    m[4]="Four";
    m.emplace(5,"Five");
    m.insert({6,"Six"});
    cout<<"Key 2 has value :"<<m[2]<<endl;
    for(const auto&pair:m){
        cout<<"Keys : "<<pair.first<<" Value : "<<pair.second<<endl;
    }

    return 0;
}