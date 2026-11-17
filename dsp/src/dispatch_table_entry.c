/* @k10d dispatch_table_entry @ 0x000ce3dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies a 48-byte table from rodata to the stack and invokes a function pointer selected
 *   by an index.
 * summary:
 *   The function performs a backward loop to copy 48 bytes (12 words) from the read-only
 *   data section (starting at 0xfae7c) into a local stack buffer. It then checks if the
 *   global variable DAT_0003c21f is within the range [0x20, 0x2f]. If valid, it treats the
 *   stack buffer as an array of function pointers and calls the entry at the index
 *   specified by DAT_0003c21f. No other callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_table_entry(void)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_cc [48];
  int iVar3;
  
  iVar3 = 0x40;
  do {
    iVar2 = iVar3 + -4;
    bVar1 = 3 < iVar3;
    *(uint32_t *)((int)auStack_cc + iVar3 + 0x7c) = *(uint32_t *)(iVar3 + 0xfae7c);
    iVar3 = iVar2;
  } while (bVar1 && iVar2 != 0);
  if ((0x1f < DAT_0003c21f) && ((int)(DAT_0003c21f - 0x20) < 0x10)) {
    (*(code *)auStack_cc[DAT_0003c21f])();
  }
  return;
}
