

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m, i {0}, sum {0};
    char a[5];
    cin >> n;
    for(int i=0; i <n; i++){
        cin >> m;
        while(m){
            
            if(m%10 == 0)
                a[i++] = 10;
            else
                a[i++] = m % 10;
            m /=10;
        }
        i=0;
        for(int j=0; j<3; j++){
            sum += abs(a[j] - a[j+1]);
        }
        sum += abs(a[3] - 1);
        cout << sum +4 << endl;
        sum =0;
    }

    return 0;
}
