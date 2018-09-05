#include <iostream>
#include <malloc.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
void push(struct node *top,int a)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    while(top->next!=NULL)
    {
        top=top->next;
    }
    top->next=temp;
}
void popStack(struct node *top)
{
    while(top->next->next!=NULL)
    {
        top=top->next;
    }
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=top->next;
    top->next=NULL;
    free(temp);
}
void print(struct node *top)
{
    while(top != NULL)
    {
        cout<<top->data<< " ";
        top=top->next;
    }
    cout<<endl;
}
int main(){
    struct node *top=NULL;
    int students;
    int team;
    int membercount=0;

    cin>>students>>team;
    int ratings[students];
    for(int i=0;i<students;i++)
    {
        cin >> ratings[i];
    }
    for(int x=0;x<students-1;x++)
    {
        for(int y=x+1;y<students;y++)
        {
            if(ratings[x]==ratings[y])
            {
                ratings[y]=0;
            }
        }
    }
    for(int k=0;k<students;k++)
    {
        if(ratings[k]!=0 )
        {
            if(top==NULL)
            {
                top=(struct node*)malloc(sizeof(struct node));
                top->next=NULL;
                top->data=k+1;
                membercount++;
            }
            else
            {
                push(top,k+1);
                membercount++;
            }
        }
    }
    if(membercount>=team)
    {
        cout << "YES" << endl;
        if (membercount>team)
        {
            for(int ab=0;ab<membercount-team;ab++)
            {
                popStack(top);
            }
        }
        print(top);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
