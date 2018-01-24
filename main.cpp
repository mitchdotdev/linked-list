#include "main.h"

int main() {
  slist *header = NULL;
  sentry *node, *head1 =  NULL;
  record *course = NULL;
  int choice;
  bool exit = false;

  fileRead(header);
  while(!exit)
  {
    choice = menu();
    switch(choice)
    {
     case 1: // Add Record from user
      addRecord(header);
        break;
     case 2: // Delete record by class title
      delRecord(header, choice);
        break;
     case 3: // Delete record by ticket number
      delRecord(header, choice);
        break;
     case 4: // Select record to display using class title
      showRecord(header, choice);
        break;
     case 5: // Select record to display using ticket number
      showRecord(header, choice);
        break;
     case 6: // Display all
      showRecord(header, choice);
        break;
     case 7: // Bubble sort
      bubbleSort(header);
        break;
     case 8: // Merge sort
      head1 = header-> first;
      merge(head1);
      header->first = head1;
        break;
     case 0: // Save and Exit
      saveRecord(header, node, course);
      exit = true;
        break;
    }
  }

return 0;
}
