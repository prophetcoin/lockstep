#include "../shared.h"

#define CLIENT_MAX 4

struct client {
  int FD;
};

struct client_set {
  client Clients[CLIENT_MAX];
  int MaxFDPlusOne;
  ui32 Count;
};

struct network {
  client_set ClientSet;
};

extern network Network;

void InitNetwork();
void UpdateNetwork();
void NetworkBroadcast(void *Data, size_t Length);
void TerminateNetwork();
