#include "unp.h"

ssize_t
readline(int fd, void *vptr, size_t maxlen)
{
    ssize_t n, rc;
    char c, *ptr;

    ptr = vptr;
    for (n = 1; n < maxlen; n++) {
            again:
                if ( (rc = read(fd, &c, 1)) == 1) {
                    *ptr++ = c;
                    if (c == '\n')
                        break;
                } else if (rc == 0) {
                    if (n == 1)
                        return 0;
                    else
                        break;
                } else {
                        if (errno == EINTR)
                        goto again;
                    return -1;
                }
    }
    *ptr = 0;
    return n;
}

int
main()
{
    int fd;
    int cnt = 0;
    ssize_t n;
    char buf[MAXLINE];

    fd = open("access.log", O_RDONLY);
    while ( (n = readline(fd, buf, MAXLINE)) > 0 )
        cnt++;

    printf("Lines:%d\n", cnt);
    return 0;
}
