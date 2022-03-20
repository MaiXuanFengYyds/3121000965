#include <stdio.h>
#include <stdlib.h> 
struct Node{
	int data;
	struct Node* next;  
};
//�������� 
struct Node* createList()
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));//headNode��Ϊ�ṹ�����
	headNode->next =NULL;
    return headNode; 
}
//������� 
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //���Ĵ��� 
	newNode->data = data;    //�ṹ�������ʼ�� 
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
//������(�ӱ�ͷ�� 
void insertNodeByHead(struct Node* headNode , int data)
{
	struct Node* newNode = createNode(data);//��������Ľ��
	newNode->next = headNode->next;
	headNode->next = newNode; 
 } 
 //�����ɾ��
 void deleteNodeByAppoin(struct Node* headNode,int posData ) //ָ��ɾ����λ�������������� 
 {
 	struct Node* posNode=headNode->next;//posNode��Ҫ�ӱ�ͷ����ʼѰ�� 
 	struct Node* posNodeFront = headNode ; 
    if (posNode==NULL)
        printf("�޷�ɾ��,��Ϊ������\n");
    else
	{
			while (posNode->data != posData)
			{
				posNodeFront = posNode;
				posNode=posNode->next;
				if(posNode == NULL)//�ҵ�������β
				{
					printf("û�ҵ�ָ��λ���޷�ɾ��\n");
					break;
				 } 
			}
		posNodeFront->next = posNode->next;
		free(posNode);	
	 } 
 }
int main()
{
	struct Node* list = createList();//�������� 
	insertNodeByHead(list, 1); 
	insertNodeByHead(list, 2);
	insertNodeByHead(list, 3);
	deleteNodeByAppoin(list,2);
	printList(list);
	system("pause");
	return 0;
}
