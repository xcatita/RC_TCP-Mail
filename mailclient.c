#include <common.h>

int main(int argc, char *argv[]) {
    signal(SIGPIPE, SIG_IGN);
    if (argc < 3) {
        printf("Usage: %s <server-ip> <server-port> <file1> ...\n", argv[0]);
        return ERROR_STATUS;
    }
    
    int socket_fd = socket(AF_INET, SOCK_STREAM, 0);

    int server_port = atoi(argv[2]);

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htonl(server_port);
    if (inet_pton(AF_INET, argv[1], &server_addr.sin_addr) != 1)
    {
        fprintf(stderr, "Error encountered when converting IP");
        return -1;
    }
    socklen_t server_len = sizeof(server_addr);

    if (connect(socket_fd, &server_addr, server_len) == -1) {
        printf("Failed to connect to server.\n");
        close(socket_fd);
    }


}
