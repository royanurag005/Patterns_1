#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    for(int i=1;i<=no;i++){
        for(int j=no;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;
}