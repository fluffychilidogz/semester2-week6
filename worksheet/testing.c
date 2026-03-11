#include <stdio.h>
#include <math.h>

int find_max(int *arr, int n, int *index) {
  // TODO: Implement this function
  *index = 0;
  int max;
  for (int i=0;i<n;i++)
    {
      if (arr[i] > max)
      {
        max = arr[i];
        *index = i;
      }
    }
  return max; // Replace this
}

int main(void)
{
    int num[] = {1,2};
    int answer;
    int ind;
    answer = find_max(num, 2, &ind);
    printf("%d, %d", answer, ind);
}