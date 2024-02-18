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
    }
    retrun list;
}
void StrList_free(StrList* StrList)
{
    if(StrList==NULL)return;
    StrList* head=StrList->_head
    StrList* p;
    while (head!=NULL)
    {
        p=head;
        head=head->_next;
        free(p._data);
        free(p);
    }
    
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
void StrList_insertLast(StrList* StrList,const char* data){
    StrList* head=StrList->_head;
    if (StrList==NULL)
    {

    }
            StrList* list=(StrList*) malloc(sizeof(StrList));
            if(list==NULL)
            {

            }
         Node *temp=NULL
        temp.data=data;
        StrList->_head.data=temp;
    }
    
    while (head->_next.!=NULL)
    {
        head=head->_next; 
    }
    Node *temp=NULL
    temp.data=data;
    head->_next=temp 

void StrList_insertAt(StrList* StrList,
	const char* data,int index)
    {
  
       if (StrList==NULL)
    {
         StrList* list=(StrList*) malloc(sizeof(StrList));
        list.data=data;
        StrList->_head.data=list;
        return;
    }
        StrList* head=StrList->_head;
        for (size_t i = 0; i < index; i++)
        {
         head=head._next;   
        }
        *Node temp=NULL;
        temp.data=data;
        *Node first=NULL;
    }
    char* StrList_firstData(const StrList* StrList)
{
    return StrList._head;
}
void StrList_print(const StrList* StrList);
{
       size_t=0;
   if(StrList==NULL)
   {
    printf("no story");
   }
    StrList* head=StrList->_head
      while (head!=NULL)
    {
        printf("%s",head._data);
         head=head->_next;

    }    
}
int StrList_count(StrList* StrList, const char* data){
   size_t=0;
   if(StrList==NULL)
   {
    return 0;
   }
    StrList* head=StrList->_head
      while (head!=NULL)
    {
         if(head.data==data)
         {
           size_t+=size_t+strlen(data); 
         }
        head=head->_next;
    }
    return size_t;
}
void StrList_remove(StrList* StrList, const char* data);
{
      if(StrList==NULL)
   {
    return 0;
   }
    StrList* head=StrList->_head
        StrList* temp=StrList->_head._next;
      while (head!=NULL)
    {
        if (strcmp(temp._data,data))
        {
        temp=temp._next;
        head._next=&temp;
        }
        head=head->_next;
        temp=head->_next;
    }
}
void StrList_removeAt(StrList* StrList, int index);
{
         if(StrList==NULL)
   {
    return 0;
   }
   int innerindex
    StrList* head=StrList->_head
        StrList* temp=StrList->_head._next;
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
    StrList* head1=StrList1->_head
    StrList* head2=StrList2->_head
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

