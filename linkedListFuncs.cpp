#include <iostream>
#include <string>
#include <sstream> // for ostringstream
#include <cassert>

#include "linkedList.h"
#include "linkedListFuncs.h"


// Pre-condition:'a' is a valid array with 
// zero or more elements, specified by 'size'
// Post-condition: A linked-list with 'size' number of nodes
// If size is zero, a valid 'empty' list is returned
LinkedList * arrayToLinkedList(int *a, int size) {

    return NULL;
  
}


// free up every node on this linked list
// nice clean code thanks to @sashavolv2 (on Twitter) #woot
// Precondition: A valid linked-list on heap memory
// Postcondition: Every element of the linked-list is deleted
// The list structure is also deleted

void freeLinkedList(LinkedList * list) {

}

// Precondition: A valid linked-list on heap memory, which
// may be possibly empty
// Postcondition: Returns a string representation of the elements
// of the linked-list

std::string linkedListToString(LinkedList *list) {
  
  std::string result="";
  if(list == NULL)
      return result;
  for (const Node *  p=list->head; p!=NULL; p=p->next) {
    result += "[" + intToString(p->data) + "]->";
  }
  result += "null";
  return result;
}

// Precondition: A valid linked-list that may possibly be empty
// and an integer value
// Postcondition: A new node with provided value is added to the 
// the end of the list. The head and tail pointers are appropriately 
// updated
void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer

  // TODO:
  // (1) Allocate a new node.  p will point to it.

  p = NULL; // THIS IS PLACE-HOLDER LINE OF CODE.  DELETE IT AND REPLACE IT.

  // (2) Set p's data field to the value passed in
  
  // (3) Set p's next field to NULL


  if (list->head == NULL) {

    // (4) Make both head and tail of this list point to p
    
    
  } else {

    // Add p at the end of the list.   

    // (5) The current node at the tail? Make it point to p instead of NULL

    // (6) Make the tail of the list be p now.

  }

}

// Precondition: A valid linked-list on the heap and an integer value
// Postcondition: A new node is created with provided value and is
// added to the start of the list. The head and tail pointers are 
// appropriately updated
void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  // Add code for this.  
  // HINTS:
  //  You will need to allocate a new Node.
  //  You will need two cases just as in addIntToEndOfList,
  //  one for when list->head is NULL and another for when it is not.
  // You need to consider how to make sure that list->head 
  //   so that it points to the new node that you allocated.  
  // And you will need to make sure that when you are done, 
  //   that if the new node is now the ONLY thing on the list, 
  //   that tail points to it also,
  //   and that the new node is pointing to NULL.
  // Otherwise, you'll need to be sure that when you are done
  //   the head points to the new node you added, and that
  //   the new node points to the node that *used* to be the head.
  // The order in which you do things matters.

}
// intToString converts an int to a string

std::string intToString(int i) {
// creates a stream like cout, cerr that writes to a string
  std::ostringstream oss; 
  oss << i;
  return oss.str(); // return the string result
}

// Precondition: A valid array 'a' with non-negative size
// Postcondition: A string representation of the elements of the array

std::string arrayToString(int a[], int size) {

  std::ostringstream oss;
  // fencepost problem; first element gets no comma in front
  oss << "{"; 

  if (size>0)
    oss << intToString(a[0]); 

  for (int i=1; i<size; i++) {
    oss << "," << intToString(a[i]);
  }
  oss << "}";

  return oss.str();
  
}

