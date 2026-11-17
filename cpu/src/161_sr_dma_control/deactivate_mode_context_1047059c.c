/* @k10d deactivate_mode_context_1047059c @ 0x1047059c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Deactivates a mode context by releasing two resources, invoking virtual cleanup
 *   methods, and resetting state fields.
 * summary:
 *   The function retrieves two resources via get_or_init_sram_buffer_104277bc and
 *   read_table_entry_field (with IDs 0x31 and 0x32), then calls set_flag_with_notify on
 *   both. It accesses a pointer at param_1+0x54 and calls set_flag2_with_notify, then
 *   modifies a field at param_1+0x44 via eventflag_clr_flg. It performs two virtual calls
 *   on an object pointed to by *(param_1+0x4c)+4 (slots at offsets 0x44 and 0x2c), likely
 *   for cleanup or notification. Finally, it releases the resources using
 *   clear_flag_with_notify and returns 1. The pattern suggests a teardown or deactivation
 *   sequence for a subsystem context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t deactivate_mode_context_1047059c(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  pvVar1 = (void *)read_table_entry_field(pvVar1,0x31);
  set_flag_with_notify(pvVar1);
  check_kernel_call_success_10459fea();
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  pvVar2 = (void *)read_table_entry_field(pvVar2,0x32);
  set_flag_with_notify(pvVar2);
  check_kernel_call_success_10459fea();
  set_flag2_with_notify(*(void **)(param_1 + 0x54));
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),2);
  *(uint32_t *)(param_1 + 0x50) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  (**(code **)(iVar3 + 0x44))(*(int *)(param_1 + 0x4c) + (int)*(short *)(iVar3 + 0x40),0x14,1,0);
  twai_flg_obj((uint32_t *)(param_1 + 0x44),2,(void *)0x0,_DAT_105a2af0/*ROM*/);
  iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  (**(code **)(iVar3 + 0x2c))(*(int *)(param_1 + 0x4c) + (int)*(short *)(iVar3 + 0x28));
  check_kernel_call_success_10459fea();
  clear_flag_with_notify(*(void **)(param_1 + 0x54));
  check_kernel_call_success_10459fea();
  clear_flag_with_notify(pvVar2);
  check_kernel_call_success_10459fea();
  clear_flag_with_notify(pvVar1);
  return 1;
}
