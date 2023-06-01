#include "libcli.h"

#include <stdio.h>
#include "utils.h"


void load(void) {
    while(1){
        printf("|");
        utils_clearone();
        printf("/");
        utils_clearone();
        printf("-");
        utils_clearone();
        printf("\\");
        utils_clearone();
        printf("|");
        utils_clearone();
    }
}

void process_bar(int width){
    //TODO time
    printf("[");
    for (int i = 0; i < width; ++i) {
        printf("|");
    }
    printf("]");
}
