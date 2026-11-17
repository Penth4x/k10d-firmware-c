/* @k10d dispatch_keycode_to_class_ctor @ 0x104a96ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 0x30-0x3f key code to constructor arguments and calls a class constructor.
 * summary:
 *   Switches on param_2 (values 0x30-0x3f) to select a second argument (uVar3) and two
 *   additional parameters (uVar4, uVar5) before calling construct_object_with_vtable.
 *   construct_object_with_vtable is the constructor/destructor body of class cls_105b6a30.
 *   The function returns the 16-bit result of that call. The specific meaning of the key
 *   codes and the class role are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_keycode_to_class_ctor(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x30:
    uVar3 = 0x30;
    uVar4 = 4;
    goto LAB_104a96ee;
  case 0x31:
    uVar3 = 0x31;
    uVar4 = 4;
    goto LAB_104a96ee;
  case 0x32:
    uVar3 = 0x32;
    uVar4 = 7;
    goto LAB_104a9700;
  case 0x33:
    uVar3 = 0x33;
    uVar4 = 1;
    uVar5 = 3;
    goto LAB_104a9758;
  case 0x34:
    uVar3 = 0x34;
    uVar4 = 1;
    goto LAB_104a9700;
  case 0x35:
    uVar3 = 0x35;
    goto LAB_104a971c;
  case 0x36:
    uVar3 = 0x36;
    break;
  case 0x37:
    uVar3 = 0x37;
    break;
  case 0x38:
    uVar3 = 0x38;
    goto LAB_104a971c;
  case 0x39:
    uVar3 = 0x39;
LAB_104a971c:
    uVar4 = 3;
    uVar5 = 2;
    goto LAB_104a9758;
  case 0x3a:
    uVar3 = 0x3a;
    break;
  case 0x3b:
    uVar3 = 0x3b;
    break;
  default:
    goto LAB_104a9760;
  case 0x3d:
    uVar3 = 0x3d;
    break;
  case 0x3e:
    uVar3 = 0x3e;
    uVar4 = 1;
LAB_104a9700:
    uVar5 = 4;
    goto LAB_104a9758;
  case 0x3f:
    uVar3 = 0x3f;
    uVar4 = 1;
    uVar5 = 3;
    goto LAB_104a9758;
  }
  uVar4 = 3;
LAB_104a96ee:
  uVar5 = 1;
LAB_104a9758:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a9760:
  return uVar1;
}
