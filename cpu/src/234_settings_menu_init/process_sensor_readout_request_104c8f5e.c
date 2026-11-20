/* @k10d process_sensor_readout_request_104c8f5e @ 0x104c8f5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 234_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool process_sensor_readout_request_104c8f5e(int param_1)

{
  char cVar4;
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  int extraout_r4;
  bool bVar5;
  bool bVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uintptr_t sp;
  int *piVar10;
  uint8_t auStack_260 [20];
  cls_105b9458 cStack_22c;
  uint32_t auStack_18 [2];
  int iStack_10;
  uint uStack_c;
  
  piVar10 = (int *)auStack_260;
  cls_105b9458_new(&cStack_22c);
  copy_large_struct((uint32_t *)(*(int *)(param_1 + 0xbc) + 0x34),*(uint32_t **)(param_1 + 0xd8));
  *(uint32_t *)(*(int *)(param_1 + 0xbc) + 0x18) = 2;
  *(uint8_t *)(*(int *)(param_1 + 0xbc) + 0x210) = 0;
  cVar4 = read_byte_at_offset_104c2842(*(void **)(param_1 + 0xd8),2);
  if (cVar4 == '\0') {
    *(uint32_t *)(param_1 + 0x214) = 0;
LAB_104c91d8:
    cls_105b9458_delete(&cStack_22c,2);
    return false;
  }
  uVar1 = (*(code *)0x104c287e/*ROM*/)(*(uint32_t *)(param_1 + 0xd8),2);
  iVar2 = init_buffer_with_pool_alloc(&cStack_22c,uVar1);
  if (iVar2 == 0) {
    uVar1 = 3;
    if (cStack_22c.field_0x10 != 2) {
      uVar1 = 0;
    }
    *(uint32_t *)(param_1 + 0x214) = uVar1;
    goto LAB_104c91d8;
  }
  eventflag_clr_flg((uint32_t *)(param_1 + 0x34),(uint)(0xffffffff));
  iVar2 = *(int *)(param_1 + 0x48);
  uVar3 = get_aligned_next_pointer((int)&cStack_22c);
  uVar1 = (*(code *)0x104bcd52/*ROM*/)(&cStack_22c);
  uVar8 = *(uint32_t *)(*(int *)(param_1 + 0xd8) + 8);
  *piVar10 = uVar1;
  piVar10[1] = uVar8;
  prepare_and_dispatch_event_104be6aa(iVar2,param_1 + 0x18,2,uVar3,*piVar10,piVar10[1]);
  bVar6 = false;
  if (extraout_r4 != 0) {
    uStack_c = 0;
    do {
      eventflag_wai_flg((uint32_t *)(param_1 + 0x34),0xf000000,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x34),uStack_c);
    } while ((uStack_c & 0xe000000) == 0);
    branch_on_byte_at_fd98(*(uint32_t *)(param_1 + 0x48));
    bVar6 = true;
    if (*(int *)(param_1 + 0x40) == 0) {
      bVar6 = false;
    }
  }
  if (!bVar6) {
    *(uint32_t *)(param_1 + 0x214) = 0;
    iVar2 = read_struct_field_0x2c(*(uint32_t *)(param_1 + 0x48));
    if ((iVar2 == 0) && (iVar2 = (*(code *)0x104bcec2/*ROM*/)(*(uint32_t *)(param_1 + 0x48)), iVar2 != 0)
       ) {
      *(uint32_t *)(param_1 + 0x214) = 3;
    }
    goto LAB_104c91d8;
  }
  if (*(char *)(param_1 + 0x218) != '\0') {
    *(uint32_t *)(param_1 + 0x214) = 2;
    goto LAB_104c91d8;
  }
  alloc_and_zero_two_words_1045c3bc(auStack_18);
  iStack_10 = 1;
  uVar8 = *(uint32_t *)(param_1 + 0x4c);
  uVar3 = get_aligned_next_pointer((int)&cStack_22c);
  uVar1 = (*(code *)0x104bcd52/*ROM*/)(&cStack_22c);
  *piVar10 = (int)&iStack_10;
  bVar5 = init_struct_and_call_two_helpers(uVar8,uVar3,uVar1,auStack_18,(uint32_t *)*piVar10);
  bVar6 = false;
  if (bVar5) {
    iVar2 = compute_buffer_size_and_init(*(void **)(param_1 + 0xbc),auStack_18,iStack_10);
    if (iVar2 == 0) {
      if (*(int *)(*(int *)(param_1 + 0xbc) + 0x10) == 2) {
        *(uint8_t *)(param_1 + 0x219) = 1;
      }
      else {
        *(uint32_t *)(param_1 + 0x214) = 0;
      }
      free_heap_if_flagged_1045c402(auStack_18,2);
      goto LAB_104c91d8;
    }
    uVar7 = *(uint32_t *)(param_1 + 0x4c);
    uVar3 = get_aligned_next_pointer((int)&cStack_22c);
    uVar8 = (*(code *)0x104bcd52/*ROM*/)(&cStack_22c);
    iVar2 = *(int *)(param_1 + 0xbc);
    uVar1 = *(uint32_t *)(iVar2 + 0x24);
    uVar9 = *(uint32_t *)(iVar2 + 0x28);
    *piVar10 = *(uint32_t *)(iVar2 + 0x20);
    piVar10[2] = uVar9;
    iVar2 = iStack_10;
    piVar10[1] = uVar1;
    piVar10[3] = iVar2;
    piVar10[4] = iVar2;
    bVar6 = build_and_send_command_packet_104c2df6(uVar7,uVar3,uVar8,auStack_18,*piVar10,piVar10[1],piVar10[2],piVar10[3],
                         piVar10[4]);
    if (bVar6) {
      if (*(char *)(param_1 + 0x218) != '\0') {
        *(uint32_t *)(param_1 + 0x214) = 2;
        bVar6 = false;
      }
      goto LAB_104c9268;
    }
  }
  *(uint32_t *)(param_1 + 0x214) = 0;
LAB_104c9268:
  *(bool *)(*(int *)(param_1 + 0xbc) + 0x210) = bVar6;
  free_heap_if_flagged_1045c402(auStack_18,2);
  cls_105b9458_delete(&cStack_22c,2);
  return bVar6;
}
