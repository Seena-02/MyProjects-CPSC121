#ifndef LIST_H
#define LIST_H

/*#include <iostream>
#include <iomanip>
using namespace std;
*/
class List {
private:
  typedef struct node {
    int data;
    node* next;
  }* nodePtr;

  /*  struct node {
      int data;
      node* next;
    };
    typedef struct node* nodePtr;*/

    nodePtr head;
    nodePtr curr;
    nodePtr temp;
public:
  List();
  void AddNode(int addData);
  void DeleteNode(int delData);
  void PrintList();
  //void DeleteList(nodePtr head);
  ~List(){
          node *next;
          while(head != NULL){
              next = head->next;
              delete head;
              head = next;
          }
      }
};
#endif //LIST_H
