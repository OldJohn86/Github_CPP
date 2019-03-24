
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DST = 258,
     SRC = 259,
     HOST = 260,
     GATEWAY = 261,
     NET = 262,
     MASK = 263,
     PORT = 264,
     LESS = 265,
     GREATER = 266,
     PROTO = 267,
     PROTOCHAIN = 268,
     BYTE = 269,
     ARP = 270,
     RARP = 271,
     IP = 272,
     SCTP = 273,
     TCP = 274,
     UDP = 275,
     ICMP = 276,
     IGMP = 277,
     IGRP = 278,
     PIM = 279,
     VRRP = 280,
     ATALK = 281,
     AARP = 282,
     DECNET = 283,
     LAT = 284,
     SCA = 285,
     MOPRC = 286,
     MOPDL = 287,
     TK_BROADCAST = 288,
     TK_MULTICAST = 289,
     NUM = 290,
     INBOUND = 291,
     OUTBOUND = 292,
     LINK = 293,
     GEQ = 294,
     LEQ = 295,
     NEQ = 296,
     ID = 297,
     EID = 298,
     HID = 299,
     HID6 = 300,
     AID = 301,
     LSH = 302,
     RSH = 303,
     LEN = 304,
     IPV6 = 305,
     ICMPV6 = 306,
     AH = 307,
     ESP = 308,
     VLAN = 309,
     ISO = 310,
     ESIS = 311,
     ISIS = 312,
     CLNP = 313,
     STP = 314,
     IPX = 315,
     NETBEUI = 316,
     AND = 317,
     OR = 318,
     UMINUS = 319
   };
#endif
/* Tokens.  */
#define DST 258
#define SRC 259
#define HOST 260
#define GATEWAY 261
#define NET 262
#define MASK 263
#define PORT 264
#define LESS 265
#define GREATER 266
#define PROTO 267
#define PROTOCHAIN 268
#define BYTE 269
#define ARP 270
#define RARP 271
#define IP 272
#define SCTP 273
#define TCP 274
#define UDP 275
#define ICMP 276
#define IGMP 277
#define IGRP 278
#define PIM 279
#define VRRP 280
#define ATALK 281
#define AARP 282
#define DECNET 283
#define LAT 284
#define SCA 285
#define MOPRC 286
#define MOPDL 287
#define TK_BROADCAST 288
#define TK_MULTICAST 289
#define NUM 290
#define INBOUND 291
#define OUTBOUND 292
#define LINK 293
#define GEQ 294
#define LEQ 295
#define NEQ 296
#define ID 297
#define EID 298
#define HID 299
#define HID6 300
#define AID 301
#define LSH 302
#define RSH 303
#define LEN 304
#define IPV6 305
#define ICMPV6 306
#define AH 307
#define ESP 308
#define VLAN 309
#define ISO 310
#define ESIS 311
#define ISIS 312
#define CLNP 313
#define STP 314
#define IPX 315
#define NETBEUI 316
#define AND 317
#define OR 318
#define UMINUS 319




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 85 "grammar.y"

	int i;
	bpf_u_int32 h;
	u_char *e;
	char *s;
	struct stmt *stmt;
	struct arth *a;
	struct {
		struct qual q;
		struct block *b;
	} blk;
	struct block *rblk;



/* Line 1676 of yacc.c  */
#line 196 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE pcap_lval;


