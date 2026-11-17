/* @k10d dispatch_on_mode_field_104bb9c2 @ 0x104bb9c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 4-state mode field at offset 0x2c of the object and dispatches to one of four
 *   handler functions.
 * summary:
 *   The function loads an integer from param_1+0x2c and uses it as a switch index. Values
 *   0, 1, and 3 call check_field_at_offset_0x40_positive,
 *   check_field_at_offset_0x44_positive, and compare_offset_to_helper_result respectively,
 *   passing the object pointer. Value 2 calls check_index_less_than_count with no
 *   arguments. The return value is the result of the selected handler, defaulting to 0 if
 *   the field holds an unrecognized value. The specific camera subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_on_mode_field_104bb9c2(void *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)((int)param_1 + 0x2c);
  uVar1 = 0;
  if (iVar2 == 0) {
    bVar3 = check_field_at_offset_0x40_positive((int)param_1);
    uVar1 = (uint)bVar3;
  }
  else if (iVar2 == 1) {
    bVar3 = check_field_at_offset_0x44_positive(param_1);
    uVar1 = (uint)bVar3;
  }
  else if (iVar2 == 2) {
    uVar1 = check_index_less_than_count((uint32_t *)__frv_reg_unset(4));
  }
  else if (iVar2 == 3) {
    bVar3 = compare_offset_to_helper_result(param_1);
    uVar1 = (uint)bVar3;
  }
  return uVar1;
}
