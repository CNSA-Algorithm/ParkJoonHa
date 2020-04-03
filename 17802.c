#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i, j, temp;
  int n, x, r, order;

  scanf("%d %d", &n, &x);

  if(x < pow(2, n-1)){
    printf("impossible");
    return 0;
  }

  order = (int)(log(x)/log(2));
  r = x - pow(2, order);

  printf("%d\n", x);
  for(i = 1; i<n; i++){
    temp = pow(2, --order);
    printf("%d ",temp+r);
    for(j = 1; j<=i; j++) printf("%d ", temp);
    printf("\n");
  }

  return 0;
}
