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
    return 0;
   }
   int innerindex
    Node* head=StrList->_head
        Node* temp=StrList->_head._next;
      while (head!=NULL)
    {
        if (strcmp(temp._data,data)&&innerindex==index)
        {
        temp=temp._next;
        head._next=&temp;
        }
        head=head->_next;
        temp=head->_next;
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
    
}

