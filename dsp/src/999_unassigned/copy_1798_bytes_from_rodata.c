/* @k10d copy_1798_bytes_from_rodata @ 0x000d55ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies 1798 bytes from a source region at offset 0xf8273 to a destination region at
 *   offset 0x3ebff.
 * summary:
 *   The function performs a byte-wise backward copy of 0x706 (1798) bytes. It reads from
 *   addresses starting at 0xf8273 and writes to addresses starting at 0x3ebff, decrementing
 *   both pointers until the counter reaches zero. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_1798_bytes_from_rodata(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x706;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)(iVar2 + 0x3ebff) = *(uint8_t *)(iVar2 + 0xf8273);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
