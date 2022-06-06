#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m;
    vector<int> s;
    scanf("%d%d", &n,&m);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        s.push_back(a);
    }
    sort(s.begin(), s.end());
    int sum = 0;
    for(int x:s){
        if(x < 0 and m>0){
            sum += x*-1;
            m--;
        }
    }
    printf("%d", sum);
    return 0;
}