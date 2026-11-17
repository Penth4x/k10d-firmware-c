/* @k10d copy_rodata_and_dispatch @ 0x1047fe34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Copies a 128-byte block from ROM to the stack, calls a validation routine, and if
 *   successful, initializes and dispatches a data structure to param_3.
 * summary:
 *   The function first copies 0x80 bytes from 0x105aaffc to a local stack buffer. It then
 *   calls call_helper_and_store_result_10480496 with param_1, param_2, and this buffer. If
 *   that call returns true, it calls copy_string_with_length_limit to populate a local
 *   structure, copies specific fields to param_3, and invokes a sequence of helper
 *   functions (alloc_and_init_small_struct_1045c524, get_or_init_global_buffer,
 *   write_six_fields_to_param4, copy_eight_bytes_1045c584, free_heap_if_flag_set_1045c56c)
 *   that appear to initialize and process a 16-byte object. The specific camera subsystem
 *   is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool copy_rodata_and_dispatch(int param_1,void *param_2,void *param_3)

{
  bool bVar2;
  uint32_t uVar1;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_240 [16];
  uint32_t auStack_228 [128];
  char acStack_28 [13];
  uint8_t uStack_1b;
  ushort uStack_1a;
  ushort uStack_18;
  uint32_t uStack_14;
  uint16_t auStack_10 [4];
  int iVar4;
  
  puVar5 = auStack_240;
  iVar4 = 0x218;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)((int)auStack_228 + iVar4 + -4) = *(uint32_t *)(iVar4 + 0x105aaffc/*ROM*/);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  bVar2 = call_helper_and_store_result_10480496(param_1,param_2,auStack_228);
  if (bVar2) {
    copy_string_with_length_limit(param_3,acStack_28);
    *(uint8_t *)((int)param_3 + 0xd) = uStack_1b;
    *(uint32_t *)((int)param_3 + 0x10) = uStack_14;
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],puVar5[0xb],puVar5[0xf]);
    uVar1 = get_or_init_global_buffer();
    write_six_fields_to_param4(uVar1,(uint)uStack_1a,(uint)uStack_18,auStack_10);
    copy_eight_bytes_1045c584((uint16_t *)((int)param_3 + 0x14),auStack_10);
    free_heap_if_flag_set_1045c56c(auStack_10,2);
  }
  return bVar2;
}
