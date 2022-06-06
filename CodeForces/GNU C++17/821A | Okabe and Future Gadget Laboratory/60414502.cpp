#include <cstdio>
 
int n, lab[101][101];
 
bool verificar(int posi, int posj){
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(lab[posi][j] + lab[i][posj] == lab[posi][posj]){
    return true;
   }
  }
 }
 return false;
}
 
int main(){
 scanf("%d", &n);
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   scanf("%d", &lab[i][j]);
  }
 }
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(lab[i][j] != 1){
    if(!verificar(i,j)){
     //printf("%d %d\n", i, j);
     printf("No");
     return 0;
    }
   }
  }
 }
 printf("Yes");
 return 0;
}