// 1-2+3-4+5- .... n

#include <stdio.h>
int main(){
  int n,s=0;
  scanf("%d",&n);
  for(int i=0; i<=n; i++){
    if(i&1){
      s=s+i;
    }
    else s=s-i;
  }
  printf("%d\n",s);
    
  return 0;
}
