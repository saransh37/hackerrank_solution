#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //defining highest range of matrix during declaration.
    char a[101][101];
    string str;
    //taking n string of size n.
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<n;j++)
            a[i][j]=str[j];
    }

    //checking for all non border element
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
     //comparing with left ,right ,upper, bottom element having common side.
    if(a[i][j]>a[i+1][j]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1])
        a[i][j]='X';
        }
    }
    //printing the updating matrix with cavity map
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}
