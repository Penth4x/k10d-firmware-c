/* @k10d call_helper_on_two_offsets_10484910 @ 0x10484910
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on two fields of a struct: one at offset 0x14 and one at offset 0xc.
 * summary:
 *   The function takes a struct pointer (param_1) and a value (param_2). It calls
 *   write_magic_to_offset_0x340 twice: first with the field at offset 0x14, then with the
 *   field at offset 0xc. No other operations are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_two_offsets_10484910(int param_1,int param_2)

{
  write_magic_to_offset_0x340(param_1 + 0x14,param_2);
  write_magic_to_offset_0x340(*(int *)(param_1 + 0xc),param_2);
  return;
}
