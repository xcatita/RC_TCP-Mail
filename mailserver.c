#include <common.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <port> <dir>", argv[0]);
        return ERROR_STATUS;
    }
}