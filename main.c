#include "src/queue.h"

int main(void)
{
	struct linked_list *head = NULL, *tail = NULL;
    int32_t values[4] = {2, 4, 5, 6};
    int32_t length = sizeof(values) / sizeof(int32_t);
    queue_arr(values, length, &head, &tail);
    enqueue(3, &head, &tail);
    printf("%d\n", dequeue(&head, &tail));
    printf("---\n");
    queue_print(head, queue_length(head));
    printf("---\n");
    printf("%d\n", queue_sum(head));
    queue_free(&head);
	return 0;
}