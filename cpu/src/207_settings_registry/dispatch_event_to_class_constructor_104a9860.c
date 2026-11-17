/* @k10d dispatch_event_to_class_constructor_104a9860 @ 0x104a9860
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit event code to a pair of parameters and invokes a class
 *   constructor/destructor routine.
 * summary:
 *   The function switches on param_2 (values 0x200-0x20f) to select a specific 16-bit code
 *   and two additional parameters (uVar4, uVar5). It then calls
 *   construct_object_with_vtable, which is identified as the constructor/destructor body of
 *   class cls_105b6a30, passing the selected code and parameters. The return value of the
 *   callee is returned to the caller. The specific meaning of the event codes and the class
 *   role are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_event_to_class_constructor_104a9860(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x200:
    uVar3 = 0x200;
    goto LAB_104a9884;
  case 0x201:
    uVar3 = 0x201;
    goto LAB_104a9884;
  case 0x202:
    uVar3 = 0x202;
    goto LAB_104a9884;
  case 0x203:
    uVar3 = 0x203;
    uVar4 = 8;
    uVar5 = 9;
    break;
  case 0x204:
    uVar3 = 0x204;
    uVar4 = 8;
    uVar5 = 9;
    break;
  case 0x205:
    uVar3 = 0x205;
    uVar4 = 7;
    uVar5 = 0x17;
    break;
  case 0x206:
    uVar3 = 0x206;
    goto LAB_104a98cc;
  case 0x207:
    uVar3 = 0x207;
    uVar4 = 7;
    uVar5 = 0x45;
    break;
  case 0x208:
    uVar3 = 0x208;
    uVar4 = 7;
    uVar5 = 0x1b;
    break;
  case 0x209:
    uVar3 = 0x209;
    goto LAB_104a98cc;
  case 0x20a:
    uVar3 = 0x20a;
    goto LAB_104a98cc;
  case 0x20b:
    uVar3 = 0x20b;
LAB_104a98cc:
    uVar4 = 7;
    uVar5 = 0x10;
    break;
  default:
    goto LAB_104a9928;
  case 0x20d:
    uVar3 = 0x20d;
    goto LAB_104a9884;
  case 0x20e:
    uVar3 = 0x20e;
    goto LAB_104a9884;
  case 0x20f:
    uVar3 = 0x20f;
LAB_104a9884:
    uVar4 = 3;
    uVar5 = 4;
  }
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a9928:
  return uVar1;
}
