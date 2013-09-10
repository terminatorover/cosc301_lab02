#ifndef __LAB02_H__
#define __LAB02_H__

#include <string.h>

char *string_in(const char *, const char *);

struct record {
    char name[128];
    unsigned char age;
    unsigned char shoe_size;
}; 


int search_by_name(struct record [], int, const char *, int);

int *get_matches(struct record [], int, const char *);

#endif // __LAB02_H__
