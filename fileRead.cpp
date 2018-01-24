#include "main.h"

void fileRead(slist*& header) {
  ifstream fin;
  string fileName;
  sentry *node, *temp;
  bool exit = false;

  fileName = "test.txt";
  fin.open(fileName.c_str());
  if(fin)
    while (!fin.eof())
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
      }else
      {
        node = new sentry;
        node-> prev = header-> last;
        node-> next = NULL;
        temp = header-> last;
        temp-> next = node;
        header-> last = node;
      }
      node-> course = new record;

      getline(fin, node->course->term);
      node->course->term = (node->course->term.empty()) ? "N/A"
                                                        : node->course->term;
      getline(fin, node->course->title);
      node->course->title = (node->course->title.empty()) ? "N/A"
                                                          : node->course->title;
      getline(fin, node->course->description);
      node->course->description = (node->course->description.empty()) ? "N/A"
                                                                      : node->course->description;
      getline(fin, node->course->ticket);
      node->course->ticket = (node->course->ticket.empty()) ? "N/A"
                                                            : node->course->ticket;
      getline(fin, node->course->location);
      node->course->location = (node->course->location.empty()) ? "N/A"
                                                                : node->course->location;
      getline(fin, node->course->lecture);
      node->course->lecture = (node->course->lecture.empty()) ? "N/A"
                                                              : node->course->lecture;
      getline(fin, node->course->instructor);
      node->course->instructor = (node->course->instructor.empty()) ? "N/A"
                                                                    : node->course->instructor;
      getline(fin, node->course->labLocation);
      node->course->labLocation = (node->course->labLocation.empty()) ? "N/A"
                                                                      : node->course->labLocation;
      getline(fin, node->course->lab);
      node->course->lab = (node->course->lab.empty()) ? "N/A"
                                                      : node->course->lab;
      getline(fin, node->course->labInstructor);
      node->course->labInstructor = (node->course->labInstructor.empty()) ? "N/A"
                                                                          : node->course->labInstructor;
      getline(fin, node->course->units);
      node->course->units = (node->course->units.empty()) ? "N/A"
                                                          : node->course->units;
      getline(fin, node->course->prereqs);
      node->course->prereqs = (node->course->prereqs.empty()) ? "N/A"
                                                              : node->course->prereqs;
      getline(fin, node->course->grade);
      node->course->grade = (node->course->grade.empty()) ? "N/A"
                                                          : node->course->grade;
      if(fin.peek() == ' ')
        fin.clear();
        fin.ignore(1000, '\n');

      header-> length++;
    }
    fin.close();
}
