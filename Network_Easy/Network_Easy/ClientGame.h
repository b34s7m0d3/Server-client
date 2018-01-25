// This will hold all the information from the Client side of the game

#include <WinSock2.h>
#include <Windows.h>
#include "ClientNetwork.h"

class ClientGame
{
public:
	ClientGame();
	~ClientGame(void);

	ClientNetwork* network;
};

