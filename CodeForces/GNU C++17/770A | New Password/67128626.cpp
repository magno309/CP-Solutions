#include<cstdio>
 
char s[105];
 
int main(){
    int n,k,c=0,l='a';
 
    scanf("%d%d", &n,&k);
    for(int i=0;i<n;i++){
        s[i] = l;
        c++;
        l++;
        if(c==k){
            l='a';
            c=0;
        }
    }
    printf("%s", s);
    return 0;
}