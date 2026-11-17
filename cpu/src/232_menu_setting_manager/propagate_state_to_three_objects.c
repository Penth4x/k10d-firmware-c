/* @k10d propagate_state_to_three_objects @ 0x104c501e
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Computes a state value from a source object and writes it to three destination objects.
 * summary:
 *   The function calls select_and_activate_entry with two fields from param_1 to obtain a
 *   pointer. It then determines a value (uVar4) based on the field at param_1+0x50,
 *   optionally calling read_byte_at_offset_104c2842 if that field is 1. Finally, it calls
 *   copy_large_struct to copy the pointer to offset 0x34 of param_2, param_3, and param_4,
 *   sets the value at offset 0x18, and clears the byte at offset 0x210 for each of the
 *   three destinations. The specific subsystem (e.g., display, metering) is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t propagate_state_to_three_objects(int param_1,void *param_2,void *param_3,int param_4)

{
  int iVar1;
  uint32_t *puVar2;
  char cVar3;
  uint32_t uVar4;
  uint32_t uStack_c;
  
  puVar2 = (uint32_t *)
           select_and_activate_entry(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x7c));
  uStack_c = 1;
  iVar1 = *(int *)(param_1 + 0x50);
  uVar4 = 2;
  if (iVar1 == 1) {
    cVar3 = read_byte_at_offset_104c2842(puVar2,1);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else if (iVar1 == 0) {
    uVar4 = 2;
  }
  else if (iVar1 == 2) {
    uVar4 = 0;
  }
  else if (iVar1 == 3) {
    uVar4 = 1;
  }
  else {
    uStack_c = 0;
  }
  copy_large_struct((uint32_t *)((int)param_2 + 0x34),puVar2);
  *(uint32_t *)((int)param_2 + 0x18) = uVar4;
  *(uint8_t *)((int)param_2 + 0x210) = 0;
  copy_large_struct((uint32_t *)((int)param_3 + 0x34),puVar2);
  *(uint32_t *)((int)param_3 + 0x18) = uVar4;
  *(uint8_t *)((int)param_3 + 0x210) = 0;
  copy_large_struct((uint32_t *)(param_4 + 0x34),puVar2);
  *(uint32_t *)(param_4 + 0x18) = uVar4;
  *(uint8_t *)(param_4 + 0x210) = 0;
  return uStack_c;
}
