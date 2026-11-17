/* @k10d check_flag_and_call_helper_104cb608 @ 0x104cb608
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit flag at offset 0x9e and calls one of two helpers based on its value,
 *   storing the result at offset 0x214.
 * summary:
 *   The function branches on the 16-bit value at param_1+0x9e. If zero, it calls
 *   call_two_helpers_on_object_104bd86c with arguments from offsets 0x48 and 0x98;
 *   otherwise it calls call_two_helpers_and_return_104bd840 with the flag value and the
 *   same arguments. The non-zero result is stored as a 1/0 flag at param_1+0x214, and
 *   0xc000a is written to param_1+0x210. The specific subsystem role is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_helper_104cb608(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  if (*(ushort *)(param_1 + 0x9e) == 0) {
    iVar2 = call_two_helpers_on_object_104bd86c(*(int *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x98));
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  else {
    iVar2 = call_two_helpers_and_return_104bd840(*(int *)(param_1 + 0x48),(uint)*(ushort *)(param_1 + 0x9e),
                         *(uint32_t *)(param_1 + 0x98));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  *(uint32_t *)(param_1 + 0x214) = uVar1;
  *(uint32_t *)(param_1 + 0x210) = 0xc000a;
  return;
}
