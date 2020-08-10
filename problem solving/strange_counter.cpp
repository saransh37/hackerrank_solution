#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    ll time=t;
    ll val=3,temp=3;
    ll cycle_no=0;
    //finding the cycle to which time 't' belong
    while(t>0){
        t-=val;
        val*=2;
        cycle_no++;
    }
    //finding initial value it the cycle
    ll initial_val=3*pow(2,cycle_no-1);
    ll initial_time=0;
    //finding the initial time in that cycle
    while(cycle_no>1){
        initial_time+=temp;
        temp*=2;
        cycle_no--;
    }
    // finding the value at the given time
    initial_time+=1;
    while(initial_time<time){
        initial_val--;
        initial_time++;
    }
    cout<<initial_val;
}
