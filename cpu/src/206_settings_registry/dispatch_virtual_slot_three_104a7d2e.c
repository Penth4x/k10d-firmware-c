/* @k10d dispatch_virtual_slot_three_104a7d2e @ 0x104a7d2e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls virtual slots 5 and 6 of the object and branches to one of three helper functions
 *   based on their return values.
 * summary:
 *   This function is virtual method slot 3 of class cls_105b69b0. It first invokes virtual
 *   slot 5 (offset 0x2c) on the object. If that returns zero, it invokes virtual slot 6
 *   (offset 0x34) with param_2. Depending on the return value of slot 6, it calls either
 *   construct_cls_105fa778_object or construct_object_with_vtable. If slot 5 returns non-
 *   zero, it calls construct_cls_105b6d0c. All three callees are identified as
 *   constructor/destructor bodies for different classes, suggesting this function manages
 *   object lifecycle or state transitions based on internal object state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_three_104a7d2e(cls_105b69b0 *param_1,uint32_t param_2,uint32_t param_3,int param_4,
                 uint32_t param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_1c [4];
  
  puVar2 = (uint32_t *)auStack_1c;
  iVar1 = (((vtbl_entry*)(param_1->field_0x0))[5].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[5].adj);
  if (iVar1 == 0) {
    iVar1 = (((vtbl_entry*)(param_1->field_0x0))[6].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj,param_2
                      );
    if (iVar1 == 0) {
      *puVar2 = param_5;
      construct_object_with_vtable((uint16_t *)0x0,(short)param_2,(short)param_3,param_4,*puVar2);
    }
    else {
      *puVar2 = param_5;
      construct_cls_105fa778_object(0,param_2,param_3,param_4);
    }
  }
  else {
    *puVar2 = param_5;
    construct_cls_105b6d0c(0,param_2,param_3,param_4,*puVar2);
  }
  return;
}
