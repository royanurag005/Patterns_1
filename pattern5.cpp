#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
// char a=65;
for(int i=1;i<=n;i++){
    char a=65;
    for(int j=1;j<=n;j++){
        cout<<a<<" ";
    a=a+1;
    }
    cout<<endl;
}



    return 0;
}