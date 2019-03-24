#define libnet_get_ipaddr libnet_get_ipaddr4
#define ETH_H LIBNET_ETH_H
#define libnet_host_lookup libnet_addr2name4
#define libnet_ip_hdr libnet_ipv4_hdr
#define IP_H LIBNET_IPV4_H
#define UDP_H LIBNET_UDP_H
#define libnet_build_ip libnet_build_ipv4
#define PRu16 LIBNET_PRu16
#define libnet_write_ip libnet_write_raw_ipv4
#define PRu32 LIBNET_PRu32
#define TCP_H LIBNET_TCP_H
#define libnet_icmp_hdr libnet_icmpv4_hdr
#define ICMP_ECHO_H LIBNET_ICMPV4_ECHO_H
#define ICMP_MASK_H LIBNET_ICMPV4_MASK_H
static u_long libnet_name_resolve(u_char *host_name, u_short use_name)
{
    struct in_addr addr;
    struct hostent *host_ent; 
    u_long l;
    u_int val;
    int i;
   
    if (use_name == LIBNET_RESOLVE)
    {
        if ((addr.s_addr = inet_addr(host_name)) == -1)
        {
            if (!(host_ent = gethostbyname(host_name)))
            {
                return (-1);
            }
            memcpy((char *)&addr.s_addr, host_ent->h_addr, host_ent->h_length);
        }
        return (addr.s_addr);
    }
    else
    {
        /*
         *  We only want dots 'n decimals.
         */
        if (!isdigit(host_name[0]))
        {
            return (-1L);
        }

        l = 0;
        for (i = 0; i < 4; i++)
        {
            l <<= 8;
            if (*host_name)
            {
                val = 0;
                while (*host_name && *host_name != '.')
                {   
                    val *= 10;
                    val += *host_name - '0';
                    if (val > 255)
                    {
                        return (-1L);
                    }
                    host_name++;
                }
                l |= val;
                if (*host_name)
                {
                    host_name++;
                }
            }
        }
        return (htonl(l));
    }
}

