/* @k10d dispatch_class_constructor_by_id_104a9a14 @ 0x104a9a14
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects a size and ID for one of five variants and invokes the cls_105b6a30
 *   constructor.
 * summary:
 *   Switches on param_2 (0x220-0x224) to set a local ID and a size value (0x8a, 0x12, 0xc6,
 *   8, or a computed value from return_constant_0x33). It then calls
 *   construct_object_with_vtable, the verified constructor/destructor body of class
 *   cls_105b6a30, passing the selected ID, a constant 7, the size, and a zeroed stack
 *   variable. Returns the result of the constructor call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t dispatch_class_constructor_by_id_104a9a14(uint32_t param_1,int param_2)

{
  uint16_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_14 [4];
  uint8_t uStack_9;
  
  puVar3 = (uint32_t *)auStack_14;
  if (param_2 == 0x220) {
    iVar2 = return_constant_0x33((uint32_t)(&uStack_9));
    uVar1 = 0x220;
    iVar2 = iVar2 + 2;
  }
  else if (param_2 == 0x221) {
    uVar1 = 0x221;
    iVar2 = 0x8a;
    puVar3 = (uint32_t *)auStack_14;
  }
  else if (param_2 == 0x222) {
    uVar1 = 0x222;
    iVar2 = 0x12;
    puVar3 = (uint32_t *)auStack_14;
  }
  else if (param_2 == 0x223) {
    uVar1 = 0x223;
    iVar2 = 0xc6;
    puVar3 = (uint32_t *)auStack_14;
  }
  else {
    if (param_2 != 0x224) {
      return 0;
    }
    uVar1 = 0x224;
    iVar2 = 8;
    puVar3 = (uint32_t *)auStack_14;
  }
  *puVar3 = 0;
  uVar1 = construct_object_with_vtable((uint16_t *)0x0,uVar1,7,iVar2,*puVar3);
  return uVar1;
}
