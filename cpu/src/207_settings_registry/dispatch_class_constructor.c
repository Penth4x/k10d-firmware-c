/* @k10d dispatch_class_constructor @ 0x104a9766
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects a constructor variant based on a type code and invokes the class constructor.
 * summary:
 *   The function switches on param_2 to determine a specific constructor variant (uVar3)
 *   and an argument count or mode (uVar4). It then calls construct_object_with_vtable,
 *   which is the constructor body for class cls_105b6a30, passing the selected variant and
 *   mode. The return value of the constructor call is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_constructor(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x40:
    uVar3 = 0x40;
    break;
  case 0x41:
    uVar3 = 0x41;
    break;
  default:
    goto LAB_104a97ba;
  case 0x47:
    uVar3 = 0x47;
    uVar4 = 6;
    goto LAB_104a97b0;
  case 0x48:
    uVar3 = 0x48;
    break;
  case 0x49:
    uVar3 = 0x49;
    break;
  case 0x4d:
    uVar3 = 0x4d;
    uVar4 = 9;
    goto LAB_104a97b0;
  case 0x4f:
    uVar3 = 0x4f;
  }
  uVar4 = 3;
LAB_104a97b0:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,1,0);
  uVar1 = (uint)uVar2;
LAB_104a97ba:
  return uVar1;
}
