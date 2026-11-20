/* @k10d process_sensor_readout_status @ 0x104ca8dc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks sensor readout status and updates a state field based on readout completion or
 *   error conditions.
 * summary:
 *   The function reads a status value from a pointer at offset 0x1e0 of the input object.
 *   If the status is zero, it clears the state field at 0x214. Otherwise, it performs a
 *   series of checks and calls helper functions (process_buffer_entry_and_dispatch,
 *   init_buffer_with_pool_alloc) to process the readout. It updates the state field at
 *   0x214 to 0, 3, or leaves it unchanged based on the results of these operations and the
 *   value at offset 0x10 of an intermediate object. It also calls
 *   prepare_and_dispatch_event_104be6aa and branch_on_byte_at_fd98, which appear to manage
 *   sensor or AFE state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_sensor_readout_status(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  int extraout_r4;
  uint32_t uVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_30 [8];
  uint uStack_c;
  
  puVar7 = (uint32_t *)auStack_30;
  iVar1 = (*(code *)0x1052d626/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
  if (iVar1 == 0) {
    *(uint32_t *)(param_1 + 0x214) = 0;
    iVar1 = 0;
  }
  else {
    iVar2 = (*(code *)0x1052d61a/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    uVar6 = *(uint32_t *)(param_1 + 0x48);
    uVar3 = (*(code *)0x1052d626/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
    iVar4 = process_buffer_entry_and_dispatch(uVar6,uVar3,*(uint32_t *)(iVar2 + 8));
    iVar1 = 0;
    if (iVar4 != 0) {
      call_helper_with_offset_arg_1052d62e(*(uint32_t *)(param_1 + 0x1e0));
      iVar1 = (*(code *)0x1052d61c/*ROM*/)(*(uint32_t *)(param_1 + 0x1e0));
      uVar3 = (*(code *)0x104c287e/*ROM*/)(iVar2,3);
      iVar4 = init_buffer_with_pool_alloc((int *)(iVar1),(int)(uVar3));
      if (iVar4 == 0) {
        uVar3 = 3;
        if (*(int *)(iVar1 + 0x10) != 2) {
          uVar3 = 0;
        }
        *(uint32_t *)(param_1 + 0x214) = uVar3;
        return 0;
      }
      eventflag_clr_flg((uint32_t *)(param_1 + 0x34),(uint)(0xffffffff));
      iVar4 = *(int *)(param_1 + 0x48);
      uVar5 = get_aligned_next_pointer(iVar1);
      uVar3 = (*(code *)0x104bcd52/*ROM*/)(iVar1);
      uVar6 = *(uint32_t *)(iVar2 + 8);
      *puVar7 = uVar3;
      puVar7[1] = uVar6;
      prepare_and_dispatch_event_104be6aa(iVar4,param_1 + 0x18,3,uVar5,*puVar7,puVar7[1]);
      iVar1 = 0;
      if (extraout_r4 != 0) {
        uStack_c = 0;
        do {
          eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
          eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
        } while ((uStack_c & 0xe000000) == 0);
        branch_on_byte_at_fd98(*(uint32_t *)(param_1 + 0x48));
        iVar1 = 1;
        if (*(int *)(param_1 + 0x40) == 0) {
          iVar1 = 0;
        }
      }
    }
    if (iVar1 == 0) {
      *(uint32_t *)(param_1 + 0x214) = 0;
      iVar2 = read_struct_field_0x2c(*(uint32_t *)(param_1 + 0x48));
      if ((iVar2 == 0) &&
         (iVar2 = (*(code *)0x104bcec2/*ROM*/)(*(uint32_t *)(param_1 + 0x48)), iVar2 != 0)) {
        *(uint32_t *)(param_1 + 0x214) = 3;
      }
    }
  }
  return iVar1;
}
