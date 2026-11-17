/* @k10d cls_105a5c2c_new_2 @ 0x1045c97e
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105a5c2c; returns param_1)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5c2c (vtable 0x105a5c2c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105a5c2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * cls_105a5c2c_new_2(int *param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  if ((param_1 != (int *)0x0) || (param_1 = (int *)heap_alloc((void *)0x18), param_1 != (int *)0x0)) {
    param_1[5] = (int)&DAT_105a5c2c/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = param_3;
    *(uint8_t *)(param_1 + 4) = 0;
    init_object_with_optional_heap_field(param_1);
    iVar2 = *(int *)param_1[3];
    puVar1 = (uint32_t *)
             (**(code **)(iVar2 + 0x14))(param_1[3] + (int)*(short *)(iVar2 + 0x10),param_2);
    *param_1 = (int)puVar1;
    if (puVar1 != (uint32_t *)0x0) {
      uStack_c = 0;
      copy_word_array_1045cd46(param_1,puVar1,param_2,&uStack_c);
      param_1[1] = *param_1;
      param_1[2] = *param_1 + param_2 * 4;
    }
  }
  return param_1;
}
