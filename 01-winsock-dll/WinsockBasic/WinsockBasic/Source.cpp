#include<iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")

int main()
{
	WSADATA wsaData;
	int wsaerr;
	WORD wVersionRequested = MAKEWORD(2, 2);

	wsaerr = WSAStartup(wVersionRequested, &wsaData);

	if (wsaerr != 0)
		std::cout << "The winsock DLL was not found. Terminating...." << std::endl;
	else
		std::cout << "The winsock DLL has been found.\nThe Status: " << wsaData.szSystemStatus << std::endl;

	std::cin.get();
	return 0;
}