#include<iostream>
using namespace std;
int main(){
        int no;
        cin>>no;
        for(int i=1;i<=no;i++){

            for(int j=1;j<=(no-i+1);j++){
                cout<<j<<" ";
            }
            for(int star=1;star<=2*(i-1);star++){
                cout<<"* ";
            }
            for(int k=(no-i+1);k>=1;k--){
                cout<<k<<" ";
            }
            cout<<endl;
        }






    return 0;
}