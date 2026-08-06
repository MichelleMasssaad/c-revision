#include <stdio.h>
#include <stdlib.h>

int main() {

  int nums[3][2] = {{1, 2}, {3, 4}, {5, 6}

  };

  printf("%d\n", nums[0][0]);

  int nums2[3][2];
  nums2[0][0] = 7;
  printf("%d\n", nums2[0][0]);
  //	printf("%d\n", nums2[0][1]);
  // unitialized ! but int nums[3][2]={0}; the whole array is filled with 0

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d", nums[i][j]);
    }
    printf("\n");
  }
  return 0;
}
