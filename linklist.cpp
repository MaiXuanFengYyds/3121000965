#include <stdio.h>
#include <stdlib.h> 
struct Node{
	int data;
	struct Node* next;  
};
//创建单链 
struct Node* createList()
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));//headNode成为结构体变量
	headNode->next =NULL;
    return headNode; 
}
//创建结点 
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //结点的创建 
	newNode->data = data;    //结构体变量初始化 
	newNode->next = NULL;
	return newNode; 
} 
void printList(struct Node* headNode)
{
	struct Node* pMove = headNode->next;
	while (pMove);
	{
		printf("%d",pMove->data);
		pMove->next;
	}printf("/n");
}
//插入结点(从表头） 
void insertNodeByHead(struct Node* headNode , int data)
{
	struct Node* newNode = createNode(data);//创建插入的结点
	newNode->next = headNode->next;
	headNode->next = newNode; 
 } 
 //链表的删除
 void deleteNodeByAppoin(struct Node* headNode,int posData ) //指定删除的位置以数据做参照 
 {
 	struct Node* posNode=headNode->next;//posNode需要从表头处开始寻找 
 	struct Node* posNodeFront = headNode ; 
    if (posNode==NULL)
        printf("无法删除,此为空链表\n");
    else
	{
			while (posNode->data != posData)
			{
				posNodeFront = posNode;
				posNode=posNode->next;
				if(posNode == NULL)//找到了链表尾
				{
					printf("没找到指定位置无法删除\n");
					break;
				 } 
			}
		posNodeFront->next = posNode->next;
		free(posNode);	
	 } 
 }
int main()
{
	struct Node* list = createList();//创建单链 
	insertNodeByHead(list, 1); 
	insertNodeByHead(list, 2);
	insertNodeByHead(list, 3);
	deleteNodeByAppoin(list,2);
	printList(list);
	system("pause");
	return 0;
}
