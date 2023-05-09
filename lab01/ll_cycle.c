#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if(head == NULL || head->next == NULL)
        return 0;
    node *tortoise = head, *hare = head;
    int flag = 0;
    while(hare && hare->next) {
        hare = hare->next->next;
        tortoise = tortoise->next;
        if(hare == tortoise) {
            flag = 1;
            break;
        }
    }
    return flag;
}