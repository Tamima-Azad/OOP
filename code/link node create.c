#include<stdio.h>
struct link
{
    int data;
    struct link*next;
};
struct link *p=0,*h=0,*q=0;
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            p=(struct link*)malloc(sizeof(struct link*));
        scanf("%d",&p->data);
    if(h==0){ h=p; }
    else {
        q->next=p;
    }
    q=p;
    }
    q->next=0;
    p=h;
    for(i=0;i<n;i++){
        if(p==0) break;
        printf("\n %d %d %d",p,p->data,p->next);
        p=p->next;
    }
}
