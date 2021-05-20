#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define pb push_back
#define pob pop_back

int main(){
    
    v arr = {-1, 2, -3, 4, 5, 6, -7, 8, 9};

    int j=0;

    for(int i=0 ; i<arr.size() ;i++){
        if(arr.at(i)<0){
            int temp = arr.at(i); 
            arr.at(i) = arr.at(j);
            arr.at(j)=temp;
            j+=1;
        }
    }

    for(int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}