/* @k10d dispatch_class_constructor_by_id_10517404 @ 0x10517404
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Selects and invokes a constructor for one of two class types based on an integer ID
 *   parameter.
 * summary:
 *   The function branches on param_2 to determine which object class to instantiate. For
 *   IDs 0x828d and 0x828e, it calls construct_object_with_vtable (constructor for
 *   cls_105b6a30) with specific arguments. For IDs 0x8769 and 0x8825, it calls
 *   construct_cls_105b6d0c (constructor for cls_105b6d0c). It returns the result of the
 *   constructor call or 0 if the ID is unrecognized.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_constructor_by_id_10517404(uint32_t param_1,int param_2)

{
  ushort uVar2;
  int iVar1;
  uint16_t uVar4;
  uint32_t uVar3;
  uint16_t uVar5;
  
  if (param_2 == 0x828d) {
    uVar4 = 0x828d;
    uVar5 = 3;
    uVar3 = 2;
  }
  else {
    if (param_2 != 0x828e) {
      if (param_2 == 0x8769) {
        uVar3 = 0x8769;
      }
      else {
        if (param_2 != 0x8825) {
          return 0;
        }
        uVar3 = 0x8825;
      }
      iVar1 = construct_cls_105b6d0c(0,uVar3,4,1,0);
      return iVar1;
    }
    uVar4 = 0x828e;
    uVar5 = 1;
    uVar3 = 0;
  }
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar4,uVar5,uVar3,0);
  return (uint)uVar2;
}
