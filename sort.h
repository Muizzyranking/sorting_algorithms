#ifndef SORT_H
#define SORT_H

/* standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *a, int *b);
int partition(int *array, size_t size, int left, int right);
void sort(int *array, size_t size, int left, int right);
size_t list_len(listint_t *list);
void switch_nodes(listint_t **list, listint_t **p);
int get_max(int *array, int size);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back);
void swap(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
int get_max(int *array, int size);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void b_merge(int *array, int low, int count, int dir, size_t size);
void b_sort(int *array, int low, int count, int dir, size_t size);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);

/* functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /*SORT_H*/
