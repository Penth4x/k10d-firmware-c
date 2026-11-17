/* @k10d set_param_and_dispatch_event @ 0x1046fd60
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Sets a value (3 or 0xff) on an object field and dispatches a derived event with the
 *   second parameter.
 * summary:
 *   The function selects a value based on whether param_2 is zero (0xff if zero, otherwise
 *   3) and passes it to call_helper_with_stack_param_10462cb2 along with a pointer from
 *   param_1+0x2c. It then calls get_or_init_sram_buffer_104277bc to get a pointer, passes
 *   that pointer and 0x7f to read_table_entry_field, and finally calls
 *   set_bit_in_mmio_register with the result and param_2. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_param_and_dispatch_event(int param_1,int param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  
  uVar2 = 3;
  if (param_2 == 0) {
    uVar2 = 0xff;
  }
  call_helper_with_stack_param_10462cb2(*(int **)(param_1 + 0x2c),uVar2);
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0x7f);
  set_bit_in_mmio_register(uVar2,param_2);
  return;
}
