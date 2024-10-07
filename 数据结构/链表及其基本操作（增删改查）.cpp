typedef struct LNode{//定义单链表
   elemtype data;
   struct Lnode *next;//指针域
}LNode,*LinkList;

void InitLinkList(LinkList &L){//带头结点初始化
   L=(LNode *)malloc(sizeof(Lnode));
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
   while(p->next!-NULL){
      p=p->next;
      len++;
   }
   return len;
}

LNode *GetElem(LinkList L,int i){//按位查找结点
/*正规写法
   LNode *p=L;
   int j=0;
   while(p!=NULL&&j<i){//这里已经判断了p为空或者i越界的条件
      p=p->next;
      j++;
   }
   return p;
*/
   if(i>Length(LinkList)||i<1) return NULL;//防止溢出
   LNode *p=L;
   int j=0;
   for(j=0;j<i;j++){
      p=p->next;
   }
   return p;//返回第i个节点
}

LNode *LOCATEElem(LinkList L,int e{//按值查找
   LNode *p=L->next;//带头结点
   while(p!=NULL&&p->data!=e){//找到值为e的节点或者未找到返回NULL
      p=p->next;
   }
   return p;
}
