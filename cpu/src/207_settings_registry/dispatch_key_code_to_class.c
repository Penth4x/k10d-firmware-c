/* @k10d dispatch_key_code_to_class @ 0x104a97c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a key code (0x50-0x5d) to constructor arguments and invokes a class constructor.
 * summary:
 *   The function switches on param_2, which appears to be a key or event code in the range
 *   0x50-0x5d. For specific codes (0x50, 0x51, 0x5c, 0x5d), it sets up arguments (uVar3,
 *   uVar4, uVar5) and calls construct_object_with_vtable, which is the
 *   constructor/destructor body of class cls_105b6a30. The return value of the callee is
 *   returned. The caller is a virtual method of another class, suggesting this is part of
 *   an object-oriented event handling or state machine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_key_code_to_class(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x50:
    uVar3 = 0x50;
    uVar4 = 3;
    uVar5 = 1;
    goto LAB_104a982e;
  case 0x51:
    uVar3 = 0x51;
    uVar4 = 3;
    uVar5 = 1;
    goto LAB_104a982e;
  case 0x52:
    uVar3 = 0x52;
    break;
  case 0x53:
    uVar3 = 0x53;
    break;
  case 0x54:
    uVar3 = 0x54;
    break;
  case 0x55:
    uVar3 = 0x55;
    break;
  case 0x56:
    uVar3 = 0x56;
    break;
  case 0x57:
    uVar3 = 0x57;
    break;
  case 0x58:
    uVar3 = 0x58;
    break;
  case 0x59:
    uVar3 = 0x59;
    break;
  case 0x5a:
    uVar3 = 0x5a;
    break;
  default:
    goto LAB_104a9836;
  case 0x5c:
    uVar3 = 0x5c;
    uVar4 = 1;
    goto LAB_104a97f6;
  case 0x5d:
    uVar3 = 0x5d;
  }
  uVar4 = 7;
LAB_104a97f6:
  uVar5 = 4;
LAB_104a982e:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a9836:
  return uVar1;
}
