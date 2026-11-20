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

uint32_t init_object_from_config(cls_105d4190 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  cls_1059e430 *pcVar3;
  
  forward_three_args_to_helper_10459d64(&param_1->field_0x118,1,0x1f);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xbb);
  param_1->field_0x108 = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xbc);
  param_1->field_0x10c = uVar2;
  uVar2 = read_table_entry_field(pvVar1,10);
  param_1->field_0x110 = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xb);
  param_1->field_0x114 = uVar2;
  uVar2 = irq_dispatch_prologue();
  pcVar3 = &param_1->field_0x4;
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x12),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x13),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x14),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x15),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x16),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x17),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x18),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x19),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x1a),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x1b),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x1c),(uint32_t)(pcVar3));
  set_if_null_and_report((uint32_t)(uVar2),(int)(0x1f),(uint32_t)(pcVar3));
  return 1;
}
