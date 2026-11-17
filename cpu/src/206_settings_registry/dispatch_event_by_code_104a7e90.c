/* @k10d dispatch_event_by_code_104a7e90 @ 0x104a7e90
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Maps a 16-bit event code to a type/size pair and forwards it to a class constructor.
 * summary:
 *   Validates param_2 against a set of specific 16-bit codes (0x8822, 0x829a, 0x829d,
 *   0x8824, 0x8827, 0x8828). For each valid code, it sets a corresponding type identifier
 *   and size/flag values, then calls construct_object_with_vtable (constructor of
 *   cls_105b6a30) with these parameters. Returns 0 for unrecognized codes. The specific
 *   meaning of the codes and the cls_105b6a30 class is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_event_by_code_104a7e90(uint32_t param_1,int param_2)

{
  ushort uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint32_t uVar4;
  
  if (param_2 == 0x8822) {
    uVar2 = 0x8822;
    uVar3 = 3;
  }
  else if (param_2 < 0x8823) {
    if (param_2 == 0x829a) {
      uVar2 = 0x829a;
      uVar3 = 5;
    }
    else {
      if (param_2 != 0x829d) {
        return 0;
      }
      uVar2 = 0x829d;
      uVar3 = 5;
    }
  }
  else {
    if (param_2 == 0x8824) {
      uVar2 = 0x8824;
      uVar3 = 2;
      uVar4 = 0;
      goto LAB_104a7f0e;
    }
    if (param_2 != 0x8827) {
      if (param_2 != 0x8828) {
        return 0;
      }
      uVar2 = 0x8828;
      uVar3 = 7;
      uVar4 = 0;
      goto LAB_104a7f0e;
    }
    uVar2 = 0x8827;
    uVar3 = 3;
  }
  uVar4 = 1;
LAB_104a7f0e:
  uVar1 = construct_object_with_vtable((uint16_t *)0x0,uVar2,uVar3,uVar4,0);
  return (uint)uVar1;
}
