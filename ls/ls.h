/*
UNIX projects
@alkuzin - 2024
*/

#ifndef _UNIX_PROJECT_LS_H_
#define _UNIX_PROJECT_LS_H_

#include <sys/stat.h>
#include <dirent.h>

typedef struct ls_s {
    char   filenames[256][256];
    struct dirent *dp;
    size_t size;
    DIR    *dir;
} ls_t;

typedef struct stat stat_t;

void ls_init(ls_t *ls);
void ls_opendir(ls_t *ls, const char *path);
void ls_readdir(ls_t *ls);
void ls_printdir_long_list_fmt(ls_t *ls);
void ls_printdir(ls_t *ls);
void ls_closedir(ls_t *ls);


#endif /* _UNIX_PROJECT_LS_H_ */
