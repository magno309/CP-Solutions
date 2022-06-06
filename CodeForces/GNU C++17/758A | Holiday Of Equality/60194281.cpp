#include <cstdio>
 
int main(){
 int n,arr[1000005], suma=0, m=0;
 scanf("%d", &n);
 for(int i=0;i<n;i++){
  scanf("%d", &arr[i]);
  if(arr[i]>m){
   m=arr[i];
  }
 }
 for(int i=0;i<n;i++){
  suma+=m-arr[i];
 } 
 printf("%d", suma);
 return 0;
}
 