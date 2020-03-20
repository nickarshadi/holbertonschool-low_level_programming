#ifndef LISTS_H
#define LISTS_H

typedef struct list_holb{
	char *str;
	int len;
	struct list_holb *next;
} list_t;

size_t print_list(const list_t *h);

#endif
