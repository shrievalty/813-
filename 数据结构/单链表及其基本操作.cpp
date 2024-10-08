typedef struct LNode{//定义单链表
   elemtype data;
   struct LNode *next;//指针域
}LNode,*LinkList;

void InitLinkList(LinkList &L){//带头结点初始化,头节点和用来储存链表长度
   L=(LNode *)malloc(sizeof(LNode));
   L->next=NULL;
   return true;
   /*不带头节点
   L=NULL;
   return true;
   */
}
int Length(LinkList L){//求链表长度
   int len=0;
   LNode *p=L;
   while(p->next!=NULL){
      p=p->next;
      len++;
   }
   return len;
}

LNode *GetElem(LinkList L,int i){//按位查找结点
//正规写法
   LNode *p=L;
   int j=0;
   while(p!=NULL&&j<i){//这里已经判断了p为空或者i越界的条件
      p=p->next;
      j++;
   }
   return p;

}

LNode *LOCATEElem(LinkList L,int e){//按值查找
   LNode *p=L->next;//带头结点
   while(p!=NULL&&p->data!=e){//找到值为e的节点或者未找到返回NULL
      p=p->next;
   }
   return p;
}

//在第i个位置插入新节点，值为e
bool ListInsert(LinkList &L,int i,Elem e){//带头节点
   LNode *p=L;
   int j=0;
   while(p!=NULL&&j<i-1){//找到插入位的上一个节点
      p=p->next;
      j++;
   }
   if(p==NULL)return false;//判断i是否合法
   LNode *s=(LNode *)malloc(sizeof(LNode)）;//创建并插入新节点，代码顺序不能错
   s->data=e;
   s->next=p->next;
   p->next=s;
   return true;
}
bool DeletList(LinkList &L,int i){
   LNode *p=L;
   int j=0;
   while(p!=NULL&&j<i-1){//找到删除节点的上一个节点
      p=p->next;
      j++;
   }
   if(p==NULL||p->next==NULL)return false;//判断i是否合法
   LNode *q=p->next;//令q指向被删除元素
   p->next=p->next->next;//p->next=q->next;断开q节点
   free(q);//释放空间
   return true;
}

//头插法建立链表
LinkList HeadInsert(LinkList &L}{
   LNode *s;
   int x;
   L=(LNode *)malloc(sizeof(LNode));//建立头节点，可以直接调用InitLinkList();
   L->next=NULL;
   scanf_s("%d",&x);//输入节点的值，在VS中scanf只能用scanf_s实现;
   while(x!=999){//999结束
      s=(LNode *)malloc(sizeof(LNode));
      s->data=x;
      s->next=L->next;
      L->next=s;
      scanf_s("%d",&x);//下一节点值
   }
   return L;
}
//尾插法
LinkList tailInsert(LinkList &L}{
   LNode *s;
   int x;
   L=(LNode *)malloc(sizeof(LNode));//建立头节点，可以直接调用InitLinkList();
   L->next=NULL;
   LNode *p=(LNode *)malloc(sizeof(LNode));
   p->next=//or p=L;
   scanf_s("%d",&x);//输入节点的值，在VS中scanf只能用scanf_s实现;
   while(x!=999){//999结束
      s=(LNode *)malloc(sizeof(LNode));
      s->data=x;
      p->next=s;
      p=s;
      scanf_s("%d",&x);//下一节点值
   }
   p->next=NULL;//个人认为此句应该在循环内
   return L;
   
}



