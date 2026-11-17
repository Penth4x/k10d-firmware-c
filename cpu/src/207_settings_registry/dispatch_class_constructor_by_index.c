/* @k10d dispatch_class_constructor_by_index @ 0x104a9536
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-case index to three small integer parameters and forwards them to a class
 *   constructor.
 * summary:
 *   The function uses a switch on param_2 to select one of 16 (or default) combinations of
 *   three small unsigned values (uVar3, uVar4, uVar5). It then calls
 *   construct_object_with_vtable, which is the verified constructor/destructor body of
 *   class cls_105b6a30, passing 0x0 as the first argument followed by the three selected
 *   values and a trailing 0. The return value of the callee is returned to the caller. The
 *   specific meaning of the index and the three parameters is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_constructor_by_index(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar3 = 0;
    uVar4 = 1;
    uVar5 = 4;
    break;
  case 1:
    uVar3 = 1;
    goto LAB_104a95a8;
  case 2:
    uVar3 = 2;
    goto LAB_104a9562;
  case 3:
    uVar3 = 3;
    goto LAB_104a9576;
  case 4:
    uVar3 = 4;
    goto LAB_104a9576;
  case 5:
    uVar3 = 5;
LAB_104a9576:
    uVar4 = 4;
    goto LAB_104a955c;
  case 6:
    uVar3 = 6;
    uVar4 = 7;
    uVar5 = 4;
    break;
  case 7:
    uVar3 = 7;
    uVar4 = 7;
    uVar5 = 3;
    break;
  case 8:
    uVar3 = 8;
    goto LAB_104a95a8;
  case 9:
    uVar3 = 9;
    goto LAB_104a9562;
  default:
    goto LAB_104a95b8;
  case 0xc:
    uVar3 = 0xc;
LAB_104a9562:
    uVar4 = 3;
    uVar5 = 2;
    break;
  case 0xd:
    uVar3 = 0xd;
    goto LAB_104a95a8;
  case 0xe:
    uVar3 = 0xe;
LAB_104a95a8:
    uVar4 = 3;
LAB_104a955c:
    uVar5 = 1;
  }
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a95b8:
  return uVar1;
}
