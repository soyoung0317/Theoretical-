typedef struct Node {
	int data;
	Node* Next;
}NODE;

NODE* Reverse_list(NODE* head) {
	NODE* p = head; // 현재 리스트 
	NODE* q = nullptr; // 역순으로 만들 리스트 
	NODE* r = nullptr; // 임시변수 

	while (p != nullptr)
	{
		r = q;
		q = p;
		p = p->Next;
		q->Next = r;
	}

	return q; // 역순으로 된 리스트의 첫번째 노드 
}