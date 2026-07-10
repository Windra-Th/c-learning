#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
//在选定节点p后面插入一个新的节点
void insert_after(struct Node *p,int x) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->data = x;
  new_node->next = p->next;
  p->next = new_node;
}
//在选定节点p后面删去一个旧的节点
void delete_after(struct Node *p) {
  if(p == NULL || p->next == NULL) {
    return;
  }
  struct Node *to_delete = p->next;//remember
  p->next = p->next->next;//skip
  free(to_delete);//delete
}


int main() {
  struct Node *head = NULL;
//设置节点1
  head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 10;
  head->next = NULL;
//添加节点
  insert_after(head,30);
  insert_after(head,20);
//删除节点
  delete_after(head);
//遍历打印链表
  printf("链表内容：\n");
  struct Node *p = head;
  while (p != NULL) {
    printf("  [%d] → ", p->data);
    p = p->next;
  }
  printf("NULL\n");
//释放内存(遍历释放)
  p = head;
  while (p != NULL) {
    struct Node *next = p->next;
    free(p);
    p = next;
  }
  return 0;
}
