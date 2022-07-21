#include<stdio.h>

#define MAX_VALS 15

typedef struct {
      int top;
      int data[MAX_VALS];
} stack;

void push( stack *s, int value ) {
      if ( s->top < MAX_VALS ) {
            s->data[s->top] = value;
            s->top += 1;
      } else {
            printf( "Stack is full\n" );
      }
}

int pop( stack *s ) {
      if ( s->top == 0 ) {
            printf( "Stack is empty\n" );
            return -1;
      } else {
            s->top -= 1;
            return s->data[s->top];
      }
}

int main() {
      stack new_stack;
      int value;

      new_stack.top = 0;

      push( &new_stack, 5 );
      push( &new_stack, 10 );
      push( &new_stack, 15 );
      push( &new_stack, 20 );
      push( &new_stack, 25 );

      value = pop( &new_stack );
      printf( "%d\n", value );

      value = pop( &new_stack );
      printf( "%d\n", value );

      value = pop( &new_stack );
      printf( "%d\n", value );

      value = pop( &new_stack );
      printf( "%d\n", value );

      value = pop( &new_stack );
      printf( "%d\n", value );

      return 0;
}
