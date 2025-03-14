# QueueLib

C99 queue implementation for int32_t. main.c alongside the overview of functionalities contain example usage.

---

## overview of functionalities

Creating a queue instance for the below functions requires creating a head and tail of type struct linked_list, for example:
```c
struct linked_list *head = NULL, *tail = NULL;
```

### enqueue
  ```c
  void enqueue(int32_t val, struct linked_list **head, struct linked_list **tail);
  ```
  Places recieved value at the end of the queue. Example usage:
  ```c
  enqueue(3, &head, &tail);
  ```
  

### dequeue
  ```c
  int32_t dequeue(struct linked_list **head, struct linked_list **tail);
  ```
  Removes the first element from the queue and returns it. Example usage:
  ```c
  int32_t val = dequeue(&head, &tail);
  ```

### queue_free
  ```c
  void queue_free(struct linked_list **head);
  ```
  Removes entire queue from memory. Example usage:
  ```c
  queue_free(&head);
  ```

### queue_length
  ```c
  int32_t queue_length(struct linked_list *head);
  ```
  Returns the amounts of elements in the queue. Example usage:
  ```c
  int32_t length = queue_length(head);
  ```

### queue_sum
  ```c
  int32_t queue_sum(struct linked_list *head);
  ```
  Adds all values in the queue together. Example usage:
  ```c
  int32_t sum = queue_sum(head);
  ```

### queue_arr
  ```c
  void queue_arr(int32_t arr[], int32_t length, struct linked_list **head, struct linked_list **tail);
  ```
  Adds every part of an array to the queue as seperate values. Example usage:
  ```c
  int32_t length = sizeof(values) / sizeof(int32_t);
  queue_arr(values, length, &head, &tail);
  ```

### queue_print
  ```c
  void queue_print(struct linked_list *head, int32_t length);
  ```
  Prints every element of the queue. Example usage:
  ```c
  queue_print(head, queue_length(head));
  ```

> [!NOTE]
> `queue_arr` and `queue_print` don't have checks to ensure the given length is correct

---

## compilation and usage

This library is free to use and integrate into any project. To experiment with the provided `main.c` file, simply download the source code and compile it using one of the provided build scripts:

- **Linux**: `bash build.sh`
- **Windows**: `build.bat`

The provided build files are configured for `gcc`, but the library is compatible with everything that compiles C99.