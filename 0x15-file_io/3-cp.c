#include "main.h"

int main(int argc, char *argv[]) {
    int fd_from;
    int fd_to;
    char buffer[1024];

    int nread;

    if (argc != 3) {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        dprintf(2, "Error: Can't write to file %s\n", argv[2]);
        exit(99);
    }

    while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0) {
        write(fd_to, buffer, nread);
    }

    if (nread == -1) {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(fd_from) == -1) {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

