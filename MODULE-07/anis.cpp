#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insertattail(node *&head,node *&tail,int v)
{
    node *newnode=new node(v);
    while(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;

}
void print(node *head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int  main()
{
    node *head=NULL;
    node *tail=NULL;
    cout<<"enter the value :"<<endl;
    int v;
    while(true)
 {   
    cin>>v;
    if(v==-1)
    {
     break;
    }
    insertattail(head,tail,v);
 }
 print(head);
 return 0;
}