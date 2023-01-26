#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_k - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @nxt: points to the next node
 * 
 * Description: singly linked list node structure
 */

 typedef struct list_k
 {
    char *str;
    unsigned int len;
    struct list_k *nxt;
 } list_t;

 size_t print_list(const list_t *a);

 #endif
