/* @k10d copy_83_bytes_from_rodata @ 0x000d560c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies 83 bytes from a fixed source address into a destination buffer starting at
 *   DAT_0003f307.
 * summary:
 *   The function executes a loop that iterates 83 times (0x53 down to 0). In each
 *   iteration, it reads a byte from the address 0xf897b + index and writes it to the
 *   address DAT_0003f307 + index. There are no callees or external side effects visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_83_bytes_from_rodata(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x53;
  do {
    iVar1 = iVar2 + -1;
    (&DAT_0003f307)[iVar2] = *(uint8_t *)(iVar2 + 0xf897b);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
