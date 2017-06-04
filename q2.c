#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

void add(Node **head, int data) {
	Node *temp = NULL;

	temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else {
		while ((*head)->next != NULL)
			(*head) = (*head)->next;

		(*head)->next = temp;
	}
}

Node *init(int data[], int len) {
	Node *head = NULL, *first = NULL;
	int idx;

	for (idx = 0; idx < len; idx++) {
		add(&head, data[idx]);

		if (first == NULL)
			first = head;
	}

	idx = 0;
	head = first;
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}

	return first;
}

int find_the_3rd_to_last_element(Node *head) {
	Node *ptr1 = NULL, *ptr3 = NULL;
	int res = 0, count = 0;

	if (head == NULL)
		return res;

	ptr1 = ptr3 = head;

	while (head != NULL) {
		count++;
		if (count == 3)
			ptr3 = head;

		if (count >= 3) {
			if (ptr3->next == NULL) {
				res = ptr1->data;
				break;
			}
			ptr1 = ptr1->next;
			ptr3 = ptr3->next;
		}
		else
			head = head->next;
	}

	if (count < 3)
		res = 0;

	return res;
}

int main(void) {
	int data[] = {2, 7, 5, 4};
	Node *head = NULL;
	int answer;

	head = init(data, sizeof(data)/sizeof(data[0]));
	answer = find_the_3rd_to_last_element(head);
	printf("\nanswer = %d\n", answer);

	return 0;
}
