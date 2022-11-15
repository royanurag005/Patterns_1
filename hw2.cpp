#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
for(int i=1;i<=a;i++){
    int no=i;
    for(int s=1;s<=i-1;s++){
        cout<<" ";
    }
    for(int j=1;j<=(a-i+1);j++){
        cout<<no;
        no++;
    }
    cout<<endl;
}





    return 0;
}