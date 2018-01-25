#include "main.h"

void saveRecord(slist*& header, sentry*& node, record*& course) {
  ofstream fout;
  string fileName;
  sentry *temp;
  record *p;

  if(header != NULL)
    fileName = "test.txt";
    fout.open(fileName.c_str());
    node = header-> first;
    for(int i = 0; i < header->length; ++i)
    {
      fout << node->course->term << endl;
      fout << node->course->title << endl;
      fout << node->course->description << endl;
      fout << node->course->ticket << endl;
      fout << node->course->location << endl;
      fout << node->course->lecture << endl;
      fout << node->course->instructor << endl;
      fout << node->course->labLocation << endl;
      fout << node->course->lab << endl;
      fout << node->course->labInstructor << endl;
      fout << node->course->units << endl;
      fout << node->course->prereqs << endl;
      fout << node->course->grade;

      if(i != header-> length - 1)
        fout << "\n\n";

      temp = node;
      p = temp-> course;
      delete p;
      delete temp;

      node = temp-> next;
    }
  fout.close();
  delete header;
}
