#include<cstdio>
 
int main(){
 int n,k,arr[2005],c=0;
 scanf("%d%d", &n, &k);
 for(int i=0;i<n;i++){
  scanf("%d", &arr[i]);
  if(5 - arr[i] >= k){
   c++;
  }
 }
 printf("%d", c/3);
 return 0;
}
 