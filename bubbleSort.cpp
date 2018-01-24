#include "main.h"

void bubbleSort(slist* header) {
  sentry *node, *temp, *temp1, *temp2;
  record *tempCourse;

  for(int a = 0; a < header->length - 1; ++a)
  {
    node = header-> first;
    for(int b = 0; b < header->length - a - 1; ++b)
    {
      if(node->course->title > node->next->course->title)
      {
        temp1 = node;
        temp2 = node-> next;
        tempCourse = temp1-> course;
        node-> course = temp2-> course;
        temp2-> course = tempCourse;
      }
      temp = node;
      node = temp-> next;
    }
  }
}
