/* @k10d dispatch_by_type_field_1051ddee @ 0x1051ddee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit type field at offset 2 of param_3 and calls a type-specific helper to
 *   fill param_2.
 * summary:
 *   Checks the short at param_3+2. If it is 4, calls read_table_entry_by_index(param_3,0)
 *   and stores the result in *param_2. If it is 3, calls
 *   read_u16_from_struct_array(param_3,0), stores the 16-bit result in *param_2, and
 *   returns true if non-zero. Otherwise sets *param_2 to 0 and returns false. The return
 *   value indicates whether a non-zero value was produced.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_by_type_field_1051ddee(uint32_t param_1,uint *param_2,void *param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (*(short *)((int)param_3 + 2) == 4) {
    uVar1 = read_table_entry_by_index(param_3,0);
    *param_2 = uVar1;
  }
  else if (*(short *)((int)param_3 + 2) == 3) {
    uVar2 = read_u16_from_struct_array((int)param_3,0);
    *param_2 = (uint)uVar2;
    uVar1 = (uint)uVar2;
  }
  else {
    *param_2 = 0;
  }
  return uVar1 != 0;
}
