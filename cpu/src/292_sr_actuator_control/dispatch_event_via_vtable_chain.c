/* @k10d dispatch_event_via_vtable_chain @ 0x105338e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Dispatches an event by trying virtual slots 5 and 6 on the object, then a helper, then
 *   a nested object's virtual slot 2, falling back to three different constructors.
 * summary:
 *   The function first calls virtual slot 5 (offset 0x2c) on param_1. If that returns 0, it
 *   calls virtual slot 6 (offset 0x34) with param_2. If that also returns 0, it calls
 *   return_zero_stub_105339f8. If that returns 0, it dereferences param_1[1] to get a
 *   nested object and calls its virtual slot 2 (offset 0x1c) with param_2, param_3, and
 *   param_4. If any of the first three checks returns non-zero, or if
 *   return_zero_stub_105339f8 returns non-zero, it calls one of three different
 *   constructor/destructor bodies (construct_object_with_vtable,
 *   construct_cls_105fa778_object, or construct_cls_105b6d0c) with the event parameters.
 *   param_5 is stored on the stack before each fallback call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_via_vtable_chain(cls_1061e380 *param_1,uint32_t param_2,uint32_t param_3,int param_4,
                 uint32_t param_5)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_1c [4];
  
  puVar5 = (uint32_t *)auStack_1c;
  iVar3 = (((vtbl_entry*)(param_1->field_0x0))[5].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[5].adj);
  if (iVar3 == 0) {
    iVar3 = (((vtbl_entry*)(param_1->field_0x0))[6].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj,param_2
                      );
    if (iVar3 == 0) {
      iVar3 = return_zero_stub_105339f8((uint32_t)(param_1),param_2);
      if (iVar3 == 0) {
        piVar4 = (int *)param_1->field_0x4;
        iVar3 = *piVar4;
        sVar1 = *(short *)(iVar3 + 0x18);
        pcVar2 = *(code **)(iVar3 + 0x1c);
        *puVar5 = param_5;
        (*pcVar2)((void *)((int)piVar4 + (int)sVar1),param_2,param_3,param_4);
      }
      else {
        *puVar5 = param_5;
        construct_object_with_vtable((uint16_t *)0x0,(short)param_2,(short)param_3,param_4,*puVar5);
      }
    }
    else {
      *puVar5 = param_5;
      construct_cls_105fa778_object(0,param_2,param_3,param_4);
    }
  }
  else {
    *puVar5 = param_5;
    construct_cls_105b6d0c(0,param_2,param_3,param_4,*puVar5);
  }
  return;
}
