/* @k10d call_two_helpers_with_stack_buffer @ 0x104a4864
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing a 4-byte stack buffer as the second argument to
 *   both.
 * summary:
 *   The function allocates a 4-byte local buffer on the stack. It first calls
 *   read_four_status_bytes with param_1 and the buffer, then calls
 *   copy_bytes_to_struct_field with param_2, the buffer, and the constant 4. The buffer
 *   likely serves as an intermediate data exchange between the two callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_stack_buffer(uint32_t param_1,int param_2)

{
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  read_four_status_bytes(param_1,auStack_c);
  copy_bytes_to_struct_field(param_2,auStack_c,4);
  return;
}
