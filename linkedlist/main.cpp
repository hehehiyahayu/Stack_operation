//Referensi : GeeksforGeeks
//Tanggal pembuatan : 17/03/2022

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Stackinian.cpp"

using namespace std;

int main(){
  struct StackNode* root = NULL;

  push(&root, 10);
  push(&root, 20);
  push(&root, 30);

  cout << "\npopped from stack : " << pop(&root) << endl;

  cout << "\nTop element is : " << peek(root) << endl;

  return 0;
}
