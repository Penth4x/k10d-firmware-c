/* @k10d init_0x142_byte_buffer @ 0x10513b58
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x142-byte buffer if param_1 is NULL, then zeroes 16 two-byte fields
 *   at offsets 0x00-0x0e and 0xa0-0xae and sets the word at 0x140 to 1.
 * summary:
 *   Takes a pointer; if it is NULL it calls heap_alloc(0x142) and uses the returned pointer
 *   (otherwise uses the passed pointer). It writes 1 to the 16-bit field at offset 0x140,
 *   then loops 15 times (iVar2=0xf) clearing 15 pairs of 16-bit words at offsets 0x00..0x0e
 *   and 0xa0..0xae (10-byte stride). No other callees; no MMIO or camera-subsystem behavior
 *   is visible, so the role is a generic object/buffer initializer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_0x142_byte_buffer(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x142), param_1 != (void *)0x0)) {
    *(uint16_t *)((int)param_1 + 0x140) = 1;
    iVar2 = 0xf;
    iVar1 = 0;
    do {
      *(uint16_t *)(iVar1 + (int)param_1) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0xa0) = 0;
      *(uint16_t *)(iVar1 + 2 + (int)param_1) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0xa2) = 0;
      *(uint16_t *)(iVar1 + 4 + (int)param_1) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0xa4) = 0;
      *(uint16_t *)(iVar1 + 6 + (int)param_1) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0xa6) = 0;
      *(uint16_t *)(iVar1 + 8 + (int)param_1) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0xa8) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 10;
    } while (-1 < iVar2);
  }
  return;
}
