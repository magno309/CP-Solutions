#include<cstdio>
 
void formula_mamalona(long long a, long long b){
    if(b<=((a+1)/2)){
        printf("%I64d", (b*2)-1);
    }else{
        printf("%I64d", 2*(b-((a+1)/2)));
    }
}
 
int main(){
    long long n,k;
    scanf("%I64d%I64d", &n, &k);
    formula_mamalona(n,k);
    return 0;
}