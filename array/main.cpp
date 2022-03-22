#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Stacketor.cpp"

using namespace std;

int main(){
  struct Stack* stack = createStack(50);

  push(stack, 10);
  push(stack, 15);
  push(stack, 20);

  cout << "\npopped from stack : " << pop(stack);
  cout << "\npopped from stack : " << pop(stack);
  cout << "\npopped from stack : " << pop(stack);

  return 0;
}
