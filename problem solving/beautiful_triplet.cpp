#include<iostream>\
#include<bits/stdc++.>
#include<map>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    map<int,int>m;
    //taking each element and storing in map(ordered map)
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int count=0;
    //as array is already in ascending order
        if(m.find(a[i]+d)!=m.end()&&m.find(a[i]+2*d)!=m.end())
        count++;
    }
    cout<<count;


}
