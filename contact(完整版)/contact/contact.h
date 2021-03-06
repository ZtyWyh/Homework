#ifndef _CONTACT_H_
#define _CONTACT_H_

#define _CRT_SECURE_NO_WARNINGS 1	

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <stdlib.h>
#include <malloc.h>
#include <search.h>

#define NAME_SIZE 32
#define TEL_SIZE 128
#define ADDR_SIZE 128

#define CONTACT_FILE "contact.txt"

#define INIT 1

typedef struct people
{
	char name[NAME_SIZE];
	char sex;
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE];
}people_t, *people_p,**people_pp;

typedef struct contact
{
	int cap;
	int size;
	people_t people[0];
}contact_t,*contact_p,**contact_pp;

contact_p initContact(const char *file_);
void addPeople(contact_pp ct_, people_p p_);
void deletePeople(contact_p ct_, char * name_);
void clearContact(contact_p ct_);
void destoryContact(contact_p ct);
void displayPeople(contact_p ct_);


void updatePeople(contact_p ct_, char * name_);
void searchPeople(contact_p ct_, char * name_);

void save(contact_p ct_, const char *file_);








#endif
