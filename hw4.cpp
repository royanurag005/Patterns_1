#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
// int no=1;
for(int i=1;i<=a;i++){
    // int no=i;
    for(int s=1;s<=a-i;s++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
        // no++;
    }
    for(int k=i-1;k>=1;k--){
        cout<<k<<" ";
    }
    cout<<endl;
}





    return 0;
}