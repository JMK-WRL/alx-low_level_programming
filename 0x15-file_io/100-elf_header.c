#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void print_error(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

int open_file(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(98);
    }
    return fd;
}

void read_bytes(int fd, void *buffer, size_t num_bytes, const char *error_message) {
    if (read(fd, buffer, num_bytes) != num_bytes) {
        perror(error_message);
        exit(98);
    }
}

int main(int argc, char *argv[])
{

    unsigned char magic[4];
    unsigned char class;
    unsigned char data;
    unsigned char version;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open_file(argv[1]);

    if (lseek(fd, 0, SEEK_SET) == -1) {
        perror("lseek");
        exit(98);
    }

    read_bytes(fd, magic, sizeof(magic), "read");
    if (magic[0] != 0x7F || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F') {
        print_error("Not an ELF file");
    }

    if (lseek(fd, 4, SEEK_SET) == -1) {
        perror("lseek");
        exit(98);
    }

    read_bytes(fd, &class, 1, "read");

    if (lseek(fd, 5, SEEK_SET) == -1) {
        perror("lseek");
        exit(98);
    }

    read_bytes(fd, &data, 1, "read");

    if (lseek(fd, 6, SEEK_SET) == -1) {
        perror("lseek");
        exit(98);
    }

    read_bytes(fd, &version, 1, "read");

    printf("Magic:   %02x %02x %02x %02x\n", magic[0], magic[1], magic[2], magic[3]);
    printf("Class:   %u\n", class);
    printf("Data:    %u\n", data);
    printf("Version: %u\n", version);

    close(fd);

    return 0;
}

