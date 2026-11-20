/* @k10d dispatch_virtual_call_via_offset @ 0x10532742
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a virtual offset from an object and invokes a virtual method with a computed this
 *   pointer and a transformed argument.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1 to get an object pointer.
 *   It reads a 16-bit value at offset 0x40 of that object, which serves as a this-
 *   adjustment. It calls an unknown function at 0x104a8c94 with param_2, then performs a
 *   virtual call using the adjusted this pointer and the result of the helper call. The
 *   virtual slot is determined by the offset 0x44 (slot 5). No camera-specific subsystem is
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_offset(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x14);
  iVar3 = *piVar4;
  sVar1 = *(short *)(iVar3 + 0x40);
  uVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  (((vtbl_entry*)(iVar3))[8].fn)((int)piVar4 + (int)sVar1,uVar2);
  return;
}
