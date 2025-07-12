#include <stdio.h>
void binary_search(int arr[9], int ans, int size) {
  int low, high, mid, count = 0;
  low = 0;
  high = size;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] == ans) {
      printf("Answer found %d at %d many turns\n", ans, count);
      break;
    } else if (arr[mid] <= ans) {
      low = mid + 1;  //
      count++;
    } else {
      high = mid - 1;
      count++;
    }
  }
}
int main() {
  int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int ans = 9;
  int size = (sizeof(arr) / sizeof(arr[0]));
  binary_search(arr, ans, size);
}
