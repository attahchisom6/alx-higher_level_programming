#ifndef SORTED_ALGORITHMS_H
#define SORTED_ALGORITHMS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


/*printing functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*working functions*/

/*Bubble sort function*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

/*selection sort algorithimic functions*/
void selection_sort(int *array, size_t size);

/*quick sort algorithmic function*/
void quick_sort(int *array, size_t size);

/*shell sort algotithmic function*/
void shell_sort(int *array, size_t size);

/*cocktail sort algorithimic function*/
void cocktail_sort_list(listint_t **list);

/*counting sort algorithimic function*/
void counting_sort(int *array, size_t size);

/*merge sort algorithimic function*/
void merge_sort(int *array, size_t size);

#endif
