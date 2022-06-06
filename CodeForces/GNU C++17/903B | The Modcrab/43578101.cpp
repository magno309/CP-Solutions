#include<stdio.h>
int acciones[1000001],fases;
void impAcciones(){
    for(int i=0;i<fases;i++){
        if(acciones[i]==0){
            printf("STRIKE\n");
        }else{
            printf("HEAL\n");
        }
    }
}
int main(){
    int vh,va,vp;
    int mh,ma;
    scanf("%d%d%d", &vh,&va,&vp);
    scanf("%d%d", &mh,&ma);
    while(true){
        //printf("m = %d - v = %d\n", mh, vh);
        if(vh>ma or va>=mh){
            mh-=va;
            acciones[fases] = 0; //Strike
            fases++;
            if(mh<=0){
                printf("%d\n", fases);
                impAcciones();
                break;
            }
        }else{
            vh+=vp;
            acciones[fases] = 1;
            fases++;
        }
        vh-=ma;
    }
    return 0;
}