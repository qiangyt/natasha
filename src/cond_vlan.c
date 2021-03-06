/* vim: ts=4 sw=4 et */
#include <rte_mbuf.h>

#include "conds.h"
#include "natasha.h"
#include "network_headers.h"


int
cond_vlan(struct rte_mbuf *pkt, uint8_t port, struct core *core, void *data)
{
    int *vlan = data;

    return VLAN_ID(pkt) == *vlan;
}
