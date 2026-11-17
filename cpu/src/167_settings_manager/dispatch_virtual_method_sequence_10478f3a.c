/* @k10d dispatch_virtual_method_sequence_10478f3a @ 0x10478f3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of virtual methods on an object pointer stored in a struct, passing
 *   a string parameter and a computed offset.
 * summary:
 *   The function accesses a pointer at offset 0x14 of param_1 and calls two helper
 *   functions (call_with_offset_lock_10480e32, call_handler_with_lock_10480e6a) with fields
 *   from param_1. It then performs a virtual call via the vtable at offset 0x2c. If
 *   successful, it calculates a this-adjustment from offset 0x40, calls count_string_bytes
 *   on param_2, and performs another virtual call via offset 0x44. Finally, it calls a
 *   third virtual method via offset 0x34 and returns the result of the second virtual call,
 *   or calls check_and_cleanup_on_success and returns 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_virtual_method_sequence_10478f3a(int param_1,char *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  call_with_offset_lock_10480e32(*(void **)(param_1 + 0x14),*(void **)(param_1 + 0xc));
  call_handler_with_lock_10480e6a(*(uint32_t *)(param_1 + 0x14),*(uint32_t *)(param_1 + 8));
  iVar4 = **(int **)(param_1 + 0x14);
  iVar4 = (**(code **)(iVar4 + 0x2c))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar4 + 0x28),
                     *(uint32_t *)(param_1 + 0xc),0,&uStack_c);
  if (iVar4 != 0) {
    piVar3 = *(int **)(param_1 + 0x14);
    iVar2 = *piVar3;
    sVar1 = *(short *)(iVar2 + 0x40);
    iVar4 = count_string_bytes(param_2);
    iVar4 = (**(code **)(iVar2 + 0x44))((int)piVar3 + (int)sVar1,uStack_c,param_2,iVar4);
    iVar2 = **(int **)(param_1 + 0x14);
    (**(code **)(iVar2 + 0x34))
              ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x30),uStack_c);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  check_and_cleanup_on_success(param_1);
  return 0;
}
