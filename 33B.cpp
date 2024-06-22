//brilliantadam
//22/6/2024
//Brute Forcing O(n^2)
//Mistake: Lack of Concentration; Some Syntax errors like cin >> a[n] instead of cin >> a[i]
//I also forgot I was reseting temp to 0 not to 1.. ughh
 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n] , max {0} , temp {1}, x;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            if(a[j] >= a[j+1])
                temp++;
            else
                break;
        }
        for(int j=i; j>0; j--){
            if(a[j] >= a[j-1])
                temp++;
            else
                break;
        }
        if(max < temp)
            max = temp;
        temp = 1;
    }
    cout << max;
	return 0;
}
