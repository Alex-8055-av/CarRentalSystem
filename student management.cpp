#include <iostream>
#include <winsock2.h>

using namespace std;

#pragma comment(lib, "ws2_32.lib")

int main()
{
    WSADATA wsa;
    SOCKET serverSocket, clientSocket;
    sockaddr_in server, client;
    int c;

    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        cout << "WSAStartup failed!";
        return 1;
    }

    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    if (serverSocket == INVALID_SOCKET)
    {
        cout << "Could not create socket!";
        return 1;
    }

    cout << "Socket created successfully\n";

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8888);

    if (bind(serverSocket, (struct sockaddr *)&server, sizeof(server)) == SOCKET_ERROR)
    {
        cout << "Bind failed!";
        return 1;
    }

    cout << "Bind done\n";

    listen(serverSocket, 3);

    cout << "Waiting for connections...\n";

    c = sizeof(struct sockaddr_in);

    clientSocket = accept(serverSocket, (struct sockaddr *)&client, &c);

    if (clientSocket != INVALID_SOCKET)
    {
        cout << "Client connected!\n";

        char message[] = "Hello Client!";
        send(clientSocket, message, sizeof(message), 0);
    }

    closesocket(clientSocket);
    closesocket(serverSocket);
    WSACleanup();

    return 0;
}
