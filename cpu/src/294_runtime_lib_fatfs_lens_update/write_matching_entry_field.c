/* @k10d write_matching_entry_field @ 0x10542762
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, iterates entries via a helper, and writes byte-swapped values into
 *   the entry whose 32-bit field matches a target.
 * summary:
 *   Allocates a 0x2a0-byte buffer via alloc_pool2_block. It loops over entries (stride
 *   0x20) using process_32_byte_record_stream_10539d34 to fetch/advance state. When the
 *   32-bit value composed from offsets 0x14 and 0x1a equals param_3, it stores byte-swapped
 *   halves of param_4 into those offsets and calls write_data_block_to_buffer to commit.
 *   The buffer is freed via release_heap_block_1047f9bc on exit. No firmware-specific
 *   strings or verified names appear in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_matching_entry_field(void *param_1,int param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_3c [4];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_c;
  
  puVar4 = (uint32_t *)auStack_3c;
  pvVar1 = (void *)alloc_pool2_block((void *)0x2a0);
  if (pvVar1 == 0) {
    iVar2 = -0xc;
  }
  else {
    uVar3 = 1;
    if (param_2 != *(int *)((int)param_1 + 0x28)) {
      uVar3 = 3;
    }
    uStack_28 = (param_4 & 0xffff) << 8 | (int)(param_4 & 0xffff) >> 8;
    uStack_2c = (int)(param_4 >> 0x10) >> 8 | (param_4 >> 0x10) << 8;
    iStack_c = param_2;
    while( true ) {
      *puVar4 = (uintptr_t)(pvVar1);
      iVar2 = process_32_byte_record_stream_10539d34(param_1,iStack_c,uVar3,&iStack_38,(void *)*puVar4);
      if (iVar2 != 0) break;
      iVar2 = iStack_30 + -1;
      if ((((int)(uint)*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x14) >> 8 |
           (*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x14) & 0xff) << 8) << 0x10 |
          (*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x1a) & 0xff) << 8 |
          (int)(uint)*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x1a) >> 8) == param_3) {
        *(short *)((int)pvVar1 + iVar2 * 0x20 + 0x1a) = (short)uStack_28;
        *(short *)((int)pvVar1 + iVar2 * 0x20 + 0x14) = (short)uStack_2c;
        iVar2 = write_data_block_to_buffer(param_1,&iStack_38,pvVar1);
        if (iVar2 != 0) goto LAB_1054283c;
        iStack_c = iStack_38;
      }
      uVar3 = iStack_34 + iStack_30;
    }
    if (iVar2 == -2) {
      iVar2 = 0;
    }
LAB_1054283c:
    release_heap_block_1047f9bc(pvVar1);
  }
  return iVar2;
}
