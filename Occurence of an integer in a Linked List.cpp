#include<map>
int count(struct node* head, int search_for)
{
    node *temp=head;
    map<int,int>m;
    while(temp!=NULL){
        m[temp->data]++;
        temp=temp->next;
    }
    return m[search_for];
