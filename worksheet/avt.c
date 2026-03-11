#include <stdio.h>
#include <math.h>

double average(int *arr, int n) {
  // TODO: Implement this function
  // Hint: Be careful with integer division!
  double sum = 0;
  for (int i=0;i<n;i++)
    {
      sum += arr[i];
    }
  return sum/n; // Replace this
}

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    double avg1 = average(arr1, 5);
    printf("%f", avg1);
    //TEST_CHECK(avg1 >= 2.99 && avg1 <= 3.01);
    //TEST_MSG("Expected average([1,2,3,4,5]) = 3.0, got %f", avg1);
}