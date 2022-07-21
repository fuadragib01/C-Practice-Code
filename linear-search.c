#include<stdio.h>

int linear_search( int a[], int n, int x ) {
      int i;

      for ( i = 0; i < n; i++ ) {
            if ( a[i] == x ) {
                  return i;
            }
      }
      i = -1;
      return i;
}
int main() {
      int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
      int x = 1;
      int n = 9;
      if ( -1 == linear_search( nums, n, x ) ) {
            printf( "Number not found\n" );
      } else {
            printf( "Number found\n" );
      }
      return 0;
}
