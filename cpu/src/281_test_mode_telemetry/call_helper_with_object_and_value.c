/* @k10d call_helper_with_object_and_value @ 0x10522768
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from an object field, gets a value from a helper, and passes both to
 *   another function.
 * summary:
 *   The function dereferences a pointer stored at offset 0x18 within the structure pointed
 *   to by param_1[8]. It calls return_constant_eight_10522352 to obtain an integer value.
 *   Finally, it calls invoke_virtual_slot_two_104af0c8 with the original object pointer,
 *   the dereferenced pointer, and the integer value as arguments. The specific roles of the
 *   callees and the data structures are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_object_and_value(int *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1[8] + 0x18);
  iVar1 = return_constant_eight_10522352();
  invoke_virtual_slot_two_104af0c8(param_1,pvVar2,iVar1);
  return;
}
