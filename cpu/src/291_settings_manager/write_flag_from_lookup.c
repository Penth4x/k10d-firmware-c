/* @k10d write_flag_from_lookup @ 0x1053243c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Looks up a value for param_2 and writes a boolean result to an object field.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0 to obtain a short value. Tests if
 *   that value is non-zero and passes the boolean result, along with the constant 0xc2, to
 *   field_setter. The target of the write is the integer located at offset 0x1c of the
 *   object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_flag_from_lookup(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = read_u16_from_struct_array(param_2,0);
  field_setter(*(int *)(param_1 + 0x1c),0xc2,sVar1 != 0);
  return;
}
