LinkedListNode* addLists(LinkedListNode* list1, LinkedListNode* list2) {
    int a[100],b[100];
    int i=0,j=0;
    struct LinkedListNode *temp=(struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
    
    while(list1)
    {
        a[i++]=list1->val;
        list1=list1->next;
    }
    while(list2)
    {
        b[j++]=list2->val;
        list2=list2->next;
    }
    int sizea=i,sizeb=j;
    if(i>=j)    {
    while(i&&j)
    {
        a[--i]+=b[--j];
    }
   for(int x=sizea-1;x>0;x--)
   {
       if(a[x]>=10)
       {
           a[x]%=10;
           a[x-1]+=1;
       }
   }
      //  for(int x=0;x<sizea;x++)
      //      printf("%d ",a[x]);
    }
    else
    {
         while(i&&j)
    {
        b[--j]+=a[--i];
    }
   for(int x=sizeb-1;x>0;x--)
   {
       if(b[x]>=10)
       {
           b[x]%=10;
           b[x-1]+=1;
       }
   }
       // for(int x=0;x<sizeb;x++)
       //    printf("%d ",b[x]);
        for(int y=0;y<sizeb;y++)
            a[y]=b[y];
        
    }
    int maxs=sizea>=sizeb?sizea:sizeb;
    // printf("%d ",maxs);
     LinkedListNode *temp1,*temphead=NULL;
    for(int co=maxs-1;co>=0;co--)
    {
       /*temp->val=a[co];
      temp=temp->next;
        if(temp==NULL)
            break;*/
       temp1=( LinkedListNode *)malloc(sizeof( LinkedListNode));
        temp1->val=a[co];
        temp1->next=temphead;
        temphead=temp1;
      
    }

    return temphead;
}
