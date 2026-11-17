/* @k10d write_two_struct_fields @ 0x10484a00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into two fields of a struct pointed to by param_1 via a helper.
 * summary:
 *   Calls write_two_bytes_to_offset_0x18_10428364 twice: first with the address of the
 *   field at offset 0x14 in the param_1 struct, then with the value stored at offset 0xc
 *   (treated as a pointer) as the target. Both calls pass param_2 as the second argument.
 *   The role of write_two_bytes_to_offset_0x18_10428364 is unknown, so the specific data
 *   being written is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_struct_fields(int param_1,uint16_t param_2)

{
  write_two_bytes_to_offset_0x18_10428364(param_1 + 0x14,param_2);
  write_two_bytes_to_offset_0x18_10428364(*(int *)(param_1 + 0xc),param_2);
  return;
}
