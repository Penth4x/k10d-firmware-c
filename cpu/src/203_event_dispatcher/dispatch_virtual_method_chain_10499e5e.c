/* @k10d dispatch_virtual_method_chain_10499e5e @ 0x10499e5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Resolves two object pointers via helper calls and invokes virtual methods on them in
 *   sequence.
 * summary:
 *   The function calls find_entry_by_ushort_key twice with different constants (0x8769 and
 *   0x927c) to obtain object pointers. It then performs virtual calls (slot 2) on these
 *   objects, passing arguments derived from param_1 and the first result. A third virtual
 *   call is made conditionally if a specific field in param_1 is non-zero. The return value
 *   is the result of the last virtual call executed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_chain_10499e5e(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = find_entry_by_ushort_key(param_3,0x8769);
  uVar3 = 1;
  if (iVar1 != 0) {
    uVar2 = read_array_element_by_index(iVar1,0);
    iVar1 = find_entry_by_ushort_key(uVar2,0x927c);
    if (iVar1 != 0) {
      iVar5 = 0x48;
      if (*(int *)(param_1 + 0x54) != -1) {
        iVar5 = 0x44;
      }
      iVar4 = **(int **)(iVar5 + param_1);
      iVar1 = (**(code **)(iVar4 + 0x14))
                        ((int)*(short *)(iVar4 + 0x10) + (int)*(int **)(iVar5 + param_1),
                         *(uint32_t *)(iVar1 + 8),param_1 + 0x14);
      if (iVar1 != 0) {
        *(int *)(param_2 + 0xc) = iVar1;
        iVar5 = **(int **)(param_1 + 0x4c);
        uVar3 = (**(code **)(iVar5 + 0x14))
                          ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar5 + 0x10),iVar1,
                           *(uint32_t *)(param_1 + 4));
        if (*(int *)(*(int *)(param_1 + 4) + 0x1b0) != 0) {
          iVar5 = **(int **)(param_1 + 0x50);
          uVar3 = (**(code **)(iVar5 + 0x14))
                            ((int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar5 + 0x10),iVar1);
        }
      }
    }
  }
  return uVar3;
}
