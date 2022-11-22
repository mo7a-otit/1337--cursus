#include "get_next_line.h"
#include <stdio.h>

int main()
{
    //char BUFFER_SIZE;
    char buf[5];
    // char buf2[3];
    int fd;
    fd = open("file.txt", O_RDWR | 0777);
    // read(fd, buf2, BUFFER_SIZE);
    printf("%s", get_next_line(fd));
}