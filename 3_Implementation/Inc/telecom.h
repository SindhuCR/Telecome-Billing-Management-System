#ifndef TELECOM_H_INCLUDED
#define TELECOM_H_INCLUDED

struct subscriber
{
char accountNumber[20];
char phonenumber[20];
char name[50];
float amount;
}s;
void addrecords();
void listrecords();
void modifyrecords();
void searchrecords();
void payment();
char get;
#endif // TELECOM_H_INCLUDED
