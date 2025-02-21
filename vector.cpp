// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>>vec={{1,2,3},{4,5,6},{7,8,9}};
//     vec.push_back({10,11,12});
//     for(const auto & row:vec){
//         for(auto val:row){
//             cout<<val<<" ";
//          }
//     cout<<endl;

//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<int>&vec){
    for(auto val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
}
void modifyvector(vector<int>&vec){
    for(auto &val:vec){
        val+=2;
    }
}

int main(){
   vector<int>vec={1,2,3,4,5};
   printvector(vec);
   modifyvector(vec);
   printvector(vec);
   
    return 0;
}
