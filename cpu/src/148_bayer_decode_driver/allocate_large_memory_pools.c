/* @k10d allocate_large_memory_pools @ 0x1046a524
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Allocates three large memory blocks from the system heap and stores their pointers in
 *   global variables.
 * summary:
 *   The function calls get_system_heap and mempool_get_block three times to allocate blocks
 *   of sizes 0x880000, 0x96000, and 0x96000. The resulting pointers are stored in globals
 *   _DAT_800042c0, _DAT_800042c4, and _DAT_800042c8. It also writes two 16-bit values from
 *   ROM to offsets 0x260 and 0x262 of param_1, and calls copy_0x28c3_bytes_to_low_memory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void allocate_large_memory_pools(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  _DAT_800042c0/*SDRAM*/ = mempool_get_block(pvVar1,(void *)0x880000,0);
  pvVar1 = (void *)get_system_heap();
  _DAT_800042c4/*SDRAM*/ = mempool_get_block(pvVar1,(void *)0x96000,0);
  pvVar1 = (void *)get_system_heap();
  _DAT_800042c8/*SDRAM*/ = mempool_get_block(pvVar1,(void *)0x96000,0);
  *(uint16_t *)((int)param_1 + 0x260) = DAT_10547398/*ROM*/;
  *(uint16_t *)((int)param_1 + 0x262) = DAT_1054739a/*ROM*/;
  _DAT_800042d0/*SDRAM*/ = DAT_1054739c/*ROM*/;
  copy_0x28c3_bytes_to_low_memory();
  return;
}
