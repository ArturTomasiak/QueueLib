#include "queue.h"

void enqueue(int32_t val, struct linked_list **head, struct linked_list **tail) {
    struct linked_list *node = (struct linked_list *)malloc(sizeof(struct linked_list));
    if (!node) {
        printf("memory allocation failed");
        exit(EXIT_FAILURE);
    }
    node->value = val;
    node->next = NULL;
    if (*tail)
        (*tail)->next = node;
    else
        *head = node;
    *tail = node;
}

int32_t dequeue(struct linked_list **head, struct linked_list **tail) {
    if (*head == NULL) {
        printf("attempt to dequeue from an empty queue");
        exit(EXIT_FAILURE);
    }
    int32_t val = (*head)->value;
    struct linked_list *temp = *head;
    *head = (*head)->next;
    if (*head == NULL)
        *tail = NULL;
    free(temp);
    return val;
}

void queue_free(struct linked_list **head) {
    struct linked_list *temp;
    while (*head) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void queue_arr(int32_t arr[], int32_t length, struct linked_list **head, struct linked_list **tail) {
    for (int i = 0; i < length; i++) {
        enqueue(arr[i], head, tail);
    }
}

void queue_print(struct linked_list *head, int32_t length) {
    for (; length != 1; length--) {
        printf("%d, ", (head)->value);
        head = head->next;
    }
    printf("%d\n", (head)->value);
}

int32_t queue_length(struct linked_list *head) {
    int32_t length = 0;
    while (head) {
        length++;
        head = head->next;
    }
    return length;
}

int32_t queue_sum(struct linked_list *head) {
    int32_t sum = 0;
    while (head) {
        sum += head->value;
        head = head->next;
    }
    return sum;
}