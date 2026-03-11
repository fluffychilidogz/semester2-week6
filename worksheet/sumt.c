#include <stdio.h>
#include <math.h>


int sum_array(int *arr, int n) {
  // TODO: Implement this function
  int sum = 0;
  for (int i=0;i<n;i++)
  {
    sum += arr[i];
  }
  return sum; // Replace this
}

  int main(void)
  {
    int arr1[] = {0, 0, 0, 0};
    int answer = sum_array(arr1,4);
    printf("%d\n",answer);
  }