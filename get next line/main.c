#include "get_next_line.h"

int main()
{
    //char BUFFER_SIZE;
    char buf[50];
    int fd;
    fd = open("file.txt", O_RDWR);
    read(fd, buf, BUFFER_SIZE);
    printf("%s", buf);
}