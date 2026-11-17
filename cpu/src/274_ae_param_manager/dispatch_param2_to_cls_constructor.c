/* @k10d dispatch_param2_to_cls_constructor @ 0x105173a0
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Maps a small set of param_2 codes to (uVar3,uVar4) pairs and forwards them to the
 *   cls_105b6a30 constructor.
 * summary:
 *   Switches on param_2 (0x201/0x202/0x211/0x212/0x213/0x214) to select two small integer
 *   arguments, then calls construct_object_with_vtable (constructor/destructor body of
 *   cls_105b6a30) with (0, param_2, uVar3, uVar4, 0) and returns the ushort result as uint.
 *   param_1 is unused. No camera-subsystem semantics are visible in the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_param2_to_cls_constructor(uint32_t param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  
  uVar1 = 0;
  switch(param_2) {
  case 0x201:
    uVar3 = 4;
    goto LAB_105173c2;
  case 0x202:
    uVar3 = 4;
    goto LAB_105173c2;
  default:
    goto LAB_105173fe;
  case 0x211:
    uVar3 = 5;
    uVar4 = 3;
    break;
  case 0x212:
    uVar3 = 3;
    uVar4 = 2;
    break;
  case 0x213:
    uVar3 = 3;
LAB_105173c2:
    uVar4 = 1;
    break;
  case 0x214:
    uVar3 = 4;
    uVar4 = 0;
  }
  uVar2 = construct_object_with_vtable((uint16_t *)0x0,(short)param_2,uVar3,uVar4,0);
  uVar1 = (uint)uVar2;
LAB_105173fe:
  return uVar1;
}
