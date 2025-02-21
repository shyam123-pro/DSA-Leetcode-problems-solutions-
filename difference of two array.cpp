#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool e = false;
    sort(a.begin(), a.end());
    int i = 0,j = 1;
    while(j<a.size()){
        int diff = a[j]-a[i];
        if(diff == target){
            cout<<"Yes";
            e = true;
            break;
        }
        if(diff>target){
            i++;
            if(i == j){
                j++;
            }
        }
        else{
            j++;
        }
    }
    if(!e)
        cout<<"No";
    return 0;
}
