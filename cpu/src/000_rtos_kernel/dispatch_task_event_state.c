/* @k10d dispatch_task_event_state @ 0x1000cd5a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_task_event_state(uint32_t param_1,uint32_t param_2,int param_3,uint32_t param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  int r0_in;
  uint32_t uVar3;
  uint32_t r1_in;
  uint32_t r2_in;
  uint8_t *r3_in;
  uint32_t uVar4;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint32_t extraout_r4_01;
  uint32_t extraout_r4_02;
  uint32_t extraout_r4_03;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  uint32_t extraout_r5_02;
  uint32_t extraout_r5_03;
  uint32_t extraout_r5_04;
  uint32_t extraout_r5_05;
  uint32_t extraout_r5_06;
  uint32_t extraout_r5_07;
  uint16_t uVar5;
  int caller_r9;
  uint16_t uVar6;
  int caller_r10;
  int iVar7;
  int caller_r11;
  int r12_in;
  int r13_in;
  int *piVar8;
  uint16_t *puVar9;
  uintptr_t sp;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  uint32_t in_mdl;
  uint32_t in_mdh;
  uint32_t *puVar15;
  char in_CF;
  char in_ZF;
  ulonglong uVar16;
  
  do {
    r0_in = *(int *)(r13_in + r0_in);
  } while (in_CF == '\0' && in_ZF == '\0');
  uVar3 = *(uint32_t *)
           (r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int *
                                                  )(r13_in + *(int *)(r13_in + *(int *)(r13_in + *(
                                                  int *)(r13_in + *(int *)(r13_in + *(int *)(r13_in 
                                                  + *(int *)(r13_in + *(int *)(r13_in + *(int *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  r13_in + *(int *)(r13_in + *(int *)(r13_in + *(int
                                                                                                 *)(
                                                  r13_in + r0_in)))))))))))))))))))))))))))));
  piVar10 = (int *)&stack0xfffffff8;
  uVar4 = return_r4_passthrough_10537080();
  uVar16 = CONCAT44(uVar4,extraout_r5);
  uVar4 = piVar10[1];
  piVar10[1] = *piVar10;
  *piVar10 = r13_in;
  piVar10[-1] = r12_in;
  piVar10[-2] = caller_r11;
  piVar10[-3] = caller_r10;
  piVar13 = piVar10 + -4;
  *piVar13 = caller_r9;
  iVar7 = _DAT_6a003aa4;
  if (_DAT_6a003aa4 == 0) goto LAB_1000cfae;
  piVar10[-5] = uVar4;
  pbVar12 = (byte *)(piVar10 + -6);
  piVar11 = piVar10 + -6;
  piVar10[-6] = iVar7;
  uVar1 = uVar16;
  if ((*(byte *)(piVar10 + -6) & 0xd0) == 0) {
LAB_1000cf62:
    iVar7 = (uint)_DAT_6a003758 * 0x44;
    if (*(byte *)(iVar7 + 0x6a001c06) == 2) {
      *(uint32_t *)(pbVar12 + -4) = in_mdh;
      *(uint32_t *)(pbVar12 + -8) = in_mdl;
      *(uint32_t *)(pbVar12 + -0xc) = param_4;
      *(int *)(pbVar12 + -0x10) = param_3;
      *(ulonglong *)(pbVar12 + -0x18) = uVar1;
      *(uint8_t **)(pbVar12 + -0x1c) = r3_in;
      *(uint32_t *)(pbVar12 + -0x20) = r2_in;
      *(uint32_t *)(pbVar12 + -0x24) = r1_in;
      puVar15 = (uint32_t *)(pbVar12 + -0x28);
      *puVar15 = uVar3;
      *(uint8_t *)(iVar7 + 0x6a001c06) = 8;
      ready_list_unlink(_DAT_6a003758);
      pbVar12 = (byte *)(puVar15 + 10);
    }
    else {
      *(byte *)(iVar7 + 0x6a001c06) = *(byte *)(iVar7 + 0x6a001c06) | 8;
    }
  }
  else {
    iVar7 = (uint)_DAT_6a003758 * 0x44;
    puVar9 = (uint16_t *)(iVar7 + 0x6a001be8);
    pbVar12 = (byte *)(piVar10 + -6);
    if (PTR_FUN_10011c74 != 0) {
      uVar16 = (*(code *)PTR_FUN_10011c74)((uint)_DAT_6a003758);
      pbVar12 = (byte *)piVar11;
    }
    if (*(char *)(iVar7 + 0x6a001c06) == '\x02') {
      ready_list_unlink(_DAT_6a003758);
      uVar2 = _DAT_6a003758;
      uVar1 = (ulonglong)CONCAT24(_DAT_6a003758,extraout_r5_02);
      uVar16 = (ulonglong)CONCAT24(_DAT_6a003758,extraout_r5_02);
      iVar7 = (uint)_DAT_6a003758 * 0x44;
      puVar9 = (uint16_t *)(iVar7 + 0x6a001be8);
      if ((*pbVar12 & 0xc0) != 0) goto LAB_1000ce86;
      if ((*pbVar12 & 0x10) == 0) goto LAB_1000cf62;
      uVar5 = *(uint16_t *)(iVar7 + 0x6a001c18);
      uVar6 = *(uint16_t *)(iVar7 + 0x6a001c14);
      *puVar9 = 0xfffe;
      terminate_task_if_flag_set(uVar2);
      uVar16 = CONCAT44(extraout_r4_02,extraout_r5_05);
LAB_1000cee4:
      if ((pbVar12[1] & 0x10) == 0) goto LAB_1000cf16;
      param_3 = _DAT_6a003770;
      initialize_task_control_block(_DAT_6a003758,(uint16_t *)&DAT_6a00375c,_DAT_6a003770);
      uVar16 = CONCAT44(extraout_r4_03,extraout_r5_06);
      if ((pbVar12[1] & 0x40) == 0) {
        *(uint8_t *)(puVar9 + 0xf) = 0x10;
        goto LAB_1000cf16;
      }
LAB_1000cf4e:
      puVar9[0x16] = uVar6;
      uVar4 = cre_tsk_insert_setup(_DAT_6a003758, 0);
      uVar16 = CONCAT44(uVar4,extraout_r5_07);
    }
    else {
      if ((*(char *)(iVar7 + 0x6a001c07) == '\0') || (*(char *)(iVar7 + 0x6a001c07) == '\x01')) {
        if (*(int *)(iVar7 + 0x6a001c1c) != -1) {
          r3_in = &DAT_6a003758;
          remove_task_from_timeout_queue_1001166c(_DAT_6a003758);
          uVar16 = CONCAT44(extraout_r4,extraout_r5_00);
        }
      }
      else {
        remove_task_from_timeout_queue_1001166c(_DAT_6a003758);
        r3_in = &DAT_6a003758;
        param_3 = 0;
        remove_node_from_queue((uint)*(ushort *)(iVar7 + 0x6a001c08),(uint)_DAT_6a003758,0);
        uVar16 = CONCAT44(extraout_r4_00,extraout_r5_01);
        *(uint8_t *)(iVar7 + 0x6a001c06) = 0x10;
      }
LAB_1000ce86:
      uVar5 = puVar9[0x18];
      uVar6 = puVar9[0x16];
      if ((pbVar12[2] & 0x80) == 0) {
        *(uint8_t *)(puVar9 + 0xf) = 0x10;
      }
      else if ((pbVar12[1] & 0xc0) == 0) {
        uVar4 = call_three_kernel_routines();
        uVar16 = CONCAT44(uVar4,extraout_r5_03);
      }
      if ((*pbVar12 & 0x10) != 0) {
        if ((puVar9[0x19] & 0x8000) != 0) {
          insert_into_timeout_queue_1000e780((int)(uVar16 >> 0x20));
          uVar16 = CONCAT44(extraout_r4_01,extraout_r5_04);
        }
        *puVar9 = 0xfffe;
        *(uint32_t *)(puVar9 + 6) = 0;
        goto LAB_1000cee4;
      }
LAB_1000cf16:
      if ((pbVar12[1] & 0xc0) != 0) {
        r3_in = &DAT_6a003758;
        param_3 = (uint)_DAT_6a003758 * 0x44;
        puVar9 = (uint16_t *)(param_3 + 0x6a001be8);
        goto LAB_1000cf4e;
      }
    }
    if ((pbVar12[1] & 0x20) != 0) {
      puVar9[0x18] = uVar5;
      uVar1 = uVar16;
      goto LAB_1000cf62;
    }
  }
  uVar4 = *(uint32_t *)(pbVar12 + 4);
  piVar13 = (int *)(pbVar12 + 8);
LAB_1000cfae:
  if (DAT_6a003aa8 == '\0') {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if ((*(char *)((uint)_DAT_6a003758 * 0x44 + 0x6a001c0a) == '\0') &&
     (*(int *)((uint)_DAT_6a003758 * 0x44 + 0x6a001c24) != 0)) {
    piVar13[-1] = piVar13[1] & 0xffffffef;
    piVar14 = piVar13 + -2;
    piVar13 = piVar13 + -2;
    *piVar14 = (int)rtos_context_switch;
  }
  *DAT_10011c5c/*ROM*/ = 0;
  uVar3 = *(uint32_t *)((int)piVar13 + 0x14);
  *(uint32_t *)((int)piVar13 + 0x14) = *(uint32_t *)((int)piVar13 + 0x10);
  *(uint32_t *)((int)piVar13 + 0x10) = *(uint32_t *)((int)piVar13 + 0xc);
  *(uint32_t *)((int)piVar13 + 0xc) = *(uint32_t *)((int)piVar13 + 8);
  *(uint32_t *)((int)piVar13 + 8) = *(uint32_t *)((int)piVar13 + 4);
  piVar8 = (int *)((uint)_DAT_6a003758 * 4 + 0x6a003778);
  iVar7 = *piVar8;
  if (((iVar7 == -0x33) || (iVar7 == -0x31)) || (iVar7 == -0x32)) {
    *piVar8 = 0;
  }
  *(uint32_t *)((int)piVar13 + 0x14) = uVar4;
  *(uint32_t *)((int)piVar13 + 0x10) = uVar3;
  lens_fw_update_stub_1053708a();
  return;
}
