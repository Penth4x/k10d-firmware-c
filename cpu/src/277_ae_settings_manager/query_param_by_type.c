/* @k10d query_param_by_type @ 0x1051e200
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from a parameter object based on its type field and returns a non-zero
 *   success flag.
 * summary:
 *   Checks the short at offset 2 of param_3. If it is 4, calls read_table_entry_by_index;
 *   if 3, calls read_u16_from_struct_array; otherwise sets the output to 0. Stores the
 *   result in *param_2 and returns whether the result is non-zero. The specific meaning of
 *   the types and the callees is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_param_by_type(uint32_t param_1,int *param_2,void *param_3)

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
