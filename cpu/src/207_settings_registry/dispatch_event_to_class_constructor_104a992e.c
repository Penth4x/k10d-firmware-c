/* @k10d dispatch_event_to_class_constructor_104a992e @ 0x104a992e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit event code (0x210-0x21f) to constructor arguments and invokes a class
 *   constructor.
 * summary:
 *   The function switches on param_2 to select a specific event ID and two additional
 *   parameters (uVar4, uVar5). It then calls construct_object_with_vtable, which is the
 *   constructor/destructor body of class cls_105b6a30, passing the event ID and parameters.
 *   The return value of the callee is returned to the caller. The specific meaning of the
 *   event codes and the class role are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_event_to_class_constructor_104a992e(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x210:
    uVar3 = 0x210;
    goto LAB_104a9952;
  case 0x211:
    uVar3 = 0x211;
    goto LAB_104a9952;
  case 0x212:
    uVar3 = 0x212;
    goto LAB_104a9952;
  case 0x213:
    uVar3 = 0x213;
    goto LAB_104a9952;
  case 0x214:
    uVar3 = 0x214;
    goto LAB_104a9952;
  case 0x215:
    uVar3 = 0x215;
    uVar4 = 4;
    uVar5 = 5;
    break;
  case 0x216:
    uVar3 = 0x216;
    uVar4 = 7;
    uVar5 = 6;
    break;
  case 0x217:
    uVar3 = 0x217;
    goto LAB_104a9952;
  case 0x218:
    uVar3 = 0x218;
    uVar4 = 3;
    uVar5 = 3;
    break;
  case 0x219:
    uVar3 = 0x219;
LAB_104a9952:
    uVar4 = 3;
    uVar5 = 4;
    break;
  case 0x21a:
    uVar3 = 0x21a;
    uVar4 = 7;
    uVar5 = 0x26;
    break;
  case 0x21b:
    uVar3 = 0x21b;
    uVar4 = 7;
    uVar5 = 0x28;
    break;
  case 0x21c:
    uVar3 = 0x21c;
    uVar4 = 7;
    uVar5 = 0x12;
    break;
  case 0x21d:
    uVar3 = 0x21d;
    uVar4 = 7;
    uVar5 = 0x12;
    break;
  case 0x21e:
    uVar3 = 0x21e;
    uVar4 = 7;
    uVar5 = 8;
    break;
  case 0x21f:
    uVar3 = 0x21f;
    uVar4 = 7;
    uVar5 = 0xc;
    break;
  default:
    goto LAB_104a9a0e;
  }
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a9a0e:
  return uVar1;
}
