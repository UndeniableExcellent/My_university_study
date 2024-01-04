/*输出自然数 
1 到 n 所有不重复的排列，即 
n 的全排列，要求所产生的任一数字序列中不允许出现重复的数字。
输入格式
一个整数
n(1≤n≤9)。
输出格式
由1∼n 组成的所有不重复的数字序列，每行一个序列。每个数字保留5个场宽。*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node_t {
    int *data;
    struct node_t *next;
} node_t;

typedef struct {
    node_t *head;
    node_t *tail;
} list_t;

void list_init(list_t *list) {
    list->head = NULL;
    list->tail = NULL;
}

void list_push(list_t *list, int *data, int length) {
    node_t *node = (node_t *)malloc(sizeof(node_t));
    node->data = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length; ++i) {
        node->data[i] = data[i];
    }
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
}

void list_destroy(list_t *list) {
    node_t *node = list->head;
    while (node != NULL) {
        node_t *next = node->next;
        free(node->data);
        free(node);
        node = next;
    }
    list->head = NULL;
    list->tail = NULL;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(list_t *result, int *array, int start, int end) {
    if (start == end) {
        list_push(result, array, end + 1);
    } else {
        for (int i = start; i <= end; ++i) {
            swap(&array[start], &array[i]);
            permute(result, array, start + 1, end);
            swap(&array[start], &array[i]);
        }
    }
}

list_t *find_derangements(int *array, int length) {
    list_t *result = (list_t *)malloc(sizeof(list_t));
    result->head = NULL;
    result->tail = NULL;
    if (length < 2) {
        return result;
    }
    permute(result, array, 0, length - 1);
    node_t *node = result->head;
    while (node != NULL) {
        int *data = node->data;
        int deranged = 1;
        for (int i = 0; i < length; ++i) {
            if (data[i] == i) {
                deranged = 0;
                break;
            }
        }
        if (deranged) {
            node_t *next = node->next;
            free(node->data);
            free(node);
            node = next;
        } else {
            node_t *next = node->next;
            node->next = NULL;
            if (result->head == node) {
                result->head = next;
            } else {
                result->tail->next = next;
            }
            node = next;
        }
    }
    return result;
}

void print_array(int *array, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[]={0, 1, 2, 3, 4};
    int length = sizeof(array) / sizeof(array[0]);
    list_t *result = deranged_permutations(array, length);
    node_t *node = result->head;
    while (node != NULL) {
        print_array(node->data, length);
        node = node->next;
    }
}