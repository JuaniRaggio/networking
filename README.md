# Networking

> [!NOTE]
> This repository will have multiple server-client implementations of
> network communication protocols such as udp, tcp, http.

## UDP - Why is it important?

I'm currently working on a BCI project in which I have to implement a protocol
to send data between two systems, a PC and a ESP32WROOM


The target system is a robot which will be controlled by signals who will be sent
constantly. So in this case, since the importance of the data is to be constantly
sent and recieved, TCP would be not the best choice since it will wait for EVERY
package to be recieved, for this type of streaming of data, it is not important 
the completeness of the packeges but it is the contiguity.


In conclusion, if you need a stream of data in which you don't really care about
the completeness of the packeges but you do care of the contiguity, UDP is a great
choice. Note that the percentage of packeges lost isn't that high, its probably 
around 1%


> [!NOTE]
> For sending and recieving messages, you would probably choose TCP,
> but for this particular case, latency is our priority so UDP will be
> the first protocol to implement.


<!-- ## Mid term -->
<!-- Short-term wise, the aim of this proyect is learning how HTTP servers work using only TCP -->
<!--  -->
<!-- - http/1.1 -->
<!-- - basic routing -->
<!-- - multi-threaded request handling -->
<!-- - logging system -->
<!--  -->
<!-- ### Mid term -->
<!-- Implementing sockets from scratch and add an http server to my operating system proyect -->
<!--  -->
<!-- $$ \text{[AresOS]} \rightarrow \text{[TCP/IP]} \rightarrow \text{[Socket API]} \rightarrow \text{[http server]} $$ -->
<!--  -->
