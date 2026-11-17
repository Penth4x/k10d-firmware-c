/* @k10d init_object_from_config @ 0x104f9270
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes object fields at offsets 0x108-0x118 by reading values from a configuration
 *   source and registering sub-objects.
 * summary:
 *   The function calls forward_three_args_to_helper_10459d64 to initialize a sub-structure
 *   at offset 0x118. It retrieves a pointer via get_or_init_sram_buffer_104277bc and reads
 *   four values (keys 0xbb, 0xbc, 10, 0xb) using read_table_entry_field, storing them at
 *   offsets 0x108, 0x10c, 0x110, and 0x114. It then obtains another object via
 *   irq_dispatch_prologue and calls set_if_null_and_report twelve times with keys
 *   0x12-0x1f, passing the address of param_1+4 as the third argument. Returns 1 on
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_from_config(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x118),1,0x1f);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xbb);
  *(uint32_t *)((int)param_1 + 0x108) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xbc);
  *(uint32_t *)((int)param_1 + 0x10c) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,10);
  *(uint32_t *)((int)param_1 + 0x110) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xb);
  *(uint32_t *)((int)param_1 + 0x114) = uVar2;
  uVar2 = irq_dispatch_prologue();
  iVar3 = (int)param_1 + 4;
  set_if_null_and_report(uVar2,0x12,iVar3);
  set_if_null_and_report(uVar2,0x13,iVar3);
  set_if_null_and_report(uVar2,0x14,iVar3);
  set_if_null_and_report(uVar2,0x15,iVar3);
  set_if_null_and_report(uVar2,0x16,iVar3);
  set_if_null_and_report(uVar2,0x17,iVar3);
  set_if_null_and_report(uVar2,0x18,iVar3);
  set_if_null_and_report(uVar2,0x19,iVar3);
  set_if_null_and_report(uVar2,0x1a,iVar3);
  set_if_null_and_report(uVar2,0x1b,iVar3);
  set_if_null_and_report(uVar2,0x1c,iVar3);
  set_if_null_and_report(uVar2,0x1f,iVar3);
  return 1;
}
