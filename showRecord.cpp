#include "main.h"

void showRecord(slist* header, int choice) {
  sentry *node, *temp, *delAr[header-> length];
  int nodesFound = 0;
  string search;

  if(header == NULL)
  {
    cout << "\n\nThere is nothing to display . . .\n\n";
  }else if(choice == 4)
  {
    cout << "\n\nPlease enter the title of the class you would like to display . . . ";
    cin  >> search;

    node = header-> first;
    for(int i = 0; i < header-> length; ++i)
    {
      if(node->course->title == search)
      {
        ++nodesFound;
        delAr[nodesFound] = node;
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

    if(nodesFound == 0)
    {
      cout << "\nNo list was found containing " << search << "\n\n";
    } else
    {
      if(nodesFound == 1)
      {
        cout << "\nThis " << nodesFound << " list contains " << search << "\n\n";
      } else
      {
        cout << "\nThese " << nodesFound << " lists contain " << search << "\n\n";
      }
    }
  }else if(choice == 5)
  {
    cout << "\n\nPlease enter the ticket number of the class you would like to display . . . ";
    cin  >> search;

    node = header-> first;
    for(int i = 0; i < header-> length; ++i)
    {
      if(node->course->ticket == search)
      {
        ++nodesFound;
        delAr[nodesFound] = node;
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

    if(nodesFound == 0)
    {
      cout << "\nNo list was found containing " << search << "\n\n";
    } else
    {
      cout << "\nThese " << nodesFound << " lists contain " << search << "\n\n";
    }

  }else
  {
    node = header-> first;
    for(int i = 0; i < header-> length; ++i)
    {
      cout << endl << node->course->term << endl;
      cout << node->course->title << endl;
      cout << node->course->description << endl;
      cout << node->course->ticket << endl;
      cout << node->course->location << endl;
      cout << node->course->lecture << endl;
      cout << node->course->instructor << endl;
      cout << node->course->labLocation << endl;
      cout << node->course->lab << endl;
      cout << node->course->labInstructor << endl;
      cout << node->course->units << endl;
      cout << node->course->prereqs << endl;
      cout << node->course->grade << endl;

      temp = node;
      node = temp-> next;
    }
  }
}
