/* @k10d process_two_buffer_transfer @ 0x10540886
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates two input buffers, performs a two-stage data transfer with state checks, and
 *   commits the result.
 * summary:
 *   The function calls dispatch_parsed_string_result twice to resolve two pointers from
 *   input parameters, then verifies they are identical and checks specific state fields
 *   (offsets 0x64, 0x7c). It executes a transfer sequence using resolve_file_path_and_read
 *   and process_0x20_byte_records, handling specific error codes (-0x191, -0x11). The final
 *   stage involves further state updates and calls to decrement_lens_update_step for
 *   cleanup or finalization. The logic is complex with multiple branches based on flag bits
 *   in local variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_two_buffer_transfer(char *param_1)

{
  bool bVar1;
  uint *puVar2;
  void *pvVar3;
  int iVar4;
  ushort caller_r11;
  uintptr_t sp;
  uint32_t *puVar5;
  uint32_t in_stack_00000010;
  uint8_t auStack_c4 [4];
  uint uStack_c0;
  int iStack_bc;
  uint32_t uStack_b8;
  uint uStack_b4;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint8_t uStack_a2;
  byte bStack_a1;
  uint32_t uStack_a0;
  uint8_t auStack_9c [4];
  uint8_t auStack_98 [12];
  uint uStack_8c;
  int iStack_88;
  uint32_t uStack_84;
  uint uStack_80;
  uint32_t uStack_7c;
  uint16_t uStack_78;
  uint16_t uStack_76;
  ushort uStack_74;
  ushort uStack_72;
  ushort uStack_70;
  uint8_t uStack_6e;
  byte bStack_6d;
  uint32_t uStack_6c;
  uint8_t auStack_68 [4];
  uint8_t auStack_64 [12];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  ushort uStack_4a;
  short sStack_46;
  short sStack_42;
  uint *puStack_34;
  uint *puStack_30;
  uint uStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  uint uStack_20;
  int *piStack_1c;
  int *piStack_18;
  void *pvStack_14;
  void *pvStack_10;
  ushort uStack_a;
  
  puVar5 = (uint32_t *)auStack_c4;
  uStack_2c = 0;
  iVar4 = dispatch_parsed_string_result(param_1,&pvStack_14,&pcStack_28);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = dispatch_parsed_string_result((char *)(in_stack_00000010),(uint32_t *)(&pvStack_10),(int *)(&pcStack_24));
  pvVar3 = pvStack_14;
  if (iVar4 != 0) {
    return iVar4;
  }
  if (pvStack_14 != pvStack_10) {
    return -0x16;
  }
  if (*(short *)(*(int *)((int)pvStack_14 + 100) + 0xe) != 0) {
    return -6;
  }
  if (*(int *)((int)pvStack_14 + 0x7c) == 1) {
    return -0x1e;
  }
  *(uint32_t *)((int)pvStack_14 + 0x78) = 0;
  *puVar5 = 0;
  iVar4 = resolve_file_path_and_read((int)pvVar3,pcStack_28,(int *)&uStack_20,(int *)&uStack_c0,(int *)*puVar5);
  if (iVar4 != 0) {
    if (iVar4 != -0x191) {
      return iVar4;
    }
    return -0x1f6;
  }
  puStack_34 = &uStack_20;
  iVar4 = process_0x20_byte_records(pvStack_14,uStack_20,&uStack_c0);
  if (iVar4 != 0) {
    return iVar4;
  }
  if ((bStack_a1 & 1) != 0) {
    iVar4 = -0x1e;
    goto LAB_10540d26;
  }
  iVar4 = allocate_and_link_event_node_105382e4((int)pvStack_14,0xc,(int *)&piStack_1c,&uStack_c0);
  if (iVar4 != 0) {
    return iVar4;
  }
  bVar1 = false;
  if ((bStack_a1 & 0x10) == 0) {
    iVar4 = validate_lens_fw_update_params((int)pvStack_14,&uStack_c0);
    pvVar3 = pvStack_10;
    puVar2 = puStack_34;
    if (iVar4 != 0) goto LAB_10540d26;
    *puVar5 = 0;
    iVar4 = resolve_file_path_and_read((int)pvVar3,pcStack_24,(int *)puVar2,(int *)&uStack_8c,(int *)*puVar5);
  }
  else {
    iVar4 = (*(code *)0x1053e6ee/*ROM*/)();
    pvVar3 = pvStack_10;
    puVar2 = puStack_34;
    if (iVar4 != 0) goto LAB_10540d26;
    *puVar5 = (uintptr_t)(&uStack_c0);
    iVar4 = resolve_file_path_and_read((int)pvVar3,pcStack_24,(int *)puVar2,(int *)&uStack_8c,(int *)*puVar5);
  }
  if (iVar4 == -0x191) {
    iVar4 = -0x11;
  }
  else {
    if (iVar4 != 0) goto LAB_10540d26;
    iVar4 = (*(code *)0x10539f70/*ROM*/)(pvStack_10,uStack_20,&uStack_8c);
  }
  if (iVar4 == -0x11) {
    if ((bStack_6d & 0x10) == 0) {
      if (((bStack_a1 & 0x10) != 0) ||
         (iVar4 = validate_lens_fw_update_params((int)pvStack_10,&uStack_8c), iVar4 != 0)) goto LAB_10540d26;
      bVar1 = true;
    }
    else {
      if ((((bStack_a1 & 0x10) != 0) && (uStack_c0 == uStack_8c)) && (iStack_bc == iStack_88)) {
        iVar4 = -0x334;
        goto LAB_10540d26;
      }
      uStack_20 = uStack_80;
      uStack_84 = uStack_b8;
      uStack_6c = uStack_a0;
      copy_null_terminated_string(auStack_64,auStack_98);
      copy_null_terminated_string(auStack_68,auStack_9c);
      iVar4 = (*(code *)0x10539f70/*ROM*/)(pvStack_10,uStack_20,&uStack_8c);
      if (iVar4 != -0x11) goto joined_r0x10540b66;
      if ((bStack_6d & 0x10) != 0) {
        iVar4 = -0x15;
        goto LAB_10540d26;
      }
      if ((bStack_a1 & 0x10) != 0) goto LAB_10540d26;
      bVar1 = true;
    }
  }
  else {
joined_r0x10540b66:
    if (iVar4 != 0) goto LAB_10540d26;
  }
  if (bVar1) {
    if ((bStack_6d & 1) == 0) {
      uStack_2c = uStack_80;
      goto LAB_10540b8c;
    }
    iVar4 = -0x1e;
  }
  else {
LAB_10540b8c:
    if ((bStack_a1 & 0x10) == 0) {
      caller_r11 = 0x1d;
      if (!bVar1) {
        caller_r11 = 0x1c;
      }
    }
    else {
      caller_r11 = 0x1e;
    }
    puStack_30 = &uStack_8c;
    uStack_a = caller_r11;
    iVar4 = allocate_and_link_event_node_105382e4((int)pvStack_10,caller_r11,(int *)&piStack_18,puStack_30);
    if (iVar4 == 0) {
      bStack_6d = bStack_a1;
      uStack_78 = uStack_ac;
      uStack_76 = uStack_aa;
      call_single_helper_1047f97e((uint32_t)(&iStack_58));
      uStack_72 = (ushort)(iStack_58 / 2) | (ushort)(iStack_54 << 5) | (ushort)(iStack_50 << 0xb);
      uStack_74 = (sStack_46 + 1) * 0x20 | uStack_4a | (sStack_42 + -0x50) * 0x200;
      uStack_6e = uStack_a2;
      uStack_7c = uStack_b0;
      uStack_80 = uStack_b4;
      uStack_70 = uStack_74;
      iVar4 = process_buffered_data_block(pvStack_10,puStack_30);
      if (iVar4 == 0) {
        uStack_c0 = piStack_1c[4];
        uStack_b4 = piStack_1c[7];
        uStack_80 = piStack_18[7];
        if (((bStack_a1 & 0x10) != 0) && (uStack_c0 != uStack_8c)) {
          if (uStack_8c == *(uint *)((int)pvStack_10 + 0x28)) {
            iVar4 = send_two_word_command_pair(pvStack_14,uStack_b4,0);
          }
          else {
            iVar4 = send_two_word_command_pair(pvStack_14,uStack_b4,uStack_8c);
          }
          if ((iVar4 != 0) && (iVar4 != -0x390)) goto LAB_10540d16;
        }
        iVar4 = init_buffer_with_0xe5_padding(pvStack_14,&uStack_c0);
        if (((iVar4 == 0) &&
            (((!bVar1 || (uStack_2c == 0)) ||
             (iVar4 = dispatch_lens_fw_update_step_1053d138(pvStack_10,uStack_2c,*(uint32_t *)((int)pvStack_10 + 0x54),0),
             iVar4 == 0)))) && (iVar4 = try_primary_then_fallback_loader(pvStack_10), iVar4 == 0)) {
          iVar4 = decrement_lens_update_step(uStack_a,piStack_18);
          if (iVar4 == 0) {
            iVar4 = decrement_lens_update_step(0xc,piStack_1c);
            return iVar4;
          }
          goto LAB_10540d26;
        }
      }
    }
  }
LAB_10540d16:
  decrement_lens_update_step(caller_r11,piStack_18);
LAB_10540d26:
  decrement_lens_update_step(0xc,piStack_1c);
  return iVar4;
}
