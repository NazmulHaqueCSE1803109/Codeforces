#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void print(struct node *head)
{
    if(head==NULL)
        cout<<"This link list is not created successfully."<<endl;
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void insert_first(struct node *head)
{
    if(head==NULL)
    {
        cout<<"this link list is empty."<<endl;
    }
    else
    {
        struct node *newnode=NULL;
        newnode=(struct node *)malloc(sizeof(struct node));
        int x;
        cout<<endl<<"Enter a data for inserting at first : ";
        cin>>x;
        newnode->data=x;
        newnode->next=head;
        head=newnode;
    }
    cout<<endl<<"Print the elements of link list after insert at first : ";
    print(head);
}

void insert_mid(struct node *head)
{
    if(head==NULL)
        cout<<"this link list is empty."<<endl;
    else
    {
        struct node *newnode=NULL, *prev=head, *cur=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        int pos,x,c=1;
        cout<<endl<<"enter a position where you want to add an elements : ";
        cin>>pos;
        cout<<endl<<"enter a value to insert : ";
        cin>>x;
        newnode->data=x;
        newnode->next=NULL;
        while(cur->next!=NULL)
        {
            c++;
            prev=prev->next;
            cur=prev->next;
            if(c==pos)
                break;
        }
        prev->next=newnode;
        newnode->next=cur;
    }
    cout<<endl<<"print the link list after adding elements at any position : ";
    print(head);
}

void insert_end(struct node *head)
{
    if(head==NULL)
    {
        cout<<"this link list is empty."<<endl;
    }
    else
    {

        struct node *temp=head,*newnode=NULL;
        newnode=(struct node *)malloc(sizeof(struct node));
        int x;
        cout<<endl<<"enter the value which you want to add at last : ";
        cin>>x;
        newnode->data=x;
        newnode->next=NULL;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    cout<<endl<<"the link list after insert data at last : ";
    print(head);
}

int main()
{
    int n,x,i;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the values : ";
    cin>>x;
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=x;
    head->next=NULL;

    struct node *temp=head;

    for(i=2;i<=n;i++)
    {
        cin>>x;
        struct node *newnode=NULL;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    cout<<"Print the elements of link list : ";
    print(head);
    insert_first(head);
    insert_end(head);
    insert_mid(head);
    return 0;
}
