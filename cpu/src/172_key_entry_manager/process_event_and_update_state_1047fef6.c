/* @k10d process_event_and_update_state_1047fef6 @ 0x1047fef6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool process_event_and_update_state_1047fef6(int param_1,uint32_t param_2,void *param_3)

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
    *(uint32_t *)((int)auStack_228 + iVar4 + -4) = *(uint32_t *)(&DAT_105ab214/*ROM*/ + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  bVar2 = store_result_and_check_zero_104804bc(param_1,param_2,auStack_228);
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
