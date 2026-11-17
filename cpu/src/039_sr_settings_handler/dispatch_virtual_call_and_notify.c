/* @k10d dispatch_virtual_call_and_notify @ 0x103914ea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 039_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Initializes a local buffer, invokes a virtual method on an object pointer, and calls a
 *   helper with a struct field.
 * summary:
 *   Sets three global variables (uRam8001986c=5, uRam80019870=0, uRam80019874=0). Reads a
 *   pointer from param_1+0x2c48; if non-null, copies 3 words from DAT_80019868 to the stack
 *   and calls virtual slot 3 (offset 0x24) on the object, passing a computed this-pointer
 *   and the stack buffer. Finally calls call_single_helper_104df450 with param_1 and the
 *   value at param_1+0x2c34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_and_notify(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  int iVar5;
  
  uRam8001986c = 5;
  uRam80019870 = 0;
  uRam80019874 = 0;
  piVar2 = *(int **)(param_1 + 0x2c48);
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    sVar1 = *(short *)(iVar3 + 0x20);
    iVar5 = 0xc;
    do {
      iVar4 = iVar5 + -4;
      *(uint32_t *)(&stack0xffffffe8 + iVar5) = *(uint32_t *)(&DAT_80019868/*SDRAM*/ + iVar5);
      iVar5 = iVar4;
    } while (iVar4 != 0);
    (**(code **)(iVar3 + 0x24))((int)sVar1 + (int)piVar2,auStack_14);
  }
  call_single_helper_104df450(param_1,*(uint32_t *)(param_1 + 0x2c34));
  return;
}
