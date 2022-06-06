#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,dulces[100]={0}, naranjas[100]={0}, md=1e9,mo=1e9;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &dulces[i]);
            if(dulces[i]<md){
                md = dulces[i];
            }
        }
        for(int i=0;i<n;i++){
            scanf("%d", &naranjas[i]);
            if(naranjas[i]<mo){
                mo = naranjas[i];
            }
        }
        long long mov = 0;
        for(int i=0;i<n;i++){
            if(dulces[i] > md and naranjas[i] > mo){
                int tmp;
                if(dulces[i] - md < naranjas[i] - mo){
                    tmp = dulces[i] - md;
                    mov += tmp;
                    dulces[i] -= tmp;
                    naranjas[i] -= tmp;
                }else{
                    tmp = naranjas[i] - mo;
                    mov += tmp;
                    dulces[i] -= tmp;
                    naranjas[i] -= tmp;
                }
            }
            if(dulces[i] > md){
                mov += dulces[i] - md;
                dulces[i]-=dulces[i] - md;
            }
            if(naranjas[i] > mo){
                mov += naranjas[i] - mo;
                naranjas[i] -= naranjas[i] - mo;
            }
        }
        printf("%lld\n", mov);
    }
    return 0;
}