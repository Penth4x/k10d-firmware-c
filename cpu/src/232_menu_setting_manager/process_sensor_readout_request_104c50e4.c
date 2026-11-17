/* @k10d process_sensor_readout_request_104c50e4 @ 0x104c50e4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Validates and dispatches a sensor readout command, handling initialization or data
 *   transfer based on state.
 * summary:
 *   The function checks a status flag via read_byte_at_offset_104c2842. If valid, it
 *   processes the request using init_buffer_with_pool_alloc. Depending on the state at
 *   param_1+0x50, it either initializes a buffer (calling
 *   prepare_and_dispatch_event_104be6aa and looping with eventflag_wai_flg) or performs a
 *   data transfer (calling init_buffer_and_dispatch). It sets a flag at param_1+0x219 and
 *   returns a status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_sensor_readout_request_104c50e4(int param_1,void *param_2)

{
  char cVar4;
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  int extraout_r4;
  int extraout_r4_00;
  int iVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_3c [8];
  uint uStack_c;
  
  puVar7 = (uint32_t *)auStack_3c;
  iVar5 = *(int *)((int)param_2 + 0x18);
  *(uint8_t *)(param_1 + 0x219) = 0;
  cVar4 = read_byte_at_offset_104c2842((void *)((int)param_2 + 0x34),iVar5);
  if (cVar4 == '\0') {
    *(uint8_t *)((int)param_2 + 0x210) = 0;
    iVar5 = 0;
  }
  else {
    uVar1 = (*(code *)0x104c287e/*ROM*/)((void *)((int)param_2 + 0x34),iVar5);
    iVar2 = init_buffer_with_pool_alloc(param_2,uVar1);
    if (iVar2 == 0) {
      if (*(int *)((int)param_2 + 0x10) == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
      *(uint8_t *)((int)param_2 + 0x210) = 0;
      iVar5 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x50) == 0) {
        eventflag_clr_flg((uint32_t *)(param_1 + 0x34),0xffffffff);
        iVar2 = *(int *)(param_1 + 0x48);
        uVar3 = get_aligned_next_pointer((int)param_2);
        uVar1 = (*(code *)0x104bcd52/*ROM*/)(param_2);
        uVar6 = *(uint32_t *)((int)param_2 + 0x3c);
        *puVar7 = uVar1;
        puVar7[1] = uVar6;
        prepare_and_dispatch_event_104be6aa(iVar2,param_1 + 0x18,iVar5,uVar3,*puVar7,puVar7[1]);
        iVar5 = 0;
        if (extraout_r4 != 0) {
          uStack_c = 0;
          do {
            eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
            eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
          } while ((uStack_c & 0xe000000) == 0);
          branch_on_byte_at_fd98(*(uint32_t *)(param_1 + 0x48));
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = 1;
          }
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x48);
        uVar3 = get_aligned_next_pointer((int)param_2);
        uVar1 = (*(code *)0x104bcd52/*ROM*/)(param_2);
        *puVar7 = *(uint32_t *)((int)param_2 + 0x3c);
        init_buffer_and_dispatch(iVar2,iVar5,uVar3,uVar1,*puVar7);
        iVar5 = extraout_r4_00;
      }
      if (((iVar5 == 0) && (iVar2 = read_struct_field_0x2c(*(uint32_t *)(param_1 + 0x48)), iVar2 == 0)) &&
         (iVar2 = (*(code *)0x104bcec2/*ROM*/)(*(uint32_t *)(param_1 + 0x48)), iVar2 != 0)) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
      *(char *)((int)param_2 + 0x210) = (char)iVar5;
    }
  }
  return iVar5;
}
