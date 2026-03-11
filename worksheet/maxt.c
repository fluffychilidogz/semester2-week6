#include <stdio.h>

/**
 * Function 6: find_max
 *
 * Finds the maximum value in an array AND its index.
 * The maximum value is returned, and the index is stored
 * in the output parameter.
 *
 * @param arr   Pointer to the first element of the array
 * @param n     Number of elements in the array
 * @param index Pointer to store the index of the maximum (output parameter)
 * @return      The maximum value
 *
 * Example:
 *   int arr[] = {3, 7, 2, 9, 4};
 *   int idx;
 *   int max = find_max(arr, 5, &idx);
 *   // max == 9, idx == 3
 */
int find_max(int *arr, int n, int *index) {
  // TODO: Implement this function
  int max = -32767;
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
    int arr3[] = {3, 7, 2, 9, 4};
    int idx3;
    int max3 = find_max(arr3, 5, &idx3);
    printf("%d, %d\n",max3, idx3);
}