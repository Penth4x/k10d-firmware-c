/* @k10d dispatch_virtual_slot_two_10486dea @ 0x10486dea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on the object at offset 0x54 and updates the pointer based on
 *   the result.
 * summary:
 *   This function acts as a virtual method (slot 2) for class cls_105b2f20. When param_2 is
 *   2, it performs a virtual call on the object stored at this+0x54, specifically calling
 *   slot 2 of that sub-object's vtable. It then compares the returned pointer against the
 *   result of get_or_create_singleton_object_10489a38 and
 *   get_or_create_sram_object_104899a6 to determine a return value, potentially setting a
 *   flag at offset 0x44 of an object returned by get_or_create_singleton_object_104882d0.
 *   If param_2 is 1 or the byte at this+0x58 is non-zero, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_virtual_slot_two_10486dea(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  if (param_2 == 2) {
    iVar3 = **(int **)(param_1 + 0x54);
    iVar3 = (**(code **)(iVar3 + 0x14))
                      ((int)*(int **)(param_1 + 0x54) + (int)*(short *)(iVar3 + 0x10),param_3);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar1 = get_or_create_singleton_object_10489a38();
    if (iVar3 == iVar1) {
      iVar2 = get_or_create_singleton_object_104882d0();
      *(uint32_t *)(iVar2 + 0x44) = 2;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54);
      iVar3 = get_or_create_sram_object_104899a6();
      if (iVar1 == iVar3) {
        iVar2 = 0;
      }
    }
  }
  else if (param_2 == 1) {
    iVar2 = 0;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar2 = 0;
  }
  return iVar2;
}
