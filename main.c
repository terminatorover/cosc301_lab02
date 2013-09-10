#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

#include "lab02.h"


int main(int argc, char **argv) {
    printf ("*** testing string_in (problem 1)\n");
    char *s = "hats!";
    char *match = string_in(s, "AT");
    assert(match == &s[1]);
    match = string_in(s, "!!");
    assert(match == NULL);


    printf ("*** testing search_by_name (problem 2)\n");

    struct record records[] = { {"Alice",18,6}, {"Bob",17,7},{"Claudia",18,49}, {"bobby", 0, 0} };

    int rv = search_by_name(records, 4, "alice", 0);
    assert(rv == 0);

    rv = search_by_name(records, 4, "audi", 1);
    assert(rv == 2);

    rv = search_by_name(records, 4, "alice", 1);
    assert(rv == -1);

    printf ("*** testing get_matches (problem 3)\n");

    int *matches = NULL; 
    matches = get_matches(records, 4, "bob");
    assert(matches[0] == 2);
    assert(matches[1] == 1);
    assert(matches[2] == 3);
    free(matches); // this shouldn't crash :-)
    
    matches = NULL;
    matches = get_matches(records, 4, "robert");
    assert(matches[0] == 0);
    free(matches);
    
    printf ("*** if you got here, then your tests passed\n");
    return 0;
}
