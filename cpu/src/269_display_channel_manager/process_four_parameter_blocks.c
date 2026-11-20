/* @k10d process_four_parameter_blocks @ 0x10508468
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through four conditional blocks in param_2, initializing and configuring
 *   associated objects via helper calls.
 * summary:
 *   The function checks four specific byte offsets in param_2 (2, 5, 9, 0x15) to determine
 *   which of four sub-operations to perform. For each active block, it retrieves a pointer
 *   from param_2, calls map_exposure_mode_to_index and initialize_exposure_state_block to
 *   initialize state, and updates fields in param_1 and the object pointed to by iVar5. The
 *   third and fourth blocks involve complex pointer arithmetic and calls to functions at
 *   0x10530a48, 0x10530c06, and 0x1053109c to copy data into a stack buffer before writing
 *   results back to the object. It returns the result of the last executed
 *   query_exposure_mode_state_10507d2e call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

/* WARNING: Instruction at (ram,0x105085cc) overlaps instruction at (ram,0x105085ca)
    */

uint32_t process_four_parameter_blocks(int param_1,int *param_2)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint8_t auStack_14 [4];
  uint32_t uStack_10;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  uVar6 = 0;
  if (*(char *)(param_2 + 2) != '\0') {
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0xf,1);
    iVar5 = *param_2;
    if (iVar5 != 0) {
      *(uint32_t *)(param_1 + 0x8c) = 0;
      iVar3 = map_exposure_mode_to_index((int)(param_1),(uint32_t *)(iVar5));
      if (iVar3 != 0) {
        iVar3 = initialize_exposure_state_block(param_1,iVar5,0);
        if (iVar3 == 0) {
          uVar6 = query_exposure_mode_state_10507d2e(param_1,1);
        }
        else {
          if (*(char *)((int)param_2 + 0x16) != '\0') {
            __trap_call_kernel_service_with_param(auStack_14);
            *(uint32_t *)(param_1 + 800) = uStack_10;
            *(uint32_t *)(param_1 + 0x324) = *(uint32_t *)(iVar5 + 0x1c);
          }
          *(uint32_t *)(param_1 + 0x2e8) = *(uint32_t *)(iVar5 + 0xe4);
          check_entry_flag_after_init(param_1);
          uVar1 = *(ushort *)(param_1 + 0x9e);
          uVar6 = query_exposure_mode_state_10507d2e(param_1,1);
          format_and_dispatch_four_items((int)(param_1),(void *)(param_2),(void *)((uint)uVar1));
          process_four_entry_list((int)(param_1),(void *)(param_2),(void *)((uint)uVar1));
        }
      }
    }
  }
  if (*(char *)(param_2 + 5) != '\0') {
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0xf,1);
    iVar5 = param_2[3];
    if (iVar5 != 0) {
      *(uint32_t *)(param_1 + 0x8c) = 1;
      iVar3 = map_exposure_mode_to_index((int)(param_1),(uint32_t *)(iVar5));
      if (iVar3 != 0) {
        iVar3 = initialize_exposure_state_block(param_1,iVar5,0);
        if (iVar3 == 0) {
          uVar6 = query_exposure_mode_state_10507d2e(param_1,1);
        }
        else {
          *(uint32_t *)(param_1 + 0x2e8) = *(uint32_t *)(iVar5 + 0xe4);
          check_entry_flag_after_init(__frv_reg_unset(4));
          uVar6 = query_exposure_mode_state_10507d2e(param_1,1);
        }
      }
    }
  }
  if (*(char *)((int)param_2 + 9) != '\0') {
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0xf,2);
    iVar5 = param_2[1];
    if (iVar5 != 0) {
      *(uint32_t *)(param_1 + 0x8c) = 0;
      iVar3 = map_exposure_mode_to_index((int)(param_1),(uint32_t *)(iVar5));
      if (iVar3 != 0) {
        if ((*(char *)(param_2 + 2) == '\0') || (uVar6 = 1, *(char *)((int)param_2 + 9) == '\0')) {
          uVar6 = 0;
        }
        (*(code *)0x10530a48/*ROM*/)
                  (&uStack_a,*(uint32_t *)(param_1 + 0x310),
                   *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4cc));
        (*(code *)0x10530c06/*ROM*/)
                  (&uStack_a,*(uint32_t *)(param_1 + 0x314),
                   *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4c8));
        (*(code *)0x1053109c/*ROM*/)
                  (&uStack_a,*(uint32_t *)(param_1 + 0x318),
                   *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4c4));
        iVar3 = *(int *)(iVar5 + 0xe4);
        uVar4 = return_constant_0x33((uint32_t)(&uStack_a));
        *(uint32_t *)(iVar3 + 0x4ec) = uVar4;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4e8) = *(uint32_t *)(param_1 + 0x310);
        iVar3 = *(int *)(iVar5 + 0xe4);
        uVar4 = return_constant_0x5468((uint32_t)(&uStack_a));
        *(uint32_t *)(iVar3 + 0x4fc) = uVar4;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f8) = *(uint32_t *)(param_1 + 0x314);
        iVar3 = *(int *)(iVar5 + 0xe4);
        uVar4 = call_subroutine_and_return_0x2026((uint32_t)(&uStack_a));
        *(uint32_t *)(iVar3 + 0x4f4) = uVar4;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f0) = *(uint32_t *)(param_1 + 0x318);
        iVar3 = initialize_exposure_state_block(param_1,iVar5,uVar6);
        if (iVar3 != 0) {
          *(uint32_t *)(param_1 + 0x2e8) = *(uint32_t *)(iVar5 + 0xe4);
          check_entry_flag_after_init(param_1);
        }
        uVar6 = query_exposure_mode_state_10507d2e(param_1,1);
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4ec) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4e8) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4fc) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f8) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f4) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f0) = 0;
      }
    }
  }
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar2,0xf,2);
    iVar5 = param_2[4];
    if (iVar5 != 0) {
      *(uint32_t *)(param_1 + 0x8c) = 1;
      iVar3 = map_exposure_mode_to_index((int)(param_1),(uint32_t *)(iVar5));
      if (iVar3 != 0) {
        if ((*(char *)(param_2 + 2) == '\0') || (uVar6 = 1, *(char *)((int)param_2 + 9) == '\0')) {
          uVar6 = 0;
        }
        (*(code *)0x10530a48/*ROM*/)
                  (&uStack_9,*(uint32_t *)(param_1 + 0x310),
                   *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4cc));
        (*(code *)0x10530c06/*ROM*/)
                  (&uStack_9,*(uint32_t *)(param_1 + 0x314),
                   *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4c8));
        (*(code *)0x1053109c/*ROM*/)
                  (&uStack_9,*(uint32_t *)(param_1 + 0x318),
                   *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4c4));
        iVar3 = *(int *)(iVar5 + 0xe4);
        uVar4 = return_constant_0x33((uint32_t)(&uStack_9));
        *(uint32_t *)(iVar3 + 0x4ec) = uVar4;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4e8) = *(uint32_t *)(param_1 + 0x310);
        iVar3 = *(int *)(iVar5 + 0xe4);
        uVar4 = return_constant_0x5468((uint32_t)(&uStack_9));
        *(uint32_t *)(iVar3 + 0x4fc) = uVar4;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f8) = *(uint32_t *)(param_1 + 0x314);
        iVar3 = *(int *)(iVar5 + 0xe4);
        uVar4 = call_subroutine_and_return_0x2026((uint32_t)(&uStack_9));
        *(uint32_t *)(iVar3 + 0x4f4) = uVar4;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f0) = *(uint32_t *)(param_1 + 0x318);
        iVar3 = initialize_exposure_state_block(param_1,iVar5,uVar6);
        if (iVar3 != 0) {
          *(uint32_t *)(param_1 + 0x2e8) = *(uint32_t *)(iVar5 + 0xe4);
          check_entry_flag_after_init(param_1);
        }
        uVar6 = query_exposure_mode_state_10507d2e(param_1,1);
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4ec) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4e8) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4fc) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f8) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f4) = 0;
        *(uint32_t *)(*(int *)(iVar5 + 0xe4) + 0x4f0) = 0;
      }
    }
  }
  return uVar6;
}
