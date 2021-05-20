#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define pb push_back
#define pob pop_back

int main(){
    
    v arr = {1,3,2,5,4,7,-1};
    int k = 4;
    sort(arr.begin(),arr.end());

    cout<< k  <<"minimum element --> " << arr[k-1]<<endl;
    cout<< k  <<"maximum element --> " << arr[arr.size()-k];


    return 0;
}