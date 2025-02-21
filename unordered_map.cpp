#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int>umap;
    umap["Cat"]=5;
    umap["Dog"]=7;
    umap["Cow"]=12;
    umap["Bird"]=10;
    umap.emplace("Hourse",12);
    // umap.insert({6,"Six"});
    cout<<"Key 2 has value :"<<umap["Dog"]<<endl;
    for(const auto&pair:umap){
        cout<<"Keys : "<<pair.first<<" Value : "<<pair.second<<endl;
    }

    return 0;
}