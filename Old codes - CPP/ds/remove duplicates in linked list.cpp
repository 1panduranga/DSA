#include<iostream>
#include<queue>
#include<set>
using namespace std;
struct node{
  int data;
  node* link;
  node(int d):data(d),link(NULL){}
};
node* insert(node* head,int data)
{
 node *temp=new node(data);
 node *temp1=head;
  if(temp1==NULL)
  { 
    head=temp;
   return head;
  }
  while(temp1->link!=NULL)
  {
    temp1=temp1->link;
  }
  temp1->link=temp;
  return head;
}

void printlist(node* head){
  while(head!=NULL)
  {
    cout<<head->data<<endl;
    head=head->link;
}
}
node* remdup(node* head){
  node* temp=head;
  set<int> s;
  queue<int> q;
  while(temp!=NULL){
    int d=temp->data;
    if(s.find(d)==s.end())
    {
      s.insert(d);
      q.push(d);
    }
    temp=temp->link;
  }
  head=NULL;
    while(!q.empty())
    {
     head=insert(head,q.front());
      q.pop();
    }
    return head;
}


int main()
{
  //type your code here
  node*  head=NULL;
  int n;
  cin>>n;
  while(n>=0)
  { 
   head= insert(head,n);
    cin>>n;
  }
  cout<<"Linked list before removal of duplicates"<<endl;
  printlist(head);
  head=remdup(head);
  cout<<"Linked list after removal of duplicates"<<endl;
  printlist(head);
  return 0;
}
