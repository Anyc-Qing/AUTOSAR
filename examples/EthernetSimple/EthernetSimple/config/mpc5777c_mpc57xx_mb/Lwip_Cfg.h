/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/* Generator version: 2.0.0
 * AUTOSAR version:   4.2.2
 */

#ifndef LWIP_CFG_H
#define LWIP_CFG_H


/** @req 4.2.2/SWS_TCPIP_00090 */
#if !defined(ARP_TABLE_SIZE) 
#define ARP_TABLE_SIZE 10u
    
#endif    
    

/* ---------- IP Reassembly options ---------- */    
#if !defined(IP_REASSEMBLY) 
#define IP_REASSEMBLY true
    
#endif        
    
#if !defined(IP_REASS_MAX_PBUFS)      
#define IP_REASS_MAX_PBUFS 10u
    
#endif
    
#if !defined(IP_REASS_MAXAGE)     
#define IP_REASS_MAXAGE 60u
    
#endif
    

#define LWIP_SO_RCVTIMEO             true
#define LWIP_CHKSUM_ALGORITHM         3

/* ---------- DHCP options ---------- */
  
   
#define LWIP_DHCP               0
#define LWIP_AUTOIP             0
#define LWIP_DHCP_AUTOIP_COOP   0

/* Use hostname */
#define LWIP_NETIF_HOSTNAME 1

// We want to be notified when the link changes status.
#define LWIP_NETIF_LINK_CALLBACK 1

/* Ethernet address */
#define ETH_MAC_ADDR {0x00,0x00,0x00,0x00,0x00,0x02}



/**
 * SYS_LIGHTWEIGHT_PROT==true: if you want inter-task protection for certain
 * critical regions during buffer allocation, deallocation and memory
 * allocation and deallocation.
 */
#define SYS_LIGHTWEIGHT_PROT    true

/**
 * NO_SYS==true: Provides VERY minimal functionality. Otherwise,
 * use lwIP facilities.
 */
#define NO_SYS                  false

/*   ---------- Sequential layer options ---------- */
/**
 * LWIP_NETCONN==true: Enable Netconn API (require to use api_lib.c)
 */
#define LWIP_NETCONN                     true

/* ---------- Socket options ---------- */
/**
 * LWIP_SOCKET==true: Enable Socket API (require to use sockets.c)
 */
#define LWIP_SOCKET                     true

/* ---------- Memory options ---------- */
#define LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT true

/**
 * MEM_LIBC_MALLOC==true: Use malloc/free/realloc provided by your C-library
 * instead of the lwip internal allocator. Can save code size if you
 * already use it.
 */
#define MEM_LIBC_MALLOC                 false

/**
* MEMP_MEM_MALLOC==true: Use mem_malloc/mem_free instead of the lwip pool allocator.
* Especially useful with MEM_LIBC_MALLOC but handle with care regarding execution
* speed and usage from interrupts!
*/
#define MEMP_MEM_MALLOC                 false

/* MEM_ALIGNMENT: should be set to the alignment of the CPU for which
   lwIP is compiled. 4 byte alignment -> define MEM_ALIGNMENT to 4, 2
   byte alignment -> define MEM_ALIGNMENT to 2. */
#define MEM_ALIGNMENT           4

/* MEM_SIZE: the size of the heap memory. If the application will send
a lot of data that needs to be copied, this should be set high. */
#define MEM_SIZE                (5200u)

/* MEMP_NUM_PBUF: the number of memp struct pbufs. If the application
   sends a lot of data out of ROM (or other static memory), this
   should be set high. */
#define MEMP_NUM_PBUF           30

#define MEMP_NUM_NETCONN    6
 
#define MEMP_NUM_UDP_PCB    3u

#define MEMP_NUM_TCP_PCB    3u


/* buffer copy handling. */
#if defined (CFG_ZYNQ)
#define MEMCPY(dst,src,len)             memcpy((uint8*)dst,(uint8*)src,len)

#define SMEMCPY(dst,src,len)            memcpy((uint8*)dst,(uint8*)src,len)

#define ip_addr_copy(dest, src)         IPADDR2_COPY(&(dest).addr,&(src).addr)
#endif

/* ---------- Pbuf options ---------- */
/* PBUF_POOL_SIZE: the number of buffers in the pbuf pool. */
#define PBUF_POOL_SIZE          30

/* PBUF_POOL_BUFSIZE: the size of each pbuf in the pbuf pool. */
#define PBUF_POOL_BUFSIZE       1540


/* ---------- TCP options ---------- */
#define LWIP_TCP                true
#define TCP_TTL                 100

#define TCP_SYNMAXRTX           0

/* Controls if TCP should queue segments that arrive out of
   order. Define to 0 if your device is low on memory. */
#define TCP_QUEUE_OOSEQ         true

/* TCP Maximum segment size. */
#define TCP_MSS                 1496  /* TCP_MSS = (Ethernet MTU - IP header size - TCP header size) */

/* TCP sender buffer space (bytes). */
#define TCP_SND_BUF             2992

/* TCP sender buffer space (pbufs). This must be at least = 2 *
   TCP_SND_BUF/TCP_MSS for things to work. */
#define TCP_SND_QUEUELEN        6

/* TCP receive window. */
#define TCP_WND                 20000

/* ---------- IGMP options ---------- */
#define LWIP_IGMP               true

/* ---------- ICMP options ---------- */
#define LWIP_ICMP               true

/* ---------- UDP options ---------- */
#define LWIP_UDP                true
#define UDP_TTL                 255

/* ---------- Statistics options ---------- */
#define LWIP_STATS             STD_ON
#define LWIP_PROVIDE_ERRNO     true

/* --------------------------------------
   ---------- Checksum options ----------
   -------------------------------------- */
#if defined(CFG_STM32_CL) || defined (CFG_MPC5748G) || defined (CFG_MPC5747C) || defined (CFG_MPC5746C)

/* CHECKSUM_BY_HARDWARE==true: Enables the setting of the checksums by hardware for UDPTCPICMP on stm32 and mpc*/
#define CHECKSUM_BY_HARDWARE            true
/* CHECKSUM_GEN_IP==true: Generate checksums in software for outgoing IP packets.*/
#define CHECKSUM_GEN_IP                 false
/* CHECKSUM_GEN_UDP==true: Generate checksums in software for outgoing UDP packets.*/
#define CHECKSUM_GEN_UDP                false
/* CHECKSUM_GEN_TCP==true: Generate checksums in software for outgoing TCP packets.*/
#define CHECKSUM_GEN_TCP                false
/* CHECKSUM_GEN_ICMP==true: Generate checksums in software for incoming TCP packets.*/
#define CHECKSUM_GEN_ICMP               false

/* CHECKSUM_CHECK_IP==true: Check checksums in software for incoming IP packets.*/
#define CHECKSUM_CHECK_IP               false
/* CHECKSUM_CHECK_UDP==true: Check checksums in software for incoming UDP packets.*/
#define CHECKSUM_CHECK_UDP              false
/* CHECKSUM_CHECK_TCP==true: Check checksums in software for incoming TCP packets.*/
#define CHECKSUM_CHECK_TCP              false

#else

#define CHECKSUM_BY_HARDWARE            false
/* CHECKSUM_GEN_IP==true: Generate checksums in software for outgoing IP packets.*/
#define CHECKSUM_GEN_IP                 true
/* CHECKSUM_GEN_UDP==true: Generate checksums in software for outgoing UDP packets.*/
#define CHECKSUM_GEN_UDP                true
/* CHECKSUM_GEN_TCP==true: Generate checksums in software for outgoing TCP packets.*/
#define CHECKSUM_GEN_TCP                true
/* CHECKSUM_GEN_ICMP==true: Generate checksums in software for incoming TCP packets.*/
#define CHECKSUM_GEN_ICMP               true

/* CHECKSUM_CHECK_IP==true: Check checksums in software for incoming IP packets.*/
#define CHECKSUM_CHECK_IP               true
/* CHECKSUM_CHECK_UDP==true: Check checksums in software for incoming UDP packets.*/
#define CHECKSUM_CHECK_UDP              true
#ifdef HOST_TEST 
/* For tests , checksum validation is disabled */
#define CHECKSUM_CHECK_TCP              false
#else
/* CHECKSUM_CHECK_TCP==true: Check checksums in software for incoming TCP packets.*/
#define CHECKSUM_CHECK_TCP              true
#endif

#endif

#endif /* LWIP_CFG_H */

