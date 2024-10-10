//双链表结构定义
typedef struct DNode{
  int data;
  struct DNode *next,*prior;//前驱指针和后继指针
}DNode,*dLinkList;
//插入
s->next=p->next;
p->next->prior=s;
s->prior=p;
p->next=s;

//删除
p->next=q->next;
q-next->prior=p;
free(q);
//循环链表操作和单链表和双链表类似，只是单链表中最后一节点指向头节点L；双链表中头节点的前驱节点指向后一节点。
