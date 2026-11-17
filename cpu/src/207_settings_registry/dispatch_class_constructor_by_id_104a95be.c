/* @k10d dispatch_class_constructor_by_id_104a95be @ 0x104a95be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit type ID to constructor parameters and invokes the cls_105b6a30
 *   constructor.
 * summary:
 *   The function switches on param_2 (values 0x10-0x1f) to determine a sub-type identifier
 *   (uVar3) and associated parameters (uVar4, uVar5). It then calls
 *   construct_object_with_vtable, which is the verified constructor/destructor body for
 *   class cls_105b6a30, passing the derived parameters. The return value of the constructor
 *   call is returned to the caller. This appears to be a factory method or virtual dispatch
 *   helper for creating specific instances of cls_105b6a30 based on the input ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_constructor_by_id_104a95be(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x10:
    uVar3 = 0x10;
    uVar4 = 8;
    goto LAB_104a95e0;
  default:
    goto LAB_104a963e;
  case 0x12:
    uVar3 = 0x12;
    uVar4 = 4;
    goto LAB_104a95e0;
  case 0x13:
    uVar3 = 0x13;
    break;
  case 0x14:
    uVar3 = 0x14;
    break;
  case 0x15:
    uVar3 = 0x15;
    break;
  case 0x16:
    uVar3 = 0x16;
    break;
  case 0x17:
    uVar3 = 0x17;
    break;
  case 0x18:
    uVar3 = 0x18;
    uVar4 = 3;
    uVar5 = 2;
    goto LAB_104a9636;
  case 0x19:
    uVar3 = 0x19;
    break;
  case 0x1a:
    uVar3 = 0x1a;
    break;
  case 0x1b:
    uVar3 = 0x1b;
    break;
  case 0x1c:
    uVar3 = 0x1c;
    break;
  case 0x1d:
    uVar3 = 0x1d;
    uVar4 = 4;
    goto LAB_104a95e0;
  case 0x1e:
    uVar3 = 0x1e;
    break;
  case 0x1f:
    uVar3 = 0x1f;
  }
  uVar4 = 3;
LAB_104a95e0:
  uVar5 = 1;
LAB_104a9636:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a963e:
  return uVar1;
}
