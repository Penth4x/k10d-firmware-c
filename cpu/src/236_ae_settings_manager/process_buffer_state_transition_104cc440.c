/* @k10d process_buffer_state_transition_104cc440 @ 0x104cc440
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates state flags and copies data between two buffer objects based on a conditional
 *   check.
 * summary:
 *   The function reads a flag at offset 0x210 of an object pointed to by param_1+0xb0. If
 *   the flag is zero, it calls copy_large_struct to copy data from the object at
 *   param_1+0xb0 to the object at param_1+0xb4, sets the flag at 0x210 of the destination
 *   to 1, and sets fields at 0x210/0x214 of param_1. If the flag is non-zero, it performs a
 *   more complex sequence involving dispatch_exposure_mode_handler and
 *   set_object_state_and_notify, potentially calling compare_two_structs_by_mode on error,
 *   before finally calling copy_large_struct and clearing the flag at 0x210 of the
 *   destination. It manages a temporary object on the stack (cls_105b9458).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_buffer_state_transition_104cc440(int param_1)

{
  uint32_t *puVar1;
  void *pvVar2;
  uint32_t *puVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_228 [4];
  cls_105b9458 cStack_21c;
  
  piVar6 = (int *)auStack_228;
  cls_105b9458_new(&cStack_21c);
  iVar4 = *(int *)(param_1 + 0xb0);
  if (*(char *)(iVar4 + 0x210) == '\0') {
    copy_large_struct((uint32_t *)(*(int *)(param_1 + 0xb4) + 0x34),(uint32_t *)(iVar4 + 0x34));
    *(uint32_t *)(*(int *)(param_1 + 0xb4) + 0x18) =
         *(uint32_t *)(*(int *)(param_1 + 0xb0) + 0x18);
    *(uint8_t *)(*(int *)(param_1 + 0xb4) + 0x210) = 1;
    *(uint32_t *)(param_1 + 0x214) = 0;
    *(uint32_t *)(param_1 + 0x210) = 0xc0012;
    goto LAB_104cc594;
  }
  pvVar2 = *(void **)(param_1 + 0xac);
  if (*(int *)((int)pvVar2 + 0x2c) == 0) {
    iVar5 = *(int *)(param_1 + 0xb4);
    *piVar6 = *(uint32_t *)(param_1 + 0xb8);
    iVar4 = dispatch_exposure_mode_handler(param_1,pvVar2,iVar4,iVar5,*piVar6);
    iVar4 = set_object_state_and_notify(param_1,iVar4,0xc0012,8);
    if (iVar4 != 0) {
LAB_104cc584:
      *(uint32_t *)(param_1 + 0x214) = 1;
      *(uint32_t *)(param_1 + 0x210) = 0xc0012;
      goto LAB_104cc594;
    }
    puVar3 = (uint32_t *)(*(int *)(param_1 + 0xb0) + 0x34);
    puVar1 = (uint32_t *)(*(int *)(param_1 + 0xb4) + 0x34);
  }
  else {
    *piVar6 = *(uint32_t *)(param_1 + 0xb8);
    iVar4 = dispatch_exposure_mode_handler(param_1,pvVar2,iVar4,(int)&cStack_21c,*piVar6);
    iVar4 = set_object_state_and_notify(param_1,iVar4,0xc0012,8);
    if (iVar4 == 0) {
      puVar3 = (uint32_t *)(*(int *)(param_1 + 0xb0) + 0x34);
      puVar1 = (uint32_t *)(*(int *)(param_1 + 0xb4) + 0x34);
    }
    else {
      iVar4 = compare_two_structs_by_mode(param_1,*(int *)(*(int *)(param_1 + 0xac) + 0x2c),&cStack_21c,
                           *(void **)(param_1 + 0xb4));
      iVar4 = set_object_state_and_notify(param_1,iVar4,0xc0012,9);
      if (iVar4 != 0) goto LAB_104cc584;
      puVar3 = (uint32_t *)(*(int *)(param_1 + 0xb0) + 0x34);
      puVar1 = (uint32_t *)(*(int *)(param_1 + 0xb4) + 0x34);
    }
  }
  copy_large_struct(puVar1,puVar3);
  *(uint32_t *)(*(int *)(param_1 + 0xb4) + 0x18) =
       *(uint32_t *)(*(int *)(param_1 + 0xb0) + 0x18);
  *(uint8_t *)(*(int *)(param_1 + 0xb4) + 0x210) = 0;
LAB_104cc594:
  cls_105b9458_delete(&cStack_21c,2);
  return;
}
