#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
	struct node *tortoise = head, *hare = head;
	while(hare && hare->next){
		tortoise = tortoise->next;
		hare = hare->next->next;
		if(hare == tortoise) return 1;
	}
    return 0;
}
