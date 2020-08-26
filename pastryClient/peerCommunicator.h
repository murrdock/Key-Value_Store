
#ifndef PEERCOMMUNICATOR_H
#define PEERCOMMUNICATOR_H

#include <string>
#include <iostream>
#include "message.pb.h"
#include "node.h"
#include <vector>

using message::Message;
using message::Response;

class PeerCommunicator
{
  int peer_fd;

public:
  PeerCommunicator(Node peer);
  PeerCommunicator(int peer_fd);
  PeerCommunicator(std::string ip, std::string port);
  void sendMsg(Message msg);
  void connectToTracker();
  virtual ~PeerCommunicator();
  Message recieveMsg();
};

#endif
