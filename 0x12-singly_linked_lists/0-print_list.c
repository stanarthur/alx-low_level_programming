#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @k: singly linked list.
 * Return: number of elements in the list.
 */

 size_t print_list(const list_t *k)
 {
    size_t nlem;

    nlem = 0;
    while (k != NULL)
    {
        if (k->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", k->len, k->str);
        k = k->nxt;
        nlem++;
    }
    return (nlem);
 }
