//˫������
#include <stdio.h>
#include <stdlib.h> 
 typedef struct DuLNode{
 	Elemtype  data;
 	struct DuLNode *prior,*next;
 }DuLNode,*DuLinkList;
 //����˫������ 
pElem createList()
{
	pElem headNode = (pElem*)malloc(sizeof(eElem));
	headNode->next = headNode->front = NULL;
    return headNode; 
}
 
 //˫������Ĳ���
 void Listlnsert_DuL(DuLinkList&L,lnt i ,ElemType e)//��˫������L�е�iλǰ����Ԫ��e 
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
 //˫�������ɾ�� 
 void ListDelete_DuL(DuLink &L,int i��ElemType e)//ɾ������L�е�i��Ԫ�� 
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
