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

cls_105b2f20 * dispatch_virtual_slot_two_10486dea(cls_105b2f20 *param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  int *piVar2;
  cls_105b2f20 *pcVar3;
  int iVar4;
  
  pcVar3 = param_1;
  if (param_2 == 2) {
    iVar4 = *(uint32_t*)(param_1->field_0x54);
    piVar1 = (int *)(((vtbl_entry*)(iVar4))[2].fn)
                              ((int)param_1->field_0x54 + (int)((vtbl_entry*)(iVar4))[2].adj,param_3);
    param_1->field_0x54 = (uint32_t)(piVar1);
    piVar2 = (int *)get_or_create_singleton_object_10489a38();
    if (piVar1 == piVar2) {
      pcVar3 = (cls_105b2f20 *)get_or_create_singleton_object_104882d0();
      pcVar3->field_0x44 = 2;
    }
    else {
      piVar2 = (void*)(param_1->field_0x54);
      piVar1 = (int *)get_or_create_sram_object_104899a6();
      if (piVar2 == piVar1) {
        pcVar3 = (cls_105b2f20 *)0x0;
      }
    }
  }
  else if (param_2 == 1) {
    pcVar3 = (cls_105b2f20 *)0x0;
  }
  if (param_1->field_0x58 != '\0') {
    pcVar3 = (cls_105b2f20 *)0x0;
  }
  return pcVar3;
}
