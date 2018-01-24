#include "main.h"

void merge(sentry*& head1)
{
  sentry *head2;

  if(head1 != NULL)
    if(head1->next != NULL)
    {
      splitList(head1, head2);
      merge(head1);
      merge(head2);
      head1 = listSort(head1, head2);
    }
}
