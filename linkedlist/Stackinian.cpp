#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct StackNode{
  int data; //bisa diganti infotype
  struct StackNode* next;
};

struct StackNode* newNode(int data){
  struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));

  stackNode->data = data;
  stackNode->next = NULL;

  return stackNode;
}

int isEmpty(struct StackNode* root){
  return !root;
}

void push(struct StackNode** root, int data){
  struct StackNode* stackNode = newNode(data);
  stackNode->next = *root;
  *root = stackNode;

  cout << "pushed to stack : " << data << endl;
}

int pop(struct StackNode** root){
  if(isEmpty(*root)) return INT_MIN;

  struct StackNode* temp = *root;
  *root = (*root)->next;
  int popped = temp->data;
  free(temp);

  return popped;
}

//menghasilkan top element
int peek(struct StackNode* root){
  if(isEmpty(root)) return INT_MIN;

  return root->data;
}
