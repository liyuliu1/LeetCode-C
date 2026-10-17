struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
	struct ListNode dummy;
	dummy.next=NULL;
	struct ListNode*
	curr=&dummy;
	while(list1 != NULL && list2 != NULL){
        if(list1->val<=list2->val)
{
 	curr->next=list1;
	curr=list1;
	list1=list1->next;
}
        else{
	curr->next=list2;
	curr=list2;
	list2=list2->next;
}
}
        curr->next=(list1!=NULL) ? list1:list2;
	return dummy.next;
}
