#include <stdio.h>
#include <stdlib.h>
//配置struct
struct Node {
  int data;
  struct Node *next;
};
//插入节点
void insert_after(struct Node *p,int data) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  new_node->next = p->next;
  new_node->data = data;
  p->next = new_node;
}
//删除节点
void delete_after(struct Node *p) {
  if (p == NULL || p->next == NULL) {
    return;
  }
  struct Node *contain = p->next->next;
  free(p->next);
  p->next = contain;
}
//main
int main() {
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 10;
  insert_after(head,30);
  insert_after(head,20);
//删哪个？
  printf("删去哪个内容？");
  int refuze;
  scanf("%d",&refuze);
//排除第一个
  if (head->data == refuze) {
    struct Node *contain = head->next;
    free(head);
    head = contain;
  } else {
//递推
    struct Node *p = head;
    while (p->next != NULL && p->next->data != refuze) {
      p = p->next;
    }
    if (p->next == NULL) {
      printf("未找到\n");
    } else {
        delete_after(p);
    }
  }
//输出
  struct Node *show = head;
  while (show != NULL) {
    printf("%d  ",show->data);
    show = show->next;
  }
  return 0;
}
