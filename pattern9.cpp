#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
// char a=65;
for(int i=1;i<=n;i++){
    char c=64+n-i+1;
    for(int j=1;j<=i;j++){

    cout<<c<<" ";
    c=c+1;
    }
    cout<<endl;
} 

    return 0;
}