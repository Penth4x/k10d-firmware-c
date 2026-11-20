/* @k10d dispatch_two_byte_pair @ 0x1052bebe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Selects a 2-byte constant based on a flag, passes it to a helper, then forwards the
 *   result to a callback.
 * summary:
 *   The function checks the byte at offset 0x2b70 in the object (param_1). It calls
 *   get_shared_sram_buffer to obtain a value (uVar1) and selects either 0x105f9ffc or
 *   0x105f9fec as uVar2. It then calls dispatch_by_two_state_flags with uVar1, two zero-
 *   initialized stack variables, and uVar2. Finally, it invokes the function pointer at
 *   0x104de008 with param_2 and the stack variables, returning 1. The specific camera
 *   subsystem role is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_byte_pair(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_10 = 0;
  uStack_c = 0;
  if (*(char *)(param_1 + 0x2b70) == '\0') {
    uVar1 = get_shared_sram_buffer();
    uVar2 = 0x105f9ffc/*ROM*/;
  }
  else {
    uVar1 = get_shared_sram_buffer();
    uVar2 = 0x105f9fec/*ROM*/;
  }
  dispatch_by_two_state_flags((int)(uVar1),(uint32_t *)(&uStack_10),(uint32_t *)(&uStack_c),(void *)(uVar2));
  (*(code *)0x104de008/*ROM*/)(param_2,uStack_10,uStack_c,uStack_c);
  return 1;
}
