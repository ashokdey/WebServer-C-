#include "listening_socket.hpp"
#include "binding_socket.hpp"
#include "socket.hpp"

AD::ListeningSocket::ListeningSocket(
  int domain, int service, int protocol, int port, u_long interface, int backlog
): BindingSocket(domain, service, protocol, port, interface) 
{
  this->backlog = backlog;
  start_listening();
  BindingSocket::test_connection(listening);
}

void AD::ListeningSocket::start_listening()
{
  listening = listen(BindingSocket::get_connection(), backlog); 
}