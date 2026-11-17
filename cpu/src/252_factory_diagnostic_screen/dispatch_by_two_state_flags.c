/* @k10d dispatch_by_two_state_flags @ 0x104e4844
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Selects one of two offsets based on two probe results and calls a virtual method with
 *   the selected value.
 * summary:
 *   The function initializes two output pointers to zero. It calls
 *   compare_null_terminated_strings twice with different RAM addresses (0x80010bac and
 *   0x80010bb4) to determine an index (4 or 6). It then dereferences a pointer at param_1 +
 *   0x54 + index*4 and invokes the function at that address, passing the initialized
 *   pointers as arguments. The role of the specific subsystem is unclear without more
 *   context on the RAM addresses or the virtual method.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_two_state_flags(int param_1,uint32_t *param_2,uint32_t *param_3,void *param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = compare_null_terminated_strings(param_4,(void *)pvRam80010bac);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  else {
    iVar1 = compare_null_terminated_strings(param_4,(void *)pvRam80010bb4);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 6;
  }
  uVar2 = (*(code *)0x104e652e/*ROM*/)(*(uint32_t *)(param_1 + 0x54 + iVar1 * 4),param_2,param_3);
  return uVar2;
}
