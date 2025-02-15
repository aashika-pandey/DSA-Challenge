#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={5,1,8,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) count++;
        }
    }
    cout<<count;

}