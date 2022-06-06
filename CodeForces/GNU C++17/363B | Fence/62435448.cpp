#include<cstdio>
 
int v[1000005], s[1000005];
 
int main(){
    int n,k,m=1e9, pos;
    scanf("%d%d", &n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d", &v[i]);
    }
    for(int i=1;i<=n;i++){
        s[i] = v[i] + s[i-1];
    }
    int i=0;
    while(k+i <= n) {
        if(s[k+i]-s[i]<m){
            m = s[k+i]-s[i];
            pos = i;
        }
        i++;
    }
    printf("%d", pos+1);
    return 0;
}