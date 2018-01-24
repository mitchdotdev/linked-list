#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct sentry sentry;
typedef struct record record;

struct slist {
  int length;
  sentry *first;
  sentry *last;
};

struct sentry {
  slist *list;
  sentry *next;
  sentry *prev;
  record *course;
};

struct record {
  string term;
  string title;
  string description;
  string ticket;
  string location;
  string lecture;
  string instructor;
  string labLocation;
  string lab;
  string labInstructor;
  string units;
  string prereqs;
  string grade;
};

int menu();
void addRecord(slist*&);
void delRecord(slist*&, int);
void showRecord(slist*, int);
void fileRead(slist*&);
void saveRecord(slist*&, sentry*&, record*&);
void bubbleSort(slist*);
void merge(sentry*&);
void splitList(sentry*, sentry*&);  // Used in merge sort
sentry* listSort(sentry*, sentry*); // Used in merge sort

#endif /* MAIN_H_ */
