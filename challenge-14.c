// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
  int n,i,som=0,moy;
  printf("entrer le nombre d element\n");
  scanf("%d",&n);
  int t[n];
  for(i=0;i<n;i++){
  printf("t[%d]  : \t",i);
  scanf("%d",&t[i]);}
  for(i=0;i<n;i++){
      som=som+t[i];
  }
  moy=som/n;
  printf("la moyenne de ellements de tableau = %d",moy);



return 0;
}
