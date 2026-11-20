/* @k10d dispatch_object_state_change_10372604 @ 0x10372604
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object sub-structure and updates local state flags
 *   before calling a helper.
 * summary:
 *   The function branches on param_2: if non-zero, it calls three cleanup/initialization
 *   helpers (copy_config_fields_to_struct, copy_struct_bytes_to_sram,
 *   copy_status_flags_to_buffer) and adjusts the base pointer offset. It then performs a
 *   virtual call (slot 2) on an object located at an offset within param_1. Finally, it
 *   sets a local integer to 3 and a byte to DAT_800043a0, passing these along with param_1
 *   to forward_params_to_helper_1036c258, returning true if that call returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_object_state_change_10372604(void *param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint32_t *puVar3;
  uint8_t local_14 [8];
  
  puVar3 = (uint32_t *)local_14;
  puVar2 = local_14;
  if (param_2 == 0) {
    iVar1 = (int)param_1 + 0x294;
  }
  else {
    copy_config_fields_to_struct((int)param_1);
    copy_struct_bytes_to_sram(param_1);
    copy_status_flags_to_buffer((int)param_1 + 0x4a8);
    iVar1 = (int)param_1 + 0x80;
    puVar3 = (uint32_t *)puVar2;
  }
  (((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[2].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0x14)))[2].adj + iVar1);
  write_ten_fields_to_subobject((int)param_1);
  *puVar3 = 3;
  *(uint8_t *)((int)puVar3 + 7) = DAT_800043a0/*SDRAM*/;
  iVar1 = forward_params_to_helper_1036c258(param_1,(int)param_1 + 0x4a8,-0x7ffe7fa8,iVar1,*puVar3,
                       *(uint8_t *)((int)puVar3 + 7));
  return iVar1 == 1;
}
