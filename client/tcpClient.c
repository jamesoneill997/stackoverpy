//std imports
#include <stdio.h>
#include <stdlib.h>
//definitions for socket functions included in the below
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> // for close

int main(){
    
    //create socket and associated variables
    int netSocket;
    int port = 3000;
    char serverResponse[256];
    
    //domain of the socket, type of socket (TCP), protocol (0 is default - TCP)
    netSocket = socket(AF_INET, SOCK_STREAM, 0);
    
    //connection set up as a struct, set up family, port and address
    struct sockaddr_in serverAddress;
    serverAddress.sin_family=AF_INET;
    serverAddress.sin_port=htons(port);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    //connection, net socket, pointer to server address and size of the server address (returns an int)
    int connectionStatus = connect(netSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress));

    //check if error in connection
    if(connectionStatus==-1){
        printf("Error connecting\n");
    }
    
    //receiving data - socket, where to receive, size of buffer, server flags(0 by default)
    recv(netSocket, serverResponse,sizeof(serverResponse),0);
    printf("The server sent the following data: \n%s\n", serverResponse);

    close(netSocket);
    return 0;
}