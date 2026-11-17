#ifndef FRV_INTRINSICS_H
#define FRV_INTRINSICS_H
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#define __halt() do { for(;;); } while(0)
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
/* Ghidra's non-stdint aliases */
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned long      ulong;
typedef unsigned long long ulonglong;
typedef signed char        sbyte;
typedef short              sword;
typedef int                sdword;
typedef long long          sqword;
typedef unsigned char      byte;
typedef unsigned short     word;
typedef unsigned int       dword;
typedef unsigned long long qword;
/* Ghidra's "undefined" placeholders that occasionally survive cleanup */
typedef uint8_t  undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t  undefined;   /* Ghidra: 1-byte unknown */
typedef long long  longlong;
typedef uint32_t   undefined3;
typedef uint64_t   undefined5;
typedef uint64_t   undefined6;
typedef uint64_t   undefined7;
typedef long double float10;
typedef int32_t  int3;
typedef uint32_t uint3;
typedef int64_t  int5, int6, int7;
typedef uint64_t uint5, uint6, uint7;
/* Ghidra's `code` is a function type. Params are unspecified because the
 * decompiler doesn't know indirect-call targets' prototypes. */
typedef uint32_t code();
/* A call site that passes fewer arguments than the callee reads: the callee sees
 * whatever the caller left in that argument register (r4..r7). Explicit, not 0. */
uint32_t __frv_reg_unset(int reg);
/* Ghidra intrinsics for undecodable / unmodeled instructions */
#define halt_baddata() __halt()
#define halt_unimplemented() __halt()
/* Ghidra p-code pseudo-ops (generated) */
#define CONCAT11(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define CONCAT12(a,b) ((uint64_t)(a) << 16 | ((uint64_t)(b) & 0xffffULL))
#define CONCAT13(a,b) ((uint64_t)(a) << 24 | ((uint64_t)(b) & 0xffffffULL))
#define CONCAT14(a,b) ((uint64_t)(a) << 32 | ((uint64_t)(b) & 0xffffffffULL))
#define CONCAT15(a,b) ((uint64_t)(a) << 40 | ((uint64_t)(b) & 0xffffffffffULL))
#define CONCAT16(a,b) ((uint64_t)(a) << 48 | ((uint64_t)(b) & 0xffffffffffffULL))
#define CONCAT17(a,b) ((uint64_t)(a) << 56 | ((uint64_t)(b) & 0xffffffffffffffULL))
#define CONCAT21(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define CONCAT22(a,b) ((uint64_t)(a) << 16 | ((uint64_t)(b) & 0xffffULL))
#define CONCAT23(a,b) ((uint64_t)(a) << 24 | ((uint64_t)(b) & 0xffffffULL))
#define CONCAT24(a,b) ((uint64_t)(a) << 32 | ((uint64_t)(b) & 0xffffffffULL))
#define CONCAT25(a,b) ((uint64_t)(a) << 40 | ((uint64_t)(b) & 0xffffffffffULL))
#define CONCAT26(a,b) ((uint64_t)(a) << 48 | ((uint64_t)(b) & 0xffffffffffffULL))
#define CONCAT31(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define CONCAT32(a,b) ((uint64_t)(a) << 16 | ((uint64_t)(b) & 0xffffULL))
#define CONCAT33(a,b) ((uint64_t)(a) << 24 | ((uint64_t)(b) & 0xffffffULL))
#define CONCAT34(a,b) ((uint64_t)(a) << 32 | ((uint64_t)(b) & 0xffffffffULL))
#define CONCAT35(a,b) ((uint64_t)(a) << 40 | ((uint64_t)(b) & 0xffffffffffULL))
#define CONCAT41(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define CONCAT42(a,b) ((uint64_t)(a) << 16 | ((uint64_t)(b) & 0xffffULL))
#define CONCAT43(a,b) ((uint64_t)(a) << 24 | ((uint64_t)(b) & 0xffffffULL))
#define CONCAT44(a,b) ((uint64_t)(a) << 32 | ((uint64_t)(b) & 0xffffffffULL))
#define CONCAT51(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define CONCAT52(a,b) ((uint64_t)(a) << 16 | ((uint64_t)(b) & 0xffffULL))
#define CONCAT53(a,b) ((uint64_t)(a) << 24 | ((uint64_t)(b) & 0xffffffULL))
#define CONCAT61(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define CONCAT62(a,b) ((uint64_t)(a) << 16 | ((uint64_t)(b) & 0xffffULL))
#define CONCAT71(a,b) ((uint64_t)(a) << 8 | ((uint64_t)(b) & 0xffULL))
#define SUB11(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB21(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB22(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB31(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB32(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB33(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffULL)
#define SUB41(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB42(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB43(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffULL)
#define SUB44(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffULL)
#define SUB51(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB52(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB53(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffULL)
#define SUB54(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffULL)
#define SUB55(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffULL)
#define SUB61(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB62(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB63(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffULL)
#define SUB64(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffULL)
#define SUB65(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffULL)
#define SUB66(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffffULL)
#define SUB71(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB72(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB73(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffULL)
#define SUB74(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffULL)
#define SUB75(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffULL)
#define SUB76(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffffULL)
#define SUB77(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffffffULL)
#define SUB81(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffULL)
#define SUB82(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffULL)
#define SUB83(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffULL)
#define SUB84(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffULL)
#define SUB85(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffULL)
#define SUB86(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffffULL)
#define SUB87(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffffffULL)
#define SUB88(a,off) (((uint64_t)(a) >> (8*(off))) & 0xffffffffffffffffULL)
#define ZEXT11(a) ((uint64_t)(a))
#define SEXT11(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT12(a) ((uint64_t)(a))
#define SEXT12(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT13(a) ((uint64_t)(a))
#define SEXT13(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT14(a) ((uint64_t)(a))
#define SEXT14(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT15(a) ((uint64_t)(a))
#define SEXT15(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT16(a) ((uint64_t)(a))
#define SEXT16(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT17(a) ((uint64_t)(a))
#define SEXT17(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT18(a) ((uint64_t)(a))
#define SEXT18(a) ((int64_t)((uint64_t)(a) << 56) >> 56)
#define ZEXT22(a) ((uint64_t)(a))
#define SEXT22(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT23(a) ((uint64_t)(a))
#define SEXT23(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT24(a) ((uint64_t)(a))
#define SEXT24(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT25(a) ((uint64_t)(a))
#define SEXT25(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT26(a) ((uint64_t)(a))
#define SEXT26(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT27(a) ((uint64_t)(a))
#define SEXT27(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT28(a) ((uint64_t)(a))
#define SEXT28(a) ((int64_t)((uint64_t)(a) << 48) >> 48)
#define ZEXT33(a) ((uint64_t)(a))
#define SEXT33(a) ((int64_t)((uint64_t)(a) << 40) >> 40)
#define ZEXT34(a) ((uint64_t)(a))
#define SEXT34(a) ((int64_t)((uint64_t)(a) << 40) >> 40)
#define ZEXT35(a) ((uint64_t)(a))
#define SEXT35(a) ((int64_t)((uint64_t)(a) << 40) >> 40)
#define ZEXT36(a) ((uint64_t)(a))
#define SEXT36(a) ((int64_t)((uint64_t)(a) << 40) >> 40)
#define ZEXT37(a) ((uint64_t)(a))
#define SEXT37(a) ((int64_t)((uint64_t)(a) << 40) >> 40)
#define ZEXT38(a) ((uint64_t)(a))
#define SEXT38(a) ((int64_t)((uint64_t)(a) << 40) >> 40)
#define ZEXT44(a) ((uint64_t)(a))
#define SEXT44(a) ((int64_t)((uint64_t)(a) << 32) >> 32)
#define ZEXT45(a) ((uint64_t)(a))
#define SEXT45(a) ((int64_t)((uint64_t)(a) << 32) >> 32)
#define ZEXT46(a) ((uint64_t)(a))
#define SEXT46(a) ((int64_t)((uint64_t)(a) << 32) >> 32)
#define ZEXT47(a) ((uint64_t)(a))
#define SEXT47(a) ((int64_t)((uint64_t)(a) << 32) >> 32)
#define ZEXT48(a) ((uint64_t)(a))
#define SEXT48(a) ((int64_t)((uint64_t)(a) << 32) >> 32)
#define ZEXT55(a) ((uint64_t)(a))
#define SEXT55(a) ((int64_t)((uint64_t)(a) << 24) >> 24)
#define ZEXT56(a) ((uint64_t)(a))
#define SEXT56(a) ((int64_t)((uint64_t)(a) << 24) >> 24)
#define ZEXT57(a) ((uint64_t)(a))
#define SEXT57(a) ((int64_t)((uint64_t)(a) << 24) >> 24)
#define ZEXT58(a) ((uint64_t)(a))
#define SEXT58(a) ((int64_t)((uint64_t)(a) << 24) >> 24)
#define ZEXT66(a) ((uint64_t)(a))
#define SEXT66(a) ((int64_t)((uint64_t)(a) << 16) >> 16)
#define ZEXT67(a) ((uint64_t)(a))
#define SEXT67(a) ((int64_t)((uint64_t)(a) << 16) >> 16)
#define ZEXT68(a) ((uint64_t)(a))
#define SEXT68(a) ((int64_t)((uint64_t)(a) << 16) >> 16)
#define ZEXT77(a) ((uint64_t)(a))
#define SEXT77(a) ((int64_t)((uint64_t)(a) << 8) >> 8)
#define ZEXT78(a) ((uint64_t)(a))
#define SEXT78(a) ((int64_t)((uint64_t)(a) << 8) >> 8)
#define ZEXT88(a) ((uint64_t)(a))
#define SEXT88(a) ((int64_t)((uint64_t)(a) << 0) >> 0)
#define CARRY1(a,b) ((((uint64_t)(a)&0xffULL)+((uint64_t)(b)&0xffULL)) >> 8 & 1)
#define SCARRY1(a,b) (((((int64_t)(a)+(int64_t)(b)) >> 7) ^ ((int64_t)(a) >> 7)) & ~(((int64_t)(a) ^ (int64_t)(b)) >> 7) & 1)
#define SBORROW1(a,b) (((((int64_t)(a)-(int64_t)(b)) >> 7) ^ ((int64_t)(a) >> 7)) & (((int64_t)(a) ^ (int64_t)(b)) >> 7) & 1)
#define CARRY2(a,b) ((((uint64_t)(a)&0xffffULL)+((uint64_t)(b)&0xffffULL)) >> 16 & 1)
#define SCARRY2(a,b) (((((int64_t)(a)+(int64_t)(b)) >> 15) ^ ((int64_t)(a) >> 15)) & ~(((int64_t)(a) ^ (int64_t)(b)) >> 15) & 1)
#define SBORROW2(a,b) (((((int64_t)(a)-(int64_t)(b)) >> 15) ^ ((int64_t)(a) >> 15)) & (((int64_t)(a) ^ (int64_t)(b)) >> 15) & 1)
#define CARRY4(a,b) ((((uint64_t)(a)&0xffffffffULL)+((uint64_t)(b)&0xffffffffULL)) >> 32 & 1)
#define SCARRY4(a,b) (((((int64_t)(a)+(int64_t)(b)) >> 31) ^ ((int64_t)(a) >> 31)) & ~(((int64_t)(a) ^ (int64_t)(b)) >> 31) & 1)
#define SBORROW4(a,b) (((((int64_t)(a)-(int64_t)(b)) >> 31) ^ ((int64_t)(a) >> 31)) & (((int64_t)(a) ^ (int64_t)(b)) >> 31) & 1)
#define CARRY8(a,b) ((((uint64_t)(a)&0xffffffffffffffffULL)+((uint64_t)(b)&0xffffffffffffffffULL)) >> 64 & 1)
#define SCARRY8(a,b) (((((int64_t)(a)+(int64_t)(b)) >> 63) ^ ((int64_t)(a) >> 63)) & ~(((int64_t)(a) ^ (int64_t)(b)) >> 63) & 1)
#define SBORROW8(a,b) (((((int64_t)(a)-(int64_t)(b)) >> 63) ^ ((int64_t)(a) >> 63)) & (((int64_t)(a) ^ (int64_t)(b)) >> 63) & 1)
#define POPCOUNT(a) __builtin_popcountll((uint64_t)(a))
#define LZCOUNT(a) ((a) ? __builtin_clzll((uint64_t)(a)) : 64)
#endif
