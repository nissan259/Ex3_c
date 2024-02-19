#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "StrList.h"


// Node & List Data Structures
typedef struct _node {
    char * _data;
    struct _node * _next;
} Node;


 typedef struct _StrList {
    Node* _head;
    size_t _size;
}StrList;

    StrList* StrList_alloc(){
    StrList* list=(StrList*) malloc(sizeof(StrList));
    if (list==NULL)
    {
        printf("eror\n");
        return
    }
    list->_head=NULL;
    list->_size=0;
    return list;
}
Node * Node_alloc(char data,Node* next)
{
    Node *p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
    {
        printf("eror\n");
        return NULL;
    }
    p->_data=data;
    p->_next=next;
}
void StrList_free(StrList* StrList)
{
    if(StrList==NULL)return;
    StrList * head=StrList->_head;
    StrList* p;
    while (head!=NULL)
    {
        p=head;
        head=head->_next;
        free(p._data);
        free(p);
    }
    free(StrList);   
}
size_t StrList_size(const StrList* StrList){
   size_t=0;
   if(StrList==NULL)
   {
    return 0;
   }
    StrList* head=StrList->_head
      while (head!=NULL)
    {
         size_t=size_t+1;
        head=head->_next;
    }
    return size_t;
}
void StrList_insertLast(StrList* StrLis,const char* data){
      	if (StrLis==NULL) {
          StrList* pp = StrList_alloc();
          Node*  p4 =Node_alloc(*data,NULL);
          StrLis ->_head =p4;
          StrLis->_size=1;
        }
        else{
	Node* p1= StrLis->_head;
	Node* p2;
	while(p1) {
		p2= p1;
		p1= p1->_next;
		
    }
    Node*  p4 =Node_alloc(*data,NULL);
    p2 ->_next =p4;
    StrLis->_size=StrLis->_size+1;
	}
}

void StrList_insertAt(StrList* StrList,
	const char* data,int index)
    {
        if (index>StrList->_size)
        {
            return;
        }
        
        if(index==0)
        {
          StrList* pp = StrList_alloc();
          Node*  p4 =Node_alloc(*data,NULL);
          pp._head=p4;
           pp->_head=StrList->_head;   
           StrList=pp->_head;
            StrLis->_size=StrLis->_size+1;
        }
         StrList *head=StrList;
        StrList *p=head._next;
        for (int i=0;i<index;i++)
        {
        p=p.next;
        head=head.next;
        }
        Node* new_node =Node_alloc(*data,NULL);
        head.next=new_node;
        new_node->_next=p;
         StrLis->_size=StrLis->_size+1;
    }
    char* StrList_firstData(const StrList* StrList)
{
    return StrList->_head->_data;
}
void StrList_print(const StrList* StrList);
{
       size_t=0;
   if(StrList==NULL)
   {
    printf("no story");
   }
    Node *head=StrList->_head
      while (head!=NULL)
    {
        printf("%s",head._data);
         head=head->_next;
    }    
}
void StrList_printAt(const StrList* Strlist,int index)
{
        Node *head=StrList->_head
    for(int i=0;i<index;i++)
    {
        head=head._next;
    }
    printf("%s",head._data);
}
int StrList_printLen(const StrList* Strlist);
{
     size_t=0;
   if(StrList==NULL)
   {
    return 0;
   }
    Node* head=StrList->_head
      while (head!=NULL)
    {
        size_t+=strlen(head._data);   
        head=head->_next;
    }
    return size_t;
}
int StrList_count(StrList* StrList, const char* data){
   size_t=0;
   if(StrList==NULL)
   {
    return 0;
   }
    Node* head=StrList->_head
      while (head!=NULL)
    {
         if((strcmp(head._data,data))
         {   
           size_t+=strlen(data); 
         }
        head=head->_next;
    }
    return size_t;
}
void StrList_remove(StrList* StrList, const char* data);
{
   if (StrList==NULL)
   {
    return;
   }
   Node *head=StrList._head;
    Node *temp=p1.next;
    whie(p1!=NULL)
    {
        if(strcmp(temp._data,data))
        {
            head=temp._next;
            temp=temp._next.next;
            continue;
        }
        head=head._next;
        temp=temp._nextt;
    }
}
void StrList_removeAt(StrList* StrList, int index);
{
    if(StrList==NULL)
   {
    return;
   }
   int innerindex
    Node* head=StrList->_head
     Node* temp=StrList->_head._next;
      while (head!=NULL)
    {
        if (strcmp(temp._data,data)&&innerindex==index)
        {
          head=temp._next;
            temp=temp._next.next;
            continue;
        }
        head=head._next;
        temp=temp._nextt;
        innerindex++;
    }
}
int StrList_isEqual(const StrList* StrList1, const StrList* StrList2)
{
    Node* head1=StrList1->_head
    Node* head2=StrList2->_head
    while (head1!=NULL&&head2!=NULL)
    {
        if(!strcmp(head1._data,head2._data))
        {
        return 0;
        }
    }
    if (head1==NULL&&head2!=NULL)
    {
        return 0;
    }
     if (head2==NULL&&head1!=NULL)
    {
        return 0;
    }
    return 66;
}
StrList* StrList_clone(const StrList* StrList)
{
        if (StrList==null)
        {
            return;
        }

        StrList list=StrList_alloc();
        Node * temp=Node_alloc(StrList->_head->_data,NULL);
        list._head=temp;
        list._size=list._size+1;
        Node * head=StrList->_head;
        head=head->_next;
        while (head!=NULL)
        {
         Node *temp_loclal=Node_alloc(head->_data,NULL);
          temp._next=temp_loclal;
          temp=temp->_next;
          head=head->_next;
          free(temp_loclal->_data);
          free(temp_loclal);
        }

         free(temp->_data);
          free(temp);
        return &list;
}

void StrList_reverse(StrList* StrList) {
    Node *head = StrList->_head;
    char **arr = (char**)malloc(sizeof(char*) * StrList->_size);
    
    if (arr == NULL) {
        return; // Memory allocation failed
    }
    
    int i = 0;
    while (head != NULL) {
        arr[i] = (char*)malloc(strlen(head->_data) + 1); // Allocate memory for each string
        if (arr[i] == NULL) {
            // Handle memory allocation failure
            // You may need to free allocated memory here before returning
               for (j = 0; j<i; j++) {
        free(arr[j]);
        }
        free(arr);
            return;
        }
        
        strcpy(arr[i], head->_data);
        head = head->_next;
        i++;
    }
    
    Node *head1 = StrList->_head;
    i = StrList->_size - 1; // Start from the last index
    while (head1 != NULL) {
        strcpy(head1->_data, arr[i]);
        head1 = head1->_next;
        i--;
    }
    
    // Free the allocated memory for temporary array
    for (i = 0; i < StrList->_size; i++) {
        free(arr[i]);
    }
    free(arr);
}
int cmpfunc(const void *a, const void *b) {
    return strcmp(*(char**)a, *(char**)b);
}

void StrList_sort(StrList* StrList) {
    Node *head = StrList->_head;
    char **arr = (char**)malloc(sizeof(char*) * StrList->_size);
    if (arr == NULL) {
        return; // Memory allocation failed
    }
    
    int i = 0;
    while (head != NULL) {
        arr[i] = (char*)malloc(strlen(head->_data) + 1); // Allocate memory for each string
        if (arr[i] == NULL) {
            // Handle memory allocation failure
            // You may need to free allocated memory here before returning
            return;
        }
        strcpy(arr[i], head->_data);
        head = head->_next;
        i++;
    }
    if (StrList->_size != i) {
    // Handle the mismatch in size between the linked list and arr
    // Free allocated memory and return or take appropriate action
    return;
}
    
    qsort(arr, i, sizeof(char*), cmpfunc);
    
    Node *head1 = StrList->_head;
    i = StrList->_size-1;
    while (head1 != NULL) {
        strcpy(head1->_data, arr[i]);
        head1 = head1->_next;
        i--;
    }
    
    // Free the allocated memory for temporary array
    for (i = 0; i < StrList->_size; i++) {
        free(arr[i]);
    }
    free(arr);
}
 
int StrList_isSorted(StrList* StrList)
{

    StrList * head1=StrList_alloc();
    head1=StrList_clone(StrList);
    StrList_sort(head1);
    int i=StrList_isEqual(head1,StrList);
    StrList_free(head1);
    return i;
}

