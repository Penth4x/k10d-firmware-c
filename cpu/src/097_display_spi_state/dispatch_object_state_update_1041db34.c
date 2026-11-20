/* @k10d dispatch_object_state_update_1041db34 @ 0x1041db34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Reads fields from a sub-object, builds a local struct, and invokes three virtual
 *   methods on a parent object.
 * summary:
 *   The function checks a flag via read_sysparam_byte on a pointer at param_1+0x48. If set,
 *   it populates a local stack structure with values retrieved via get_sysparam_store_byte
 *   and a direct memory read, then calls a virtual method (slot at offset 0xf4) on an
 *   object found at param_1+0x2c. It subsequently calls two more virtual methods (slots at
 *   0x74 and 0x6c) on the same object. Finally, it sets a flag at param_1+0xb8 and calls
 *   two helpers on the pointer at param_1+0x44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_update_1041db34(cls_1059d1d8 *param_1)

{
  struct {
    uint8_t uStack_14;
    uint8_t uStack_13;
    uint8_t uStack_12;
    uint8_t uStack_11;
    uint8_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_14;
  char cVar3;
  int iVar1;
  uint uVar2;
  void *pvVar4;
  uintptr_t sp;
  cVar3 = read_sysparam_byte((uint8_t *)param_1->field_0x48);
  if (cVar3 != '\0') {
    _cfg_14.uStack_c = 0x1059cf38/*ROM*/;
    _cfg_14.uStack_14 = 0;
    _cfg_14.uStack_13 = 0;
    _cfg_14.uStack_12 = 0;
    _cfg_14.uStack_11 = 0;
    _cfg_14.uStack_10 = 0;
    _cfg_14.uStack_e = 0;
    iVar1 = get_sysparam_store_byte((uint8_t *)(param_1->field_0x48),(uint32_t)(6));
    _cfg_14.uStack_14 = iVar1 == 0;
    _cfg_14.uStack_13 = get_sysparam_store_byte((uint8_t *)(param_1->field_0x48),(uint32_t)(7));
    _cfg_14.uStack_12 = 1;
    _cfg_14.uStack_11 = get_sysparam_store_byte((uint8_t *)(param_1->field_0x48),(uint32_t)(0xb));
    _cfg_14.uStack_10 = get_sysparam_store_byte((uint8_t *)(param_1->field_0x48),(uint32_t)(9));
    _cfg_14.uStack_e = *(uint16_t *)(param_1->field_0x48 + 0x20);
    iVar1 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar1))[30].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[30].adj,&_cfg_14.uStack_14);
    _cfg_14.uStack_c = 0x1059cf38/*ROM*/;
  }
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[14].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[14].adj);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[13].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[13].adj);
  param_1->field_0xb8 = 1;
  pvVar4 = (char*)(param_1) ->field_0x44;
  uVar2 = read_bounded_array_element_1051d696(pvVar4,0);
  update_camera_state_flags(pvVar4,0,uVar2 & 0xfffb);
  return;
}
