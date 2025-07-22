#include <stdio.h>

#include <stdlib.h>

struct node {
  int id;
  int priority;
  struct node * next;
};

/*
   create_node : Create a new struct node e, with given id and priority as val.
   Return a pointer to e.
*/
 
struct node *create_node(int id, int val){
	struct node *temp;
	temp = calloc(1,sizeof(struct node));
	temp -> id=id;	
	temp ->priority=val;
	return temp;
}
/*
   append : Append the given node e, to the start of the list list.
   Return the head of the list, which is now e.
*/

struct node *append(struct node * list, struct node * e) {
	e->next = list;
	list = e;
	return list;
   
}

/*
   search : Search for a node e in list, with given id.
   Return Return a pointer to e, if found. Return NULL otherwise.
*/
struct node *search(struct node * list, int id, int val) {
    struct node *curr=list;
    while(curr!=NULL && curr->id!=id)
    	curr = curr->next;
    return curr;
}

/*
   change_priority : Change priority of element with given id (if found) to val.
*/

void change_priority(struct node *list, int id, int val) {	
	struct node *s= search(list,id,val);  
    if(s!=NULL)
      s -> priority=val;
	
      
    
}

/*
   find_priority : Searches for an element with given id.
   Returns its priority if found, -1 otherwise.
*/
int find_priority(struct node *list, int id,int val) {
  struct node *e = search(list,id,val);
  if (e != NULL)
    return e ->priority;
  return -1;
}

int main() {
  char op;
  int id, val;
  struct node *list = NULL;

  int flag = 1;
  do {
    scanf("%c ", & op);
    switch (op) {
    case 'A':
      scanf("%d %d", & id, & val);
      list = append(list, create_node(id, val));
      break;
    case 'S':
      scanf("%d", & id);
      printf("%d %d\n", id, find_priority(list, id,val));
      break;
    case 'C':
      scanf("%d %d", & id, & val);
      change_priority(list, id, val);
      break;
    case 'E':
      flag = 0;
    }
  } while (flag == 1);
  return 0;
}
/*
Linked List Operations

In this question, a  linked list is partially implemented where each element in the linked list
is a structure of the following format:

struct node{
	int id;
	int priority;
	struct node *next;
}; 

The field priority is a positive integer, which denotes the priority of an element inside the list.

You have to complete the C code for performing the following operations in the linked list:
Create and return a node e with given id and value val
struct node * create_node(int id, int val);

Add an node e to the beginning of the list. Return the new list.
struct node * append(struct node * list, struct node * e);

Search for a node e with id inside the list. Return a pointer to e  if found, else return NULL
struct node * search(struct node * list, int id); 

Change the value of an element with given id (if found), in the list to the new value val. 
void change_priority(struct node * list, int id, int val) ;

Note: The code for manipulating the input as well as output is given to you. You only have to write code for the incomplete functions.

Input
-------
A set of lines, each lines containing a character representing the operation and its inputs.

The operation can be one of the following:
A <id> <val>
Add an node with id and val to the list, at the start of the list.

C <id> <val>
Change the priority field of the element with id to val.
If an element with this id is not found, do nothing.
 
S <id>
If an element with the id is in the list print the id and the priority and a newline. 
Else, print the id and -1 and a newline.

E
End of input, exit from the program
Output
---------
The output of search queries.

Sample input
-----------------
A 1 10
A 2 20
S 2
S 3
C 2 30
S 2
E

Sample Output
---------------------

2 20
3 -1
2 30

Explanation
---------------

The list is initially empty

Add an element 1 with value 10

list : (1,10) -> NULL

Add an element 2 with value 20

list : (2,20) -> (1,10) -> NULL

Search for element with id 2, print 

2 20

Search for element with id 3, print 

3 -1

Change priority of 2 to 30

list : (2,30) -> (1,10) -> NULL

Search for element with id 2, print 

2 30

End of input
*\

