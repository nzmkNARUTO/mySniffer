#pragma once

/**
 * @brief use functions to process the packet
 * 
 * @param pkthdr packet header
 * @param packet packet content
 * @param count packet number
 * @param packet_window the window to show packet detail
 */
void packetProcess(struct pcap_pkthdr* pkthdr, u_char* packet, int count, WINDOW *packet_window);

/**
 * @brief change mac address to char array
 * 
 * @param macaddr original mac address
 * @param mac_string string buffer to store mac address array
 * @param packet_window the window to show packet detail
 */
void macNtoa(u_char *macaddr, char* mac_string);

/**
 * @brief print ethernet protocol information
 * 
 * @param packet packet content
 * @param packet_window the window to show packet detail
 * @return u_short ethernet protocol type
 */
u_short printEthernet(u_char* packet, WINDOW *packet_window);

/**
 * @brief print ip protocol information
 * 
 * @param packet packet content
 * @param packet_window the window to show packet detail
 * @return uint8_t ip protocol type
 */
uint8_t printIP(u_char *packet, WINDOW *packet_window);

/**
 * @brief print icmp content
 * 
 * @param packet packet content
 * @param len packet length
 * @param packet_window the window to show packet detail
 */
void printICMP(u_char *packet, int len, WINDOW *packet_window);

/**
 * @brief print tcp content
 * 
 * @param packet packet content
 * @param len packet length
 * @param packet_window the window to show packet detail
 */
void printTCP(u_char *packet, int len, WINDOW *packet_window);

/**
 * @brief print udp content
 * 
 * @param packet packet content
 * @param len packet length
 * @param packet_window the window to show packet detail
 */
void printUDP(u_char *packet, int len, WINDOW *packet_window);

/**
 * @brief print arp content
 * 
 * @param packet packet content
 * @param len packet length
 * @param packet_window the window to show packet detail
 */
void printARP(u_char *packet, int len, WINDOW *packet_window);

/**
 * @brief change ip address to char array
 * 
 * @param ipaddr original ip address
 * @param ip_string string buffer to store ip array
 */
void ipFtoa(u_char *ipaddr, char* ip_string);

/**
 * @brief change tos byte to ascii
 * 
 * @param tos tos byte
 * @param tos_string string buffer to store tos ascii array
 */
void ipTtos(uint8_t tos, char* tos_string);

/**
 * @brief show packet content
 * 
 * @param payload packet
 * @param len packet length
 * @param packet_window the window to show packet detail
 */
void dumpPacket(const u_char* payload,int len, WINDOW *packet_window);