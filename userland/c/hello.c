/* https://cirosantilli.com/linux-kernel-module-cheat#c
 *
 * Print hello to stdout ;-) */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("hello");
    // return EXIT_SUCCESS;
    while(1);
}
