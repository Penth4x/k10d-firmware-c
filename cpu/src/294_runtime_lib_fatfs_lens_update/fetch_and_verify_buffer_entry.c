/* @k10d fetch_and_verify_buffer_entry @ 0x10542640
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, iteratively fetches data via a helper, and verifies a computed
 *   value against two target parameters.
 * summary:
 *   Allocates a 0x2a0-byte buffer using alloc_pool2_block. In a loop, it calls
 *   process_32_byte_record_stream_10539d34 to populate the buffer and reads a 32-bit value
 *   from the buffer (byte-swapped). If this value matches param_3, it updates *param_4 with
 *   a byte-swapped value and calls write_data_block_to_buffer. If it matches param_2 and a
 *   specific flag bit is set, it calls send_two_word_command_pair. The buffer is freed via
 *   release_heap_block_1047f9bc upon exit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int fetch_and_verify_buffer_entry(void *param_1,uint param_2,uint param_3,uint *param_4)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_38 [4];
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  uint *puStack_28;
  uint uStack_24;
  
  puVar5 = (uint32_t *)auStack_38;
  uStack_24 = 1;
  pvVar1 = (void *)alloc_pool2_block((void *)0x2a0);
  if (pvVar1 == (void *)0x0) {
    iVar2 = -0xc;
  }
  else {
    while( true ) {
      uVar4 = uStack_24;
      uVar3 = *param_4;
      puStack_28 = &uStack_34;
      *puVar5 = (uint32_t)(uintptr_t)pvVar1;
      iVar2 = process_32_byte_record_stream_10539d34(param_1,uVar3,uVar4,(int *)&uStack_34,(void *)*puVar5);
      if (iVar2 != 0) break;
      iVar2 = iStack_2c + -1;
      uVar4 = ((int)(uint)*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x14) >> 8 |
              (*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x14) & 0xff) << 8) << 0x10 |
              (*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x1a) & 0xff) << 8 |
              (int)(uint)*(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x1a) >> 8;
      if ((*(int *)((int)param_1 + 0x48) == 4) && (uVar4 == 0)) {
        uVar4 = *(uint *)((int)param_1 + 0x28);
      }
      if (uVar4 == param_3) {
        *(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x1a) =
             (ushort)((*param_4 & 0xffff) << 8) | (ushort)((*param_4 & 0xffff) >> 8);
        *(ushort *)((int)pvVar1 + iVar2 * 0x20 + 0x14) =
             (ushort)((*param_4 >> 0x10) << 8) | (ushort)(byte)(*param_4 >> 0x18);
        iVar2 = write_data_block_to_buffer(param_1,(int *)puStack_28,pvVar1);
        if (iVar2 != 0) goto LAB_1054274c;
        *param_4 = uStack_34;
        uStack_24 = iStack_30 + iStack_2c;
      }
      else {
        if (((uVar4 != param_2) && ((*(byte *)((int)pvVar1 + iVar2 * 0x20 + 0xb) & 0x10) != 0)) &&
           (iVar2 = send_two_word_command_pair(param_1,uVar4,*param_4), iVar2 != 0)) goto LAB_1054274c;
        uStack_24 = iStack_30 + iStack_2c;
      }
    }
    if (iVar2 == -2) {
      iVar2 = 0;
    }
LAB_1054274c:
    release_heap_block_1047f9bc(pvVar1);
  }
  return iVar2;
}
