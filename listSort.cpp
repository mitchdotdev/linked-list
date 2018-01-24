#include "main.h"

sentry* listSort(sentry* head1, sentry* head2)
{
  sentry *mainHead, *mainTail;

  if(head1 == NULL)
    return head2;
  else if(head2 == NULL)
    return head1;
  else
  {
    if(head1->course->title < head2->course->title)
    {
      mainHead = head1;
      head1 = head1->next;
      mainTail = mainHead;
    }
    else
    {
      mainHead = head2;
      head2 = head2->next;
      mainTail = mainHead;
    }

    while(head1 != NULL && head2 != NULL)
    {
      if(head1->course->title < head2->course->title)
      {
        mainTail->next = head1;
        mainTail = mainTail->next;
        head1 = head1->next;
      }
      else
      {
        mainTail->next = head2;
        mainTail = mainTail->next;
        head2 = head2->next;
      }
    }

  if(head1 == NULL)
    mainTail->next = head2;
  else
    mainTail->next = head1;

  return mainHead;
  }
}
