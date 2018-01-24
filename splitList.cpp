#include "main.h"

void splitList(sentry* head1, sentry*& head2)
{
  sentry *middle, *current;

  if(head1 == NULL)
    head2 = NULL;
  else if(head1-> next == NULL)
    head2 = NULL;
  else
  {
    middle = head1;
    current = head1-> next;
    if(current != NULL)
      current = current-> next;
    while(current != NULL)
    {
      middle = middle-> next;
      current = current-> next;
      if(current != NULL)
        current = current-> next;
    }

    head2 = middle->next;
    middle->next = NULL;
  }
}
