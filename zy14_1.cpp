#include <iostream>
#include <cstdio>
using namespace std;
struct Node
{
    int content;
    Node *next;
};

Node *input()
{
    Node *head = NULL; 
    int x;
    cin >> x;
    while (x !=-1)
    {
        Node *p = new Node;
        p->content = x;
        p->next = head;
        head = p;
        cin >> x; 
    }
    return head;
}
void insert(Node *h, int n)
{
    if (h->next==NULL)
    {
        Node *p = new Node;
        p->content=n;
        p->next=NULL;
        h->next=p;
    }
    else
    {
        Node *p=new Node;
        p->content=n;
        p->next=h->next;
        h->next=p;
    }
    
}
bool find(Node *h, int n)
{
    while (h->next!=NULL)
    {
        if (h->next->content == n)
            return true;
        else
        {
            h=h->next;
        }
    }
    return false;
}
void print(Node *h)
{
    while (h->next!=NULL)
    {
        cout<<h->next->content<<' ';
        h=h->next;
    }
    cout<<endl;
}
Node *or1(Node *h1,Node *h2)
{
    Node *h3=new Node;
    h3->next=NULL;
    while(h1->next !=NULL)
    {
        insert(h3,h1->next->content);
        h1=h1->next;
    }
    while(h2->next !=NULL)
    {
        if (!find(h3,h2->next->content))
            insert(h3,h2->next->content);
        h2=h2->next;
    }
    return h3;
}
Node *and1(Node *h1,Node *h2)
{
    Node *h3=new Node;
    h3->next=NULL;
    while (h1->next!=NULL)
    {
        if (find(h2,h1->next->content))
            insert(h3,h1->next->content);
        h1=h1->next;
    }
    return h3;
}
Node *sub1(Node *h1,Node *h2)
{
    Node *h3=new Node;
    h3->next=NULL;
    while(h1->next!=NULL)
    {
        if (!find(h2,h1->next->content))
            insert(h3,h1->next->content);
        h1=h1->next;
    }
    return h3;
}

int main()
{
    int t;
    Node *h1 = new Node;
    h1->next=NULL;
    Node *h2 = new Node;
    h2->next=NULL;
    
    while (true)
    {
        cin>>t;
        if(t==-1)
            break;
        insert(h1,t);
        
    }
    while (true)
    {
        cin>>t;
        if(t==-1)
            break;
        insert(h2,t);
    }
    cout<<"SetA: ";
    print(h1);
    cout<<"SetB: ";
    print(h2);
    cout<<"or: ";
    print(or1(h1,h2));
    cout<<"and: ";
    print(and1(h1,h2));
    cout<<"sub: ";
    print(sub1(h1,h2));

}