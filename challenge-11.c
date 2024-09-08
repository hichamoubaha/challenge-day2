// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
  int n,i;
  printf("entrer le nombre d element\n");
  scanf("%d",&n);
  int t[n];
  for(i=0;i<n;i++){
  printf("t[%d]  : \t",i);
  scanf("%d",&t[i]);}
  int vr,nv,index=0;
  printf("entrer la valeur rechercher");
  scanf("%d",&vr);
  for(i=0;i<n;i++){
  if(t[i]==vr){
  index=i;
  printf("entrer la nouvelle valeur");
  scanf("%d",&nv);
  t[index]=nv;}}
  for(i=0;i<n;i++)
  printf("%d\t",t[i]);





return 0;
}
