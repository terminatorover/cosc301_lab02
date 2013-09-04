#include <stdio.h>
#include <string.h>

/*
 * Problem 1
 */
char *string_in(const char *first, const char *second) {

}


/*
 * Problem 2
 */

struct record {
    char name[128];
    unsigned char age;
    unsigned char shoe_size;
}; 


int search_by_name(struct record records[], int num_records, 
                   const char *str, int start_index) {

}

/*
 * Problem 3
 */
int *get_matches(struct record records[], int num_records,
                 const char *str) {

}

int main(int argc, char **argv) {
    char *match = string_in("hats!", "AT");
    printf("string_in: %s\n", match);

    struct record records[] = { {"Alice",18,6}, {"Bob",17,7},{"Claudia",18,49}};

}
