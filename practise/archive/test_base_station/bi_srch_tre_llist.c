/*  Goal: The program takes an array of elements and creates a binary search
tree based on them. 
author: Surya Teja Paruchuri
Date: 06/16/2016.
*/

#include<stdio.h>
#include<stdlib.h>

// bst_node definition
typedef struct NODE{
int data,count;
NODE *l_child,*r_child,*parent;
} ;

//bst_root definition
typedef struct ROOT{
int count;
NODE *bst_root;
} ;



/* make_root function dclaration:
returns a pointer to root node if enough memory is available */

(ROOT *) make_root(void){
ROOT *temp;
temp = (ROOT*)malloc(sizeof(ROOT));
if(temp==NULL){
printf("Not enough space for creating root node. Exiting\n");fflush(stdout);
exit(1);
}
temp->count = 0;
temp->bst_root = NULL;
return temp;
}// end of make_root ;


/*insert_root function definition:
inserts the very first node into the BST; returns 0 if inserted 
else returns 0 */

int insert_root(ROOT *a_root, int a_data){
NODE*temp = (NODE*)malloc(sizeof(NODE));
if(temp==NULL){
printf("Not enough  memory to create additional node\n"); fflush(stdout);
}
temp->data = a_data;
temp->count = 1;
temp->l_child = NULL;
temp->r_child = NULL;
temp->parent = NULL;
if(a_root->bst_root == NULL){
printf("No root node.Creating the root node\n");fflush(stdout);
a_root->bst_root = temp;
(a_root->count)++;
return 0;
}
else {
printf("Incorrect call: BST already has nodes \n");fflush(stdout);
return 1;
}
}// end of insert_root ;

/*insert_node function definition:
inserts the number in the BST according to it's value. If the value is aleady present the increment the count. Returns 0 if succesful else returns 1 */

int insert_node(NODE *a_node, int a_data){
int r_flag = 0;
if(a_node == NULL){
printf("Error: Ref to node is Null\n");fflush(stdout);
return 1;
}
NODE *tmp_ptr1 = a_node;
if (tmp_ptr1->data == a_data){
(tmp_ptr1->count)++
return r_flag;
}
else if(tmp_ptr1->data > a_data){
 if (tmp_ptr1->l_child == NULL){
  // insert the child node here.
  NODE tmp_node = (NODE*)malloc(sizeof(NODE));
  if(tmp_node == NULL){
   printf("Not enough memory to create a new node\n");fflush(stdout);
  }
  tmp_node->data = a_data;
  tmp_node->count = 1;
  tmp_node->l_child = NULL;
  tmp_node->r_child = NULL;
  tmp_node->parent = tmp_ptr1;
  tmp_ptr1->l_child = tmp_node;
 return r_flag;
 }
 else {
  insert_node(tmp_ptr1->l_child,a_data);
 }
}
else if (tmp_ptr1->data < a_data){
 if(tmp_ptr1->r_child == NULL){
  // insert the child node here.
  NODE tmp_node = (NODE*)malloc(sizeof(NODE));
  if(tmp_node == NULL){
   printf("Not enough memory to create a new node\n");fflush(stdout);
  }
  tmp_node->data = a_data;
  tmp_node->count = 1;
  tmp_node->l_child = NULL;
  tmp_node->r_child = NULL;
  tmp_node->parent = tmp_ptr1;
  tmp_ptr1->r_child = tmp_node;
  return r_flag;
 }
 else {
  insert_node(tmp_ptr1->r_child,a_data);
 }
}
return 0;
}// end of insert_node ;



/*display function definition:
This function dislpays all the nodes of a BST in "inorder". Thus we get all the
numbers in the BST in ascending order. */

void inoreder_display_bst(NODE *a_node){
NODE tmp_ptr = a_node;
if(tmp_ptr->l_child!=NULL){  inorder_display_bst(tmp_ptr->l_child); }
else if(tmp_ptr->l_child == NULL){
for (int i=0;i<tmp_ptr->count;i++){
printf("%d\t",tmp_ptr->data);fflush(stdout);
}
}
if(tmp_ptr->r_child !=NULL){ inorder_display_bst(tmp_ptr->r_child); }
return;
} // end of display;



int main(void){

int size=0,ins_flag=0;
printf("Enter the size of the array\n"); fflush(stdout);
scanf("%d",&size);
int array[size];
for(int i=0;i<size;i++) scanf("%d",&array[i]);
for(int i=0;i<size;i++){
printf("%dth element is %d\n",array[i]);fflush(stdout);
}

// make bst_root
ROOT *r;
r = make_root();

//insert the first element using the insert_root
ins_flag = insert_root(r, array[0]);
if(ins_flag){
printf("Error: unable to insert first node \n");fflush(stdout);
}

for(int i=1;i<size;i++){
ins_flag = insert()
if(ins_flag){
printf("Error: unable to insert %dth node \n",i);fflush(stdout);
}
}

// display the bst
if(r->count != 0){
inrorder_display_bst(r->bst_root);
}
return 0;
}
