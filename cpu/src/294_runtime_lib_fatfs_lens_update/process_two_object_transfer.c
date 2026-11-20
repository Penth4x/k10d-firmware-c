/* @k10d process_two_object_transfer @ 0x10543b58
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates two objects, performs a multi-stage data transfer between them, and commits
 *   the result.
 * summary:
 *   The function retrieves two objects via dispatch_parsed_string_result and checks their
 *   state fields, returning error codes -6 or -0x1e if invalid. It executes a transfer
 *   sequence using resolve_file_path_and_read and process_0x20_byte_records, handling
 *   specific error codes with retry logic. Finally, it commits the operation via
 *   process_buffered_data_block and releases resources using decrement_lens_update_step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10543da0) overlaps instruction at (ram,0x10543d9e)
    */

int process_two_object_transfer(char *param_1)

{
  struct {
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    ushort uStack_46;
    short sStack_42;
    short sStack_3e;
  } _cfg_54;
  struct {
    char * pcStack_28;
    char * pcStack_24;
    uint uStack_20;
    uint uStack_1c;
  } _cfg_28;
  struct {
    void * pvStack_18;
    void * pvStack_14;
    int * piStack_10;
    int * piStack_c;
  } _cfg_18;
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  int extraout_r4;
  uintptr_t sp;
  int *piVar6;
  uint32_t in_stack_00000010;
  uint8_t auStack_c0 [4];
  uint auStack_bc [2];
  uint32_t uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint16_t uStack_a8;
  uint16_t uStack_a6;
  uint8_t uStack_9e;
  byte bStack_9d;
  uint32_t uStack_9c;
  uint8_t auStack_98 [4];
  uint8_t auStack_94 [12];
  int aiStack_88 [2];
  uint32_t uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint16_t uStack_74;
  uint16_t uStack_72;
  ushort uStack_70;
  ushort uStack_6e;
  ushort uStack_6c;
  uint8_t uStack_6a;
  byte bStack_69;
  uint32_t uStack_68;
  uint8_t auStack_64 [4];
  uint8_t auStack_60 [12];
  uint *puStack_30;
  uint uStack_2c;
  piVar6 = (int *)auStack_c0;
  _cfg_28.uStack_20 = 0;
  iVar5 = dispatch_parsed_string_result(param_1,&_cfg_18.pvStack_18,&_cfg_28.pcStack_28);
  bVar1 = false;
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(short *)(*(int *)((int)_cfg_18.pvStack_18 + 100) + 0xe) != 0) {
    return -6;
  }
  iVar5 = dispatch_parsed_string_result((char *)(in_stack_00000010),(uint32_t *)(&_cfg_18.pvStack_14),(int *)(&_cfg_28.pcStack_24));
  pvVar4 = _cfg_18.pvStack_18;
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(short *)(*(int *)((int)_cfg_18.pvStack_14 + 100) + 0xe) != 0) {
    return -6;
  }
  if (*(int *)((int)_cfg_18.pvStack_14 + 0x7c) == 1) {
    return -0x1e;
  }
  *(uint32_t *)((int)_cfg_18.pvStack_14 + 0x78) = 0;
  *piVar6 = 0;
  iVar5 = resolve_file_path_and_read((int)pvVar4,_cfg_28.pcStack_28,(int *)&_cfg_28.uStack_1c,(int *)auStack_bc,(int *)*piVar6);
  if (iVar5 != 0) {
    if (iVar5 != -0x191) {
      return iVar5;
    }
    return -0x15;
  }
  puStack_30 = &_cfg_28.uStack_1c;
  iVar5 = process_0x20_byte_records(_cfg_18.pvStack_18,_cfg_28.uStack_1c,auStack_bc);
  if (iVar5 != 0) {
    return iVar5;
  }
  if ((bStack_9d & 0x10) != 0) {
    iVar5 = -0x15;
    goto LAB_10543efa;
  }
  iVar5 = validate_lens_fw_update_params((int)_cfg_18.pvStack_18,auStack_bc);
  if (iVar5 != 0) goto LAB_10543efa;
  iVar5 = allocate_and_link_event_node_105382e4((int)_cfg_18.pvStack_18,9,(int *)&_cfg_18.piStack_10,auStack_bc);
  pvVar4 = _cfg_18.pvStack_14;
  puVar3 = puStack_30;
  if (iVar5 != 0) {
    return iVar5;
  }
  *piVar6 = 0;
  iVar5 = resolve_file_path_and_read((int)pvVar4,_cfg_28.pcStack_24,(int *)puVar3,aiStack_88,(int *)*piVar6);
  if (iVar5 == -0x191) {
    iVar5 = -0x11;
  }
  else {
    if (iVar5 != 0) goto LAB_10543efa;
    iVar5 = (*(code *)0x10539f70/*ROM*/)(_cfg_18.pvStack_14,_cfg_28.uStack_1c,aiStack_88);
  }
  if (iVar5 == -0x11) {
    if ((bStack_69 & 0x10) == 0) {
      iVar5 = validate_lens_fw_update_params((int)_cfg_18.pvStack_14,aiStack_88);
      if (iVar5 != 0) goto LAB_10543efa;
      bVar1 = true;
    }
    else {
      _cfg_28.uStack_1c = uStack_7c;
      uStack_80 = uStack_b4;
      uStack_68 = uStack_9c;
      copy_null_terminated_string(auStack_60,auStack_94);
      copy_null_terminated_string(auStack_64,auStack_98);
      iVar5 = (*(code *)0x10539f70/*ROM*/)(_cfg_18.pvStack_14,_cfg_28.uStack_1c,aiStack_88);
      if (iVar5 != -0x11) goto joined_r0x10543da6;
      if ((bStack_69 & 0x10) != 0) {
        iVar5 = -0x15;
        goto LAB_10543efa;
      }
      bVar1 = true;
    }
  }
  else {
joined_r0x10543da6:
    if (iVar5 != 0) goto LAB_10543efa;
  }
  iVar5 = allocate_and_link_event_node_105382e4((int)_cfg_18.pvStack_14,0x18,(int *)&_cfg_18.piStack_c,aiStack_88);
  pvVar4 = _cfg_18.pvStack_14;
  uVar2 = uStack_ac;
  if (iVar5 != 0) goto LAB_10543efa;
  if ((bVar1) && ((bStack_69 & 1) != 0)) {
    iVar5 = -0x1e;
  }
  else {
    if (uStack_ac != 0) {
      *piVar6 = (int)&_cfg_28.uStack_20;
      iVar5 = transfer_data_blocks_with_checksum((int)_cfg_18.pvStack_18,uStack_b0,uVar2,pvVar4,(int *)*piVar6);
      if ((iVar5 != 0) || (lens_fw_update_step_1053db22((int)_cfg_18.pvStack_14), iVar5 = extraout_r4, extraout_r4 != 0))
      goto LAB_10543eee;
    }
    uStack_2c = uStack_7c;
    bStack_69 = bStack_9d;
    uStack_74 = uStack_a8;
    uStack_72 = uStack_a6;
    call_single_helper_1047f97e((uint32_t)(&_cfg_54.iStack_54));
    uStack_6e = (ushort)(_cfg_54.iStack_54 / 2) | (ushort)(_cfg_54.iStack_50 << 5) | (ushort)(_cfg_54.iStack_4c << 0xb);
    uStack_70 = (_cfg_54.sStack_42 + 1) * 0x20 | _cfg_54.uStack_46 | (_cfg_54.sStack_3e + -0x50) * 0x200;
    uStack_6a = uStack_9e;
    uStack_78 = uStack_ac;
    uStack_7c = _cfg_28.uStack_20;
    uStack_6c = uStack_70;
    iVar5 = process_buffered_data_block(_cfg_18.pvStack_14,aiStack_88);
    if (((iVar5 == 0) &&
        (((!bVar1 || (uStack_2c == 0)) ||
         (iVar5 = dispatch_lens_fw_update_step_1053d138(_cfg_18.pvStack_14,uStack_2c,*(uint32_t *)((int)_cfg_18.pvStack_14 + 0x54),0),
         iVar5 == 0)))) && (iVar5 = try_primary_then_fallback_loader(_cfg_18.pvStack_14), iVar5 == 0)) {
      iVar5 = decrement_lens_update_step(0x18,_cfg_18.piStack_c);
      if (iVar5 == 0) {
        iVar5 = decrement_lens_update_step(9,_cfg_18.piStack_10);
        return iVar5;
      }
      goto LAB_10543efa;
    }
  }
LAB_10543eee:
  decrement_lens_update_step(0x18,_cfg_18.piStack_c);
LAB_10543efa:
  decrement_lens_update_step(9,_cfg_18.piStack_10);
  return iVar5;
}
