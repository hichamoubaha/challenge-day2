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
  for(i=0;i<n;i++)
  {
      if(t[i]%2==0){
          printf("%d\t",t[i]);
      }
  }




return 0;
}
