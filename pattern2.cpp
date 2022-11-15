#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int n=1;
    for(int i=1;i<=no;i++){
        
        for(int j=1;j<=no;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;

    }
    return 0;
}