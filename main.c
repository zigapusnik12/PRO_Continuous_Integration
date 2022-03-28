#include <stdio.h>
#include "printd.h"
int main() {
    header format = {
        .size = 3,
        .tag[0] = "INF",
        .tag[1] = "DBG",
        .tag[2] = "ERR",
        .text[0] = "INFO: ",
        .text[1] = "DEBUG: ",
        .text[2] = "ERROR: "
    };
    printd(&format, 0, "To je test za 23253");
    return 0;
}