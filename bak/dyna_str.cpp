#include <string.h>
#ifndef __DSTRING_H
#define __DSTRING_H
typedef struct _dstring dstring;
struct _dstring
{
    char *pstr;
    size_t str_sz;
    size_t buf_sz;
};
#endif

#define NaS ((string){NULL, 0, 0})
#define isnas(S) (!(S)->pstr)

static size_t dstr_size(dstring *s)
{
    if (isnas(s))
        return 0;
    return pstr->str_sz;
}

// https://zhuanlan.zhihu.com/p/299108453 TODO