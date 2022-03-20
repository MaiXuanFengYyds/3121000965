//双向链表
#include <stdio.h>
#include <stdlib.h> 
 typedef struct DuLNode{
 	Elemtype  data;
 	struct DuLNode *prior,*next;
 }DuLNode,*DuLinkList;
 //创建双向链表 
pElem createList()
{
	pElem headNode = (pElem*)malloc(sizeof(eElem));
	headNode->next = headNode->front = NULL;
    return headNode; 
}
 
 //双向链表的插入
 void Listlnsert_DuL(DuLinkList&L,lnt i ,ElemType e)//在双向链表L中第i位前插入元素e 
 {
 	if(p=GetElemP_DuL(L,i))  ;
 	{
	 s=new DuLNode;
 	s->data = e;
 	s->prior=p->prior;
 	p->prior->next = s;
 	s->next = p;
 	p->prior = s;
 	return ;
    }
 }
 //双向链表的删除 
 void ListDelete_DuL(DuLink &L,int i，ElemType e)//删除链表L中第i个元素 
 {
 	if(p=GetElemP_DuL(L,i))
 	e = p->data;
 	p->prior->next = p->next;
 	p->next->prior = p->prior;
 	return;
}
int main()
{
	pElem List = createList();
	Listlnsert_DuL(List, 1 , 2);
	ListDelete_DuL(List, 1 , 2);
	return;
}
