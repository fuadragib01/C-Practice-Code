#include<stdio.h>
// finction to search a value
int binary_search( int a[], int n, int x ) {
      int left, right, mid;
      left = 0;
      right = n - 1;

      while ( left <= right ) {
            mid = ( left + right ) / 2;
            if ( a[mid] == x ) {
                  return mid;
            }
            if ( a[mid] < x ) {
                  left = mid + 1;
            } else {
                  right = mid -1;
            }
      }
      return -1;
}
int main() {
      int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
      int x = 10;
      int n = 9;
      if ( -1 == binary_search( nums, n, x ) ) {
            printf( "Number not found\n" );
      } else {
            printf( "Number found\n" );
      }
      return 0;
}
