#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<vector<int>>res;
        for(int i=0;i<pow(2,n);i++){   //here we are taking loop till 2 power n of binary numbers
            vector<int>ve;     
            for(int j=0;j<n;j++){
                if((1<<j)&i){   //left shifting and checking whether the bit is set or not
                    ve.push_back(arr[j]);
                }
            }
            res.push_back(ve);
        }
        for(auto it:res){
            for(auto x:it){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}

