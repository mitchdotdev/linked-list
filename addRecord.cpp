#include "main.h"

void addRecord(slist*& header){
  sentry *node, *temp;
  bool exit = false;

  while (!exit)
  {
    if(header == NULL)
    {
      header = new slist;
      header-> length = 0;
      header-> first = NULL;
      header-> last = NULL;

      node = new sentry;
      header-> first = node;
      header-> last = node;
      node-> prev = NULL;
      node-> next = NULL;

      cin.clear();
      cin.ignore(1000, '\n');
    }else
    {
      node = new sentry;
      node-> prev = header-> last;
      node-> next = NULL;
      temp = header-> last;
      temp-> next = node;
      header-> last = node;

      cin.clear();
      cin.ignore(1000, '\n');
    }


    node-> course = new record;
    cout << "\nEnter the Class Term: ";
    getline(cin, node->course->term);
    node->course->term = (node->course->term.empty()) ? "N/A"
                                                      : node->course->term;
    cout << "Enter the Class Title: ";
    getline(cin, node->course->title);
    node->course->title = (node->course->title.empty()) ? "N/A"
                                                        : node->course->title;
    cout << "Enter the Class Description: ";
    getline(cin, node->course->description);
    node->course->description = (node->course->description.empty()) ? "N/A"
                                                                    : node->course->description;
    cout << "Enter the Course Ticket Number: ";
    getline(cin, node->course->ticket);
    node->course->ticket = (node->course->ticket.empty()) ? "N/A"
                                                          : node->course->ticket;
    cout << "Enter the Class Location: ";
    getline(cin, node->course->location);
    node->course->location = (node->course->location.empty()) ? "N/A"
                                                              : node->course->location;
    cout << "Enter the Lecture Day and Time: ";
    getline(cin, node->course->lecture);
    node->course->lecture = (node->course->lecture.empty()) ? "N/A"
                                                            : node->course->lecture;
    cout << "Enter the Class Instructor's Name: ";
    getline(cin, node->course->instructor);
    node->course->instructor = (node->course->instructor.empty()) ? "N/A"
                                                                  : node->course->instructor;
    cout << "Enter the Lab Location: ";
    getline(cin, node->course->labLocation);
    node->course->labLocation = (node->course->labLocation.empty()) ? "N/A"
                                                                    : node->course->labLocation;
    cout << "Enter the Lab Day and Time: ";
    getline(cin, node->course->lab);
    node->course->lab = (node->course->lab.empty()) ? "N/A"
                                                    : node->course->lab;
    cout << "Enter the Lab Instructor's Name: ";
    getline(cin, node->course->labInstructor);
    node->course->labInstructor = (node->course->labInstructor.empty()) ? "N/A"
                                                                        : node->course->labInstructor;
    cout << "Enter the Units: ";
    getline(cin, node->course->units);
    node->course->units = (node->course->units.empty()) ? "N/A"
                                                        : node->course->units;
    cout << "Enter the Prereqs: ";
    getline(cin, node->course->prereqs);
    node->course->prereqs = (node->course->prereqs.empty()) ? "N/A"
                                                            : node->course->prereqs;
    cout << "Enter the Grade: ";
    getline(cin, node->course->grade);
    node->course->grade = (node->course->grade.empty()) ? "N/A"
                                                        : node->course->grade;
    header-> length++;

    cout << "\n\nIf You're finished entering type any character . . ."
            "\nIf you'd like to continue press enter: ";

    if(cin.peek() == '\n')
    {
      cin.clear();
    }else
    {
      cin.clear();
      cin.ignore(1000, '\n');
      exit = true;
    }
  }

}
