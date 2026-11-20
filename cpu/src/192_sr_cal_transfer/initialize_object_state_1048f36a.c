/* @k10d initialize_object_state_1048f36a @ 0x1048f36a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Populates a 0x38-byte object structure with pointers and values from various
 *   subsystems.
 * summary:
 *   The function writes to multiple offsets of the object pointed to by param_1. It calls
 *   get_or_init_sram_buffer_104277bc and get_or_create_singleton_object_104fb12e to obtain
 *   base pointers, then uses read_table_entry_field to retrieve specific fields (indices
 *   0xa9, 0xa2, 0xa3, 0x30, 0x4c) from the first pointer. It also reads from a pointer at
 *   offset 0x2c and a pointer returned by get_or_create_singleton_object_10485138. Finally,
 *   it calls three functions (clear_four_status_flags, reset_object_fields_to_defaults,
 *   call_subroutine_with_zero) with the retrieved pointers as arguments and sets two byte
 *   fields at the end of the structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_state_1048f36a(cls_105b3fbc *param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  param_1->field_0x8 = (uintptr_t)(pvVar1);
  iVar2 = get_or_create_singleton_object_104fb12e();
  param_1->field_0x2c = iVar2;
  uVar3 = read_table_entry_field((void *)(param_1->field_0x8),(int)(0xa9));
  param_1->field_0xc = uVar3;
  uVar3 = read_table_entry_field((void *)(param_1->field_0x8),(int)(0xa2));
  param_1->field_0x10 = uVar3;
  uVar3 = read_table_entry_field((void *)(param_1->field_0x8),(int)(0xa3));
  param_1->field_0x14 = uVar3;
  uVar3 = read_table_entry_field((void *)(param_1->field_0x8),(int)(0x30));
  param_1->field_0x20 = uVar3;
  uVar3 = read_table_entry_field((void *)(param_1->field_0x8),(int)(0x4c));
  param_1->field_0x1c = uVar3;
  param_1->field_0x30 = *(uint32_t *)(param_1->field_0x2c + 0x18);
  iVar2 = get_or_create_singleton_object_10485138();
  param_1->field_0x18 = *(uint32_t *)(iVar2 + 0x10);
  clear_four_status_flags(param_1->field_0x10);
  reset_object_fields_to_defaults(param_1->field_0x14);
  call_subroutine_with_zero(param_1->field_0x10);
  param_1->field_0x35 = 2;
  param_1->field_0x34 = 0;
  return 1;
}
