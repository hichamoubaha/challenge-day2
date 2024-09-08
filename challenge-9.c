#include <stdio.h>
#include <string.h>
int main() {
  int n,i;
  printf("entrer le nobre delement\n");
  scanf("%d",&n);
  int t[n];
  for(i=0;i<n;i++){
  printf("t[%d]  : \t",i);
  scanf("%d",&t[i]);}
  int rch;
  int trouver=0;
  printf("entrer l element\n");
  scanf("%d",&rch);
  for(i=0;i<n;i++){
  if(t[i]==rch){
      trouver=1;
      break;}}
if (trouver==1)
 printf(" l element %d existe\n",rch);
 else if (trouver==0)
 printf(" non");



return 0;
}
