#include <stdio.h>

void sort(int[], int len);

int main() {
  int list[] = {45, 21, 86, 5, 45, 89, 30, 74};
  /*
  21 45 86 
  i = 3
  key = nums[3] = 5
  k = 2
  while :
    5 < 86 -> nums[3] = 86; 
    k = 2;
    5 < 45 -> nums[2] = 45;
    k = 1;
    5 < 21 -> nums[1] = 21;
    k = 0;
    nums[0] = 

  */
  insertionSort(list, 8);
  
  return 0;
}

void insertionSort(int nums[], int len) {
  for (int i = 1; i < len; i++) {
    int key = nums[i];
    int k = i - 1;
    while (k >= 0 && key < nums[k]) {
      nums[k + 1] = nums[k];
      k--;     
    }
    nums[k + 1] = key;
  }
  
  for (int j = 0; j < len; j++) {
    printf("%d ", nums[j]);
  }
}