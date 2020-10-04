#include <iostream>
using namespace std;
struct Node
{
    int content;
    Node *next;
};
void print(Node *h)
{
    while (h->next != NULL)
    {
        cout << h->next->content << ' ';
        h = h->next;
    }
    cout << endl;
}
void sort(Node *h1, Node *h2)
{
    //Node *p=new Node;
    //Node *q=new Node;
    
    for (Node *p=h2->next->next;p!=NULL;p=p->next)
    {
        for(Node *q=h1->next;q!=NULL;q=q->next)
        {
            if (p->content>=q->content)
            {
                
                if (q->next==NULL || p->content<=q->next->content)
                {
                   Node *m=new Node;
                   m->content=p->content;
                   m->next=q->next;
                   q->next=m;
                   break;
                }
                //else
                //{
                //    q=q->next;
                //}
                
            }
            else
            {
                Node *m=new Node;
                m->content=p->content;
                m->next=h1->next;
                h1->next=m;
                break;
            }
            
        }
    }
}
int main()
{
    int t;
    Node *h1 = new Node;
    h1->next = NULL;
    Node *h2 = new Node;
    h2->next = NULL;
    while (true)
    {
        cin >> t;
        if (t == -1)
            break;
        Node *p = new Node;
        p->content = t;
        p->next = h2->next;
        h2->next = p;
    }
    if (h2->next != NULL)
    {
        Node *p=new Node;
        p->content = h2->next->content;
        p->next = h1->next;
        h1->next = p;
    }
    print(h2);
    sort(h1,h2);
    print(h1);
    //print(h2);
}