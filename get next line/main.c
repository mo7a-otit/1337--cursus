#include "get_next_line.h"

int main()
{
    //char BUFFER_SIZE;
    char buf[5];
    char buf2[3];
    int fd;
    fd = open("file.txt", O_RDWR);
    read(fd, buf, BUFFER_SIZE);
    
    // read(fd, buf2, BUFFER_SIZE);
    printf("%s", buf);
    read(fd, buf, BUFFER_SIZE);
    printf("%s", buf);
}