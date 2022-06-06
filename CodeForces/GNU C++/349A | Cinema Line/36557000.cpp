#include<cstdio>
long long billetes[5];
int main(){
    long long n, v, t=0, c;
    scanf("%I64d", &n);
    for(long long i=0;i<n;i++){
        scanf("%I64d", &v);
        if(v==25){
            billetes[0]++;
        }
        if(v==50){
            if(billetes[0]>0){
                billetes[0]--;
                billetes[1]++;
            }
            else{
                printf("NO");
                return 0;
            }
        }
        if(v==100){
            if(billetes[1]>0 & billetes[0]>0){
                billetes[0]--;
                billetes[1]--;
                billetes[2]++;
            }else if(billetes[0]>=3){
                billetes[0]-=3;
                billetes[2];
            }else{
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}