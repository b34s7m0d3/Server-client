#include <WinSock2.h>
#include <Windows.h>
#include "NetworkServices.h"
#include <WS2tcpip.h>
#include <map>

using namespace std;

#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "6881"

class ServerNetwork
{
public:

	ServerNetwork(void);
	~ServerNetwork(void);

	// Socket to listen for new connections
	SOCKET ListenSocket;

	// Socket to give to the clients
	SOCKET ClientSocket;

	// of error checking return values
	int iResult;

	// Table to keep track of each client`s socket
	std::map<unsigned int, SOCKET> sessions;

	//accept new connections
	bool acceptNewClient(unsigned int& id);

};

