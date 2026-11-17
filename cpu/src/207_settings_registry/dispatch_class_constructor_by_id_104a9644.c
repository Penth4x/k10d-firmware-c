/* @k10d dispatch_class_constructor_by_id_104a9644 @ 0x104a9644
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit type ID to constructor parameters and invokes the cls_105b6a30
 *   constructor.
 * summary:
 *   The function switches on param_2 (values 0x20-0x2f) to determine a sub-type (uVar3), a
 *   size/flag (uVar4), and a mode (uVar5). It then calls construct_object_with_vtable,
 *   which is the constructor for class cls_105b6a30, passing these derived parameters. The
 *   return value is the result of the constructor call (likely a pointer or status).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_class_constructor_by_id_104a9644(uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint32_t uVar5;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x20:
    uVar3 = 0x20;
    break;
  case 0x21:
    uVar3 = 0x21;
    break;
  case 0x22:
    uVar3 = 0x22;
    break;
  case 0x23:
    uVar3 = 0x23;
    break;
  case 0x24:
    uVar3 = 0x24;
    break;
  case 0x25:
    uVar3 = 0x25;
    break;
  case 0x26:
    uVar3 = 0x26;
    break;
  case 0x27:
    uVar3 = 0x27;
    uVar4 = 7;
    uVar5 = 4;
    goto LAB_104a96bc;
  case 0x28:
    uVar3 = 0x28;
    uVar4 = 7;
    uVar5 = 4;
    goto LAB_104a96bc;
  default:
    goto LAB_104a96c4;
  case 0x2a:
    uVar3 = 0x2a;
    goto LAB_104a96b4;
  case 0x2b:
    uVar3 = 0x2b;
    goto LAB_104a96b4;
  case 0x2c:
    uVar3 = 0x2c;
    goto LAB_104a96b4;
  case 0x2d:
    uVar3 = 0x2d;
    break;
  case 0x2e:
    uVar3 = 0x2e;
    goto LAB_104a96b4;
  case 0x2f:
    uVar3 = 0x2f;
LAB_104a96b4:
    uVar4 = 4;
    goto LAB_104a9664;
  }
  uVar4 = 3;
LAB_104a9664:
  uVar5 = 1;
LAB_104a96bc:
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,uVar3,uVar4,uVar5,0);
  uVar1 = (uint)uVar2;
LAB_104a96c4:
  return uVar1;
}
