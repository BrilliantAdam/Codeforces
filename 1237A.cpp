//brilliantadam
//22/6/2024
//#####################################
//Learned: 1)Alternating Rounding
//By Alternating a variable form 1 to -1
//Learned: 2)Mathmatical theory
//Remember, for two numbers to be balanced
//they must have 
//odd * odd = odd
//odd + odd = even
//#####################################
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n , y, flag {1};
    cin >> n;
    while(n--){
        cin >> y;
        if(y % 2 == 0)
            cout << y / 2 << endl;
        else{
            cout << (y+flag) / 2 << endl;
            flag = -flag; //Alternating rounding; same as Alternating between ceil and floor functions.
        }
    }
	return 0;
}
