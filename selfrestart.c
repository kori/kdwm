#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * self-restart
 *
 * Initially inspired by: Yu-Jie Lin
 * https://sites.google.com/site/yjlnotes/notes/dwm
 */
void self_restart(const Arg *arg) {
    char *const argv[] = {"/home/kori/bin/dwm", NULL};

    if(argv[0] == NULL){
        return;
    }

    execv(argv[0], argv);
}
