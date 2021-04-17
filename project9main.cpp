#include <cstdlib>
#include <iostream>
#include "List.h"
using namespace std;

int main(){
  struct node* head = NULL;
  int addNum, removeNum;
  List myList;
  srand (time(NULL));
  cout << "We will traverse the list. Here is a linked list with 10 random nodes: " << endl;
  for(int i = 0 ; i < 10; i++){
    int n = (rand() % 100 + 1);
    myList.AddNode(n);
  }
  myList.PrintList();
  cout << endl;
  cout << "Now, add a integer node to the list: ";
  cin >> addNum;
  myList.AddNode(addNum);
  cout << "Here is the linked list with the added node: " << endl;
  myList.PrintList();
  cout << endl;
  cout << "Now, remove a integer node from the list: ";
  cin >> removeNum;
  myList.DeleteNode(removeNum);
  cout << "Here is the linked list with the removed node: " << endl;
  myList.PrintList();
  cout << endl;
  cout << "Now we will destory the linked List ";
  myList.~List();
  cout << endl;
  cout << "Linked List destroyed..." << endl;
  //compile with   g++ List.cpp project9main.cpp
  return 0;
}
