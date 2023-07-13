class Solution
{
public:

    ListNode* push(ListNode * head, int data)
    {
        ListNode* newnode= new ListNode();
        //  newnode= (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=data;
        newnode->next=NULL;
        if(!head)
            return newnode;
        ListNode* temp= head;
        while(temp->next)
            temp= temp->next;
        temp->next= newnode;

        return head;
    }
    ListNode* partition(ListNode* head, int x)
    {
        ListNode *fst= NULL;
        ListNode *scnd=NULL;
        if(head==NULL)
            return head;

        ListNode *temp = head;
        while(temp)
        {
            if(temp->val<x)
                fst= push(fst, temp->val);
            else
                scnd= push(scnd,temp->val);
            temp= temp->next;
        }
        ListNode *temps= NULL;
        temps= fst;
        if(temps)
        {
            while(temps->next)
                temps= temps->next;
            temps->next= scnd;
        }
        else
            return scnd;

        return fst;
    }
};
