/* @k10d transmit_buffer_segment @ 0x1053e144
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies a data segment into a fixed-size buffer, pads the remainder, and invokes a
 *   virtual send method.
 * summary:
 *   The function reads a buffer pointer from the object at offset 0x70, copies param_4
 *   bytes from param_3 into the buffer using memcpy_bytes, and zero-fills the remaining
 *   space up to 0x200 bytes using fill_byte_array. It then calls a virtual method (slot 2)
 *   on the object at offset 0x5c, passing the buffer pointer and other parameters. If the
 *   virtual call returns -1000, it sets bit 0 of a 16-bit field at offset 0x64; other non-
 *   zero returns indicate a different error state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t transmit_buffer_segment(int param_1,uint32_t param_2,void *param_3,void *param_4)

{
  ushort *puVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x70);
  memcpy_bytes((void *)(iVar3 + 4),param_3,(int)param_4);
  fill_byte_array((void *)(iVar3 + 4 + (int)param_4),0,0x200 - (int)param_4);
  iVar3 = (((vtbl_entry*)(param_1))[11].fn)(*(uint32_t *)(param_1 + 0x60),param_2,1,iVar3 + 4);
  uVar2 = 0;
  if (iVar3 != 0) {
    if (iVar3 == -1000) {
      puVar1 = (ushort *)(*(int *)(param_1 + 100) + 0xe);
      *puVar1 = *puVar1 | 1;
      uVar2 = 0xfffffffa;
    }
    else {
      uVar2 = 0xfffffffb;
    }
  }
  return uVar2;
}
