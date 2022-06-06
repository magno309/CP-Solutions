#include<stdio.h>
#include<algorithm>
using namespace std;
 
int memo[200][200];
 
int joy(int a, int b){
 
    if(a<=0 or b<=0){
        return 0;
    }
    if(memo[a][b] != 0){
        return memo[a][b];
    }
 
    int p1 = joy(a+1,b-2);
    int p2 = joy(a-2, b+1);
    int mx = max(p1,p2) + 1;
    memo[a][b] = mx;
    return mx;
}
 
int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    if(a == 1 and b == 1){
        printf("0");
    }else{
        printf("%d", joy(a,b));
    }
    return 0;
}