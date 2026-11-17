/* @k10d forward_five_args_to_helper_1045a57a @ 0x1045a57a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Passes five incoming arguments through to lookup_table_entry_by_index_1045a478 and
 *   returns its 16-bit result as a 32-bit value.
 * summary:
 *   A thin one-call wrapper in the rtos_wrappers_and_heap module. It forwards r4-r7 and a
 *   stack byte to lookup_table_entry_by_index_1045a478, then zero-extends the returned
 *   ushort into r4. No local state is modified beyond the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint forward_five_args_to_helper_1045a57a(void)

{
  uint32_t r4_in;
  ushort uVar1;
  int r5_in;
  uint r6_in;
  int r7_in;
  byte in_stack_00000003;
  
  uVar1 = lookup_table_entry_by_index_1045a478(r4_in,r5_in,r6_in,r7_in,in_stack_00000003);
  return (uint)uVar1;
}
