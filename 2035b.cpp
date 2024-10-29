#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            if(n<5) cout<<"-1\n";
            else{
                for(int i=0;i<n-5;i++) cout<<"3";
                cout<<"36366\n";
            }
        }
        else{
            for(int i=0;i<n-2;i++) cout<<"3";
            cout<<"66\n";
        }
    }
    return 0;
}
