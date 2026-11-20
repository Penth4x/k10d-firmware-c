/* @k10d invoke_virtual_slot_two_on_four_objects_10482fa0 @ 0x10482fa0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on four distinct objects and copies specific fields into the
 *   destination struct.
 * summary:
 *   The function retrieves four object pointers via helper functions and invokes their
 *   second virtual method (slot 2). The first call passes a value read from a structure
 *   returned by get_or_create_singleton_object_10485138, while the others pass zero. It
 *   then copies fields at offsets 0x4, 0x8, 0xc, and 0x10 from these objects into the
 *   destination parameter at offsets 0x4, 0x8, 0xc, and 0x10 respectively. The return value
 *   is the result of the fourth virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_four_objects_10482fa0(cls_105ab7d8 *param_1)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = get_or_create_singleton_object_10485138();
  uStack_c = *(uint32_t *)(iVar1 + 0x1c);
  piVar2 = (int *)get_or_init_sram_object_10483206();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,&uStack_c);
  piVar2 = (int *)get_or_create_sram_object_104816ee();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_sram_object_104a79b2();
  (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  piVar2 = (int *)get_or_create_singleton_object_1047d890();
  uVar3 = (((vtbl_entry*)(*piVar2))[2].fn)((int)piVar2 + (int)((vtbl_entry*)(*piVar2))[2].adj,0);
  iVar1 = get_or_create_sram_object_104816ee();
  param_1->field_0xc = (uint32_t)(*(void **)(iVar1 + 0xc));
  iVar1 = get_or_create_sram_object_104a79b2();
  param_1->field_0x8 = (uint32_t)(*(void **)(iVar1 + 4));
  iVar1 = get_or_create_singleton_object_1047d890();
  param_1->field_0x4 = (uint32_t)(*(void **)(iVar1 + 4));
  iVar1 = get_or_create_singleton_object_1047d890();
  param_1->field_0x10 = (uint32_t)(*(void **)(iVar1 + 8));
  return uVar3;
}
