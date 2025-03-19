#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* pre;
    Node (int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_normal(Node* head)
{
    Node* temp=head;
     cout << "L ->";
    while(temp!=NULL){
        cout<<" "<<temp->val;
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    Node* temp = tail;
    cout << "R ->";
    while(temp!=NULL)
    {
        cout<<" "<<temp->val;
        temp=temp->pre;
    }
    cout<< endl;
}
void insert_at_position(Node* &head,Node* &tail,int pos,int val){
    Node* newNode=new Node(val);

    if(pos==0){
        newNode->next=head;
        if(head!=NULL){
            head->pre=newNode;
        }
        else{
            tail=newNode;
        }
        head=newNode;
    }
    else{
        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if(temp==NULL || temp->next==NULL){
            if(temp==NULL){
                cout<< "Invalid" << endl;
            }
            temp->next = newNode;
            newNode->pre = temp;
            tail = newNode;
        }else{
        newNode->next = temp->next;
        newNode->pre = temp;
        temp->next->pre = newNode;
        temp->next = newNode;
        } 
    }   
}
int size(Node* head){
    Node* temp= head;
    int count = 0;
    while (temp!= NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    Node* head= NULL;
     Node* tail=NULL;
  int n;
  cin>>n;
  for(int i=0; i<n;i++)
  {
    int pos, val;
    cin>>pos>>val;
    if(pos<0||pos>size(head)){
    cout<<"Invalid"<<endl;
   }
   else{
    insert_at_position(head,tail,pos,val);
    print_normal(head);
    print_reverse(tail);
    }
  }
   return 0; 
}