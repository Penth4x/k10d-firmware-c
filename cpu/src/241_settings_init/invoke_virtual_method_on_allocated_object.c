/* @k10d invoke_virtual_method_on_allocated_object @ 0x104cf942
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Allocates an object via find_entry_by_ushort_key, configures it, and calls a virtual
 *   method on it with parameters derived from the input structs.
 * summary:
 *   The function retrieves a pointer from param_3, allocates an object of size 0x112 using
 *   find_entry_by_ushort_key, and initializes it with write_word_to_dynamic_array based on
 *   a value in param_2. It then constructs a local object (cls_105b9aac_new), gathers
 *   arguments from param_2 and param_3, and invokes a virtual method (slot 3) on the
 *   allocated object. The local object is deleted before returning the result of the
 *   virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_allocated_object(uint32_t param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint16_t uVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint8_t auStack_1c [8];
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar3 = *(int *)(param_3 + 8);
  iVar4 = find_entry_by_ushort_key(iVar3,0x112);
  uVar6 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(param_2 + 0x2c);
    uVar5 = 0;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    else if (iVar2 == 1) {
      uVar5 = 6;
    }
    else if (iVar2 == 2) {
      uVar5 = 8;
    }
    else if (iVar2 == 3) {
      uVar5 = 3;
    }
    write_word_to_dynamic_array(iVar4,0,uVar5);
    cls_105b9aac_new((uint32_t *)__frv_reg_unset(4));
    (*(code *)0x104cfcd8/*ROM*/)(auStack_1c,*(uint8_t *)(param_3 + 0x10));
    uStack_14 = *(uint32_t *)(*(int *)(param_2 + 4) + 0x10);
    uStack_10 = **(uint32_t **)(param_2 + 4);
    uStack_c = *(uint32_t *)(param_3 + 0x14);
    iVar2 = *(int *)(iVar4 + 0x10);
    sVar1 = *(short *)(iVar2 + 0x18);
    iVar3 = find_entry_by_id_in_table(iVar3,0x112);
    uVar6 = (**(code **)(iVar2 + 0x1c))(sVar1 + iVar4,auStack_1c,iVar3);
    cls_105b9aac_delete(auStack_1c,2);
  }
  return uVar6;
}
