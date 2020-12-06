#include <stdio.h>

#define max(x, y) ({    \
    typeof(x) _x = (x); \
    typeof(y) _y = (y); \
    (void) (&_x == &_y);\
    _x > _y ? _x : _y; })

#define MAX(type,x,y)({     \
    type _x = x;        \
    type _y = y;        \
    _x > _y ? _x : _y; \
})

int main(void)
{
    int i = 2;
    int j = 6;
    printf("max=%d\n",MAX(int,i++,j++));
    printf("max=%f\n",MAX(float,3.14,3.15));
    return 0;
}
