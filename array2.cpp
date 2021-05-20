#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define pb push_back
#define pob pop_back


int main(){
    
    v arr = {20,3,4,-5,1,10};

    sort(arr.begin(),arr.end());

    cout<<"minimum element " << arr.front()<<endl;
    cout<<"minimum element " << arr.back()<<endl;

    return 0;
}