/* @k10d get_field_from_context @ 0x104f2d38
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Fetches a context object and reads a field at offset 0x28, passing it to a helper with
 *   param_2.
 * summary:
 *   Calls initialize_singleton_object_1045d6a0 to obtain a pointer (likely a context or
 *   singleton). It then dereferences the pointer at offset 0x28 and passes that value along
 *   with param_2 to compute_two_byte_result. The return value of compute_two_byte_result is
 *   returned directly. The specific roles of the callees and the data at offset 0x28 are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_from_context(uint32_t param_1,void *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  uVar2 = compute_two_byte_result((int *)(*(uint32_t *)(iVar1 + 0x28)),(ushort *)(param_2));
  return uVar2;
}
