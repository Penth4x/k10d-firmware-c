/* @k10d write_data_block_to_device @ 0x1054150a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates device state and writes a specified data range to the target device via a
 *   series of helper calls.
 * summary:
 *   The function checks the validity of the input pointer and the state of the device
 *   object (pvStack_20). It calculates offsets and lengths using helper functions
 *   (unsigned_divide, compute_modulo_10544c28) and performs the write operation through
 *   dispatch_lens_fw_update_step_1053d2bc and dispatch_lens_fw_update_step_1053d138. It
 *   updates an internal progress or offset variable (uStack_d4) and returns the result of
 *   the final status check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_data_block_to_device(char *param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r4;
  int extraout_r4_00;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint *in_stack_00000010;
  uint8_t auStack_e8 [4];
  uint auStack_e4 [3];
  uint uStack_d8;
  uint uStack_d4;
  ushort uStack_d0;
  ushort uStack_ce;
  byte bStack_c5;
  uint8_t auStack_b0 [4];
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  ushort uStack_9a;
  short sStack_96;
  short sStack_92;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  ushort uStack_76;
  short sStack_72;
  short sStack_6e;
  void *pvStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  char *pcStack_2c;
  uint uStack_28;
  uint uStack_24;
  void *pvStack_20;
  int *piStack_1c;
  uint uStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  
  piVar6 = (int *)auStack_e8;
  iStack_38 = 0;
  if (in_stack_00000010 == (uint *)0x0) {
    return -0x16;
  }
  iVar2 = dispatch_parsed_string_result(param_1,&pvStack_20,&pcStack_2c);
  pvVar1 = pvStack_20;
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(short *)(*(int *)((int)pvStack_20 + 100) + 0xe) != 0) {
    return -6;
  }
  if (*(int *)((int)pvStack_20 + 0x7c) == 1) {
    return -0x1e;
  }
  *(uint32_t *)((int)pvStack_20 + 0x78) = 0;
  *piVar6 = 0;
  iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_2c,(int *)&uStack_28,(int *)auStack_e4,(int *)*piVar6);
  if (iVar2 != 0) {
    if (iVar2 != -0x191) {
      return iVar2;
    }
    return -0x15;
  }
  iVar2 = process_0x20_byte_records(pvStack_20,uStack_28,auStack_e4);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((bStack_c5 & 0x10) == 0x10) {
    return -0x15;
  }
  iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_20,7,(int *)&piStack_1c,auStack_e4);
  if (iVar2 != 0) goto code_r0x10541a40;
  iVar2 = validate_lens_fw_update_params((int)pvStack_20,auStack_e4);
  if (iVar2 == 0) {
    uStack_34 = uStack_d4;
    *in_stack_00000010 = uStack_d4;
    if ((bStack_c5 & 1) == 0) {
      if (param_2 == uStack_d4) {
        iVar2 = 0;
      }
      else {
        uVar5 = *(uint *)((int)pvStack_20 + 0x10);
        if (uStack_d4 < param_2) {
          uStack_58 = uStack_d8;
          if (uStack_d8 == 0) {
            uStack_24 = 0;
          }
          else {
            uVar3 = unsigned_divide(uStack_d4 - 1,uVar5);
            iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvStack_20,uStack_58,uVar3,&uStack_24);
            if (iVar2 != 0) goto code_r0x10541a2e;
          }
          uStack_3c = uStack_24;
          uVar3 = compute_modulo_10544c28(uStack_34,uVar5);
          pvVar1 = pvStack_20;
          iVar2 = param_2 - uStack_34;
          *piVar6 = (int)&uStack_24;
          iVar4 = (*(code *)0x10543452/*ROM*/)(pvVar1,uVar3,iVar2,auStack_b0);
          uStack_54 = uStack_d8;
          if (uStack_d8 == 0) {
            uStack_d8 = uStack_24;
          }
          else if (uStack_3c != uStack_24) {
            if (uStack_d8 == uStack_3c) {
              uStack_d8 = uStack_24;
            }
            else {
              uVar5 = unsigned_divide(uStack_34 - 1,uVar5);
              iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvStack_20,uStack_54,uVar5 - 1,&uStack_18);
              if ((iVar2 != 0) ||
                 (iVar2 = dispatch_lens_update_step((int)pvStack_20,uStack_18,uStack_24), iVar2 != 0))
              goto code_r0x10541a2e;
            }
          }
          uStack_d4 = uStack_d4 + iStack_ac;
          if (param_2 < uStack_d4) {
            uStack_d4 = param_2;
          }
          iVar2 = iStack_38;
          if (((iVar4 == 0) || (iVar2 = iVar4, iVar4 == -0x1c)) &&
             (iStack_38 = iVar2, lens_fw_update_step_1053db22((int)pvStack_20), iVar2 = extraout_r4,
             extraout_r4 == 0)) {
            call_single_helper_1047f97e(&iStack_a8);
            uStack_ce = (ushort)(iStack_a8 / 2) | (ushort)(iStack_a4 << 5) |
                        (ushort)(iStack_a0 << 0xb);
            uStack_d0 = (sStack_96 + 1) * 0x20 | uStack_9a | (sStack_92 + -0x50) * 0x200;
            iVar2 = process_buffered_data_block(pvStack_20,auStack_e4);
          }
        }
        else {
          uStack_d4 = param_2;
          call_single_helper_1047f97e(&iStack_84);
          uStack_ce = (ushort)(iStack_84 / 2) | (ushort)(iStack_80 << 5) |
                      (ushort)(iStack_7c << 0xb);
          uStack_d0 = (sStack_72 + 1) * 0x20 | uStack_76 | (sStack_6e + -0x50) * 0x200;
          if (param_2 == 0) {
            uStack_24 = uStack_d8;
            uStack_d8 = 0;
            iVar2 = process_buffered_data_block(pvStack_20,auStack_e4);
            if ((iVar2 == 0) &&
               (iVar2 = dispatch_lens_fw_update_step_1053d138(pvStack_20,uStack_24,*(uint32_t *)((int)pvStack_20 + 0x54),0)
               , iVar2 == 0)) goto code_r0x10541a12;
          }
          else {
            iVar2 = process_buffered_data_block(pvStack_20,auStack_e4);
            if (iVar2 == 0) {
              pvStack_60 = pvStack_20;
              uStack_5c = uStack_d8;
              uStack_4c = param_2 - 1;
              uStack_48 = unsigned_divide(uStack_4c,uVar5);
              iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvStack_60,uStack_5c,uStack_48,&uStack_24);
              if (iVar2 == 0) {
                uStack_40 = unsigned_divide(uStack_34,uVar5);
                uVar3 = compute_modulo_10544c28(uStack_34,uVar5);
                if (uVar3 != 0) {
                  uStack_40 = uStack_40 + 1;
                }
                uStack_44 = unsigned_divide(param_2,uVar5);
                uStack_50 = compute_modulo_10544c28(param_2,uVar5);
                if (uStack_50 != 0) {
                  uStack_44 = uStack_44 + 1;
                }
                if ((uStack_40 <= uStack_44) ||
                   (iVar2 = dispatch_lens_fw_update_step_1053d138(pvStack_20,uStack_24,
                                         *(uint32_t *)((int)pvStack_20 + 0x54),
                                         *(uint32_t *)((int)pvStack_20 + 0x54)), iVar2 == 0)) {
                  uStack_30 = uStack_50;
                  if (uStack_50 == 0) {
code_r0x10541a12:
                    if (iVar2 == 0) {
                      lens_fw_update_step_1053db22((int)pvStack_20);
                      iVar2 = extraout_r4_00;
                      goto code_r0x10541a2e;
                    }
                  }
                  else {
                    iVar2 = write_data_block_with_offset(pvStack_20,uStack_24,uStack_50);
                    if ((iVar2 == 0) || (iVar2 != -5)) goto code_r0x10541a12;
                    iVar2 = lens_fw_get_block_ptr(pvStack_20,uStack_24,&iStack_14);
                    if (iVar2 != 0) {
                      iVar2 = -0x389;
                      goto code_r0x10541a12;
                    }
                    fill_byte_array((void *)(iStack_14 + 8 + uStack_30),0,uVar5 - uStack_30);
                    iVar2 = transmit_data_block_with_retry(pvStack_20,iStack_14 + 8,uStack_24,(int *)&uStack_10);
                    clear_lens_update_entry(pvStack_20,uStack_24);
                    if (iVar2 == 0) {
                      if (uStack_d8 == uStack_24) {
                        uStack_d8 = uStack_10;
                        iVar2 = process_buffered_data_block(pvStack_20,auStack_e4);
                      }
                      else {
                        iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvStack_20,uStack_d8,uStack_48 - 1,&uStack_c);
                        if (iVar2 != 0) goto code_r0x10541a24;
                        iVar2 = dispatch_lens_update_step((int)pvStack_20,uStack_c,uStack_10);
                      }
                      goto code_r0x10541a12;
                    }
                  }
code_r0x10541a24:
                  lens_fw_update_step_1053db22((int)pvStack_20);
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar2 = -0x1e;
    }
  }
code_r0x10541a2e:
  *in_stack_00000010 = uStack_d4;
  decrement_lens_update_step(7,piStack_1c);
code_r0x10541a40:
  if (iStack_38 != 0) {
    iVar2 = iStack_38;
  }
  return iVar2;
}
