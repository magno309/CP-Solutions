#include<cstdio>
#include<algorithm>
 
int gcd(int x, int y){
    return (x==0)?y:gcd(y % x, x);
}
 
int main(){
    int a,b,n;
    bool turno = true;
    scanf("%d%d%d", &a,&b,&n);
    while(n>=0){
        if(turno){
            n-=gcd(a,n);
            turno = false;
        }else{
            n-=gcd(b,n);
            turno = true;
        }
    }
    if(turno){
        printf("0");
    }else{
        printf("1");
    }
    return 0;
}