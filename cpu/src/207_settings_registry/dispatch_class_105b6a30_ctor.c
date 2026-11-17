/* @k10d dispatch_class_105b6a30_ctor @ 0x104a9ac2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects and invokes the constructor of class cls_105b6a30 based on a type code (0x404
 *   or 0x405).
 * summary:
 *   Checks param_2 for values 0x404 or 0x405. If 0x404, it sets a size of 4 and passes the
 *   4-byte value at param_1+4 to the callee. If 0x405, it sets a size of 8 and passes the
 *   4-byte value at param_1+8. It calls construct_object_with_vtable (constructor of
 *   cls_105b6a30) with these parameters and returns the result. Returns 0 for other codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_105b6a30_ctor(int param_1,int param_2)

{
  ushort uVar1;
  uint16_t uVar2;
  int iVar3;
  
  if (param_2 == 0x404) {
    uVar2 = 0x404;
    iVar3 = 4;
  }
  else {
    if (param_2 != 0x405) {
      return 0;
    }
    iVar3 = 8;
    uVar2 = 0x405;
  }
  uVar1 = construct_object_with_vtable((uint16_t *)0x0,uVar2,7,*(uint32_t *)(iVar3 + param_1),0);
  return (uint)uVar1;
}
