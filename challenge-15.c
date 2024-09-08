// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
  int n,i,j,m;
  printf("entrer le nombre d element\n");
  scanf("%d",&n);
  int t[n];
  for(i=0;i<n;i++){
  printf("t[%d]  : \t",i);
  scanf("%d",&t[i]);}
  printf("entrer le nombre d ellement");
  scanf("%d",&m);
  int s[m];
  for(i=0;i<n;i++){
      printf("s[%d]  : \t",i);
      scanf("%d",&s[i]);}
     int tf[n+m];
     for(i=0;i<n;i++)
     {
         tf[i]=t[i];}
         for(j=0;j<m;j++){
             tf[i+j]=s[j];
         }
         printf("tableau f : \n");
         for(i=0;i<n+m;i++){
             printf("%d",tf[i]);

         }


return 0;
}
