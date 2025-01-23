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

/* curr, next, prv 버전 */
NODE* Reverse_list_new(NODE* head) {
	NODE* curr = head;   // 현재 노드
	NODE* prev = nullptr; // 이전 노드
	NODE* next = nullptr; // 다음 노드

	while (curr != nullptr) {
		next = curr->Next; // 다음 노드를 저장
		curr->Next = prev; // 현재 노드의 방향을 반대로 변경
		prev = curr;       // 이전 노드를 현재 노드로 이동
		curr = next;       // 현재 노드를 다음 노드로 이동
	}

	return prev; // 새로운 헤드 반환
}