#pragma once
#include <pcap.h>
#include <termio.h>

typedef struct Node {
    int id;
    struct pcap_pkthdr pkthdr;
    u_char packet[65535];
    struct ListNode* next;
}node, *pNode;

typedef struct NodeList{
    pNode _pHead;
}NList;

void init(NList *n);
void add(NList *n, int id, struct pcap_pkthdr *pkthdr, u_char *packet);
pNode get(NList *n, int id);
int getSize(NList *n);
void show(NList *n);

/**
 * @brief use to log rather than
 * print to the screen
 * @param string the log string
 */
void logStatus(char* string);

int getach();