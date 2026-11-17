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

uint32_t initialize_struct_field_offsets(void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  iVar2 = read_table_entry_field(pvVar1,0xc1);
  *(int *)((int)param_1 + 0x14) = iVar2;
  *(int *)((int)param_1 + 0x18) = iVar2 + 0x10;
  *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x14) + 0x14;
  *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x14) + 0x30;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x14) + 0x4c;
  *(int *)((int)param_1 + 0x28) = *(int *)((int)param_1 + 0x14) + 0x68;
  *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x14) + 0x6c;
  *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x14) + 0x70;
  *(int *)((int)param_1 + 0x34) = *(int *)((int)param_1 + 0x14) + 0x74;
  *(int *)((int)param_1 + 0x38) = *(int *)((int)param_1 + 0x14) + 0x78;
  *(int *)((int)param_1 + 0x3c) = *(int *)((int)param_1 + 0x14) + 0x7c;
  *(int *)((int)param_1 + 0x40) = *(int *)((int)param_1 + 0x14) + 0x80;
  return 1;
}
