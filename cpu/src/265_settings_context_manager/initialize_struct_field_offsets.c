/* @k10d initialize_struct_field_offsets @ 0x10501b30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Populates a series of pointer fields in a struct with offsets relative to a base
 *   address obtained from a helper function.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to get a base pointer and
 *   read_table_entry_field to derive an initial value. It then writes this value and a
 *   series of calculated offsets (0x10, 0x14, 0x30, etc.) into consecutive 4-byte fields of
 *   the object pointed to by param_1, starting at offset 0x14. This appears to be an
 *   initialization routine for a data structure containing multiple pointers or indices.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_struct_field_offsets(cls_105d4d68 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  iVar2 = read_table_entry_field(pvVar1,0xc1);
  param_1->field_0x14 = iVar2;
  param_1->field_0x18 = iVar2 + 0x10;
  param_1->field_0x1c = param_1->field_0x14 + 0x14;
  param_1->field_0x20 = param_1->field_0x14 + 0x30;
  param_1->field_0x24 = param_1->field_0x14 + 0x4c;
  param_1->field_0x28 = param_1->field_0x14 + 0x68;
  param_1->field_0x2c = param_1->field_0x14 + 0x6c;
  param_1->field_0x30 = param_1->field_0x14 + 0x70;
  param_1->field_0x34 = param_1->field_0x14 + 0x74;
  param_1->field_0x38 = param_1->field_0x14 + 0x78;
  param_1->field_0x3c = param_1->field_0x14 + 0x7c;
  param_1->field_0x40 = param_1->field_0x14 + 0x80;
  return 1;
}
