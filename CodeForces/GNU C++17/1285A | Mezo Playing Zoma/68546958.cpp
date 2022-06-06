#include <cstdio>
 
char s[100005];
 
int main(){
    int n,l=0,r=0;
    scanf("%d", &n);
    scanf("%s", s);
    for(int i=0;i<n;i++){
        if(s[i] == 'L'){
            l++;
        }else{
            r++;
        }
    }
    //printf("%d %d\n", l,r);
    printf("%d", r+l + 1);
    return 0;
}