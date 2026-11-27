/* @k10d init_object_with_table_copy @ 0x10395cd4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by copying a 16-byte table, setting a self-referential pointer,
 *   and calling setup helpers.
 * summary:
 *   The function calls two unnamed initializers, zeroes a byte at offset 0xc4, and copies
 *   16 bytes from a global location (0x100004a4) into the struct at offset 0xbc. It sets
 *   the field at offset 4 to point to offset 8 of the same object. It then calls
 *   init_struct_with_offset_field_10395fe8 and check_two_short_fields_match; if the latter
 *   returns non-zero, it calls forward_six_params_via_helper with two SDRAM pointers
 *   (0x80019e6c, 0x80019c58) and the struct's offset 0xbc. Finally, it calls
 *   call_single_helper_10395f4e and init_object_with_two_ids_10395e66 before returning the
 *   input pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562e10 * init_object_with_table_copy(cls_10562e10 *param_1)

{
  int iVar1;
  int extraout_r4;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_14 [8];
  
  puVar3 = (uint32_t *)auStack_14;
  process_four_param_blocks((uint32_t)param_1);
  param_1->field_0xc4 = 0;
  init_two_sram_objects();
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + (int)&param_1->field_0xbc) = *(uint32_t *)(iVar1 + -0x7ffe5b5c);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  param_1->field_0x4 = (uintptr_t)(&param_1->field_0x8);
  init_struct_with_offset_field_10395fe8(param_1);
  iVar1 = check_two_short_fields_match(param_1);
  if (iVar1 != 0) {
    invoke_virtual_slot2_on_four_objects_10394478();
    *puVar3 = 0x80019e6c/*SDRAM*/;
    puVar3[1] = 0x80019c58/*SDRAM*/;
    forward_six_params_via_helper((void *)(param_1),(uint32_t)(0),(uint32_t)(&param_1->field_0xbc),(uint32_t)(0x8001a080/*SDRAM*/),(uint32_t)(*puVar3),(uint32_t)(puVar3[1]));
    if (extraout_r4 == 2) {
      return param_1;
    }
    if (extraout_r4 == 0) {
      return param_1;
    }
  }
  call_single_helper_10395f4e((uint32_t)(param_1));
  init_object_with_two_ids_10395e66(param_1);
  return param_1;
}
