#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct linked_list
{
	int32_t value;
	struct linked_list *next;
};

void enqueue(int32_t val, struct linked_list **head, struct linked_list **tail);
int32_t dequeue(struct linked_list **head, struct linked_list **tail);
void queue_free(struct linked_list **head);

int32_t queue_length(struct linked_list *head);
int32_t queue_sum(struct linked_list *head);
void queue_arr(int32_t arr[], int32_t length, struct linked_list **head, struct linked_list **tail);
void queue_print(struct linked_list *head, int32_t length);

