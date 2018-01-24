#include "main.h"

void delRecord(slist*& header, int choice) {
  sentry *node, *temp, *n, *delAr[header-> length];
  record *p;
  string search;
  int del;
  int nodesFound = 0;

  if(header == NULL)
  {
    cout << "\n\nThere is nothing to delete . . .\n\n";
  }else if(choice == 2)
  {
    cout << "\n\nPlease enter the title of the class you would like to delete . . . ";
    cin  >> search;

    node = header-> first;
    for(int i = 0; i < header-> length; ++i)
    {
      if(node->course->title == search)
      {
        ++nodesFound;
        delAr[nodesFound] = node;
        cout << delAr[nodesFound];
        cout << "\n\t[" << nodesFound << "]\n";
        cout << "\n\n" << node->course->term << '\n';
        cout << node->course->title << "<---\n";
        cout << node->course->description << '\n';
        cout << node->course->ticket << '\n';
        cout << node->course->location << '\n';
        cout << node->course->lecture << '\n';
        cout << node->course->instructor << '\n';
        cout << node->course->labLocation << '\n';
        cout << node->course->lab << '\n';
        cout << node->course->labInstructor << '\n';
        cout << node->course->units << '\n';
        cout << node->course->prereqs << '\n';
        cout << node->course->grade << '\n';
      }

      temp = node;
      node = temp-> next;
    }

    cout << "\n\n" << nodesFound << " matches to \'" << search << "\' found . . .\n\n";

    if(nodesFound > 0)
    {
      cout << "\nEnter the number of the list you want to delete: ";
      cin  >> del;

      while(cin.fail() || (del < 1 || del > nodesFound))
      {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease enter one of the numbers of the list you want to delete: ";
        cin  >> del;
      }
    } else
    {
      cout << "\nList not found . . .\n";
    }
  }else
  {
    cout << "\n\nPlease enter the ticket number of the class you would like to delete . . . ";
    cin  >> search;

    node = header-> first;
    for(int i = 0; i < header-> length; ++i)
    {
      if(node->course->ticket == search)
      {
        ++nodesFound;
        delAr[nodesFound] = node;
        cout << delAr[nodesFound];
        cout << "\n\t[" << nodesFound << "]\n";
        cout << "\n\n" << node->course->term << '\n';
        cout << node->course->title << '\n';
        cout << node->course->description << '\n';
        cout << node->course->ticket << "<---\n";
        cout << node->course->location << '\n';
        cout << node->course->lecture << '\n';
        cout << node->course->instructor << '\n';
        cout << node->course->labLocation << '\n';
        cout << node->course->lab << '\n';
        cout << node->course->labInstructor << '\n';
        cout << node->course->units << '\n';
        cout << node->course->prereqs << '\n';
        cout << node->course->grade << '\n';
      }

      temp = node;
      node = temp-> next;
    }

    cout << "\n\n" << nodesFound << " matches to \'" << search << "\' found . . .\n\n";

    if(nodesFound > 0)
    {
      cout << "\nEnter the number of the list you want to delete: ";
      cin  >> del;

      while(cin.fail() || (del < 1 || del > nodesFound))
      {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease enter one of the numbers of the list you want to delete: ";
        cin  >> del;
      }
    } else
    {
      cout << "\nList not found . . .\n";
    }
  }

  if(delAr[del] == header-> first)
  {
    node = delAr[del];
    temp = node-> next;
    header-> first = temp;
    p = node-> course;
    delete node;
    delete p;
    temp-> prev = NULL;
    header-> length--;
  } else if(delAr[del] == header-> last)
  {
    node = delAr[del];
    temp = node-> prev;
    header-> last = temp;
    p = node-> course;
    delete node;
    delete p;
    temp-> next = NULL;
    header-> length--;
  } else
  {
    node = delAr[del];
    temp = node-> next;
    n = node-> prev;
    p = node-> course;
    delete node;
    delete p;
    n-> next = temp;
    header-> length--;
  }
}
