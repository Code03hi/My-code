#include<iostream>
#include<process.h>
template<class t>

class node
{
    protected:
    node * count;
    node * p;
    node * q;
    node * first;
    node * last;
    public:
    t data;
    node * ptr;
    node()
    {
        count = NULL;
    }
    public:
    void create(a);
    void display();
    void insert();
    void delete(t,t);
    void delete1(t &);
};

template < class t>
void node<t> :: create(t a)
{
    int i;
    p=new node;
    cout << "\n Input node information ";
    cin >> p->data;
    p->ptr=NULL;
    first=p;
    for (int i = 1; i < a; i++)
    {
        q=new node;
        cout << "Input node information " << endl;
        cin >> q->data;
        p->ptr=q;
        q->ptr=null;
        p=q;
    }
    last =p;
    p->ptr=first;
}
template<class t>
void node<t> :: display()
{
    count = first;
    p=first;
    do
    {
        cout << p->data << " ";
        p=p->ptr;
    } while (p!=count); 
}
template<class t>
void node<t> :: insert(t a,t b)
{
    if(last->data==a)
    {
        q=new node;
        p=fisrt;
        do
        {
            if(p>data==a)
            {
                q->data=b;
                q->ptr=p->ptr;
                p->ptr=q;
            }
            p=p->ptr;
        }while(p!=count);
        p->ptr=fisrt;
    }
    else
    q=new node;
    p=fisrt;
    do
    {
        
    }
}