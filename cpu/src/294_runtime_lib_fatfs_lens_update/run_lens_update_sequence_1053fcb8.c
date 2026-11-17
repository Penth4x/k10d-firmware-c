/* @k10d run_lens_update_sequence_1053fcb8 @ 0x1053fcb8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates flags and executes a multi-stage lens communication sequence with error
 *   cleanup.
 * summary:
 *   Checks param_2 against a bitmask (0xfffffcf4) and initializes a context object via
 *   dispatch_parsed_string_result. It branches based on flag bits (0x100, 0x200, 8) to call
 *   different helper functions (process_0x20_byte_records, resolve_file_path_and_read,
 *   process_buffered_data_block) and performs data transfers via
 *   dispatch_lens_fw_update_step_1053d2bc. On failure, it releases resources using
 *   try_primary_then_fallback_loader and decrement_lens_update_step before returning the
 *   error code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053fdc0) overlaps instruction at (ram,0x1053fdbe)
    */

int run_lens_update_sequence_1053fcb8(char *param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  ushort in_stack_00000012;
  uint8_t auStack_b0 [4];
  uint auStack_ac [3];
  uint uStack_a0;
  int iStack_9c;
  ushort uStack_98;
  ushort uStack_96;
  ushort uStack_94;
  ushort uStack_92;
  ushort uStack_90;
  uint8_t uStack_8d;
  int *piStack_78;
  ushort uStack_74;
  uint16_t uStack_72;
  uint32_t uStack_70;
  ushort uStack_6c;
  ushort uStack_6a;
  int iStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  void *pvStack_4c;
  uint32_t uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ushort uStack_36;
  short sStack_32;
  short sStack_2e;
  uint uStack_20;
  int iStack_1c;
  char *pcStack_18;
  uint uStack_14;
  void *pvStack_10;
  uint uStack_c;
  
  puVar6 = (uint32_t *)auStack_b0;
  if ((param_2 & 0xfffffcf4) == 0) {
    if ((((param_2 & 1) == 0) && ((param_2 & 2) == 0)) && (param_2 != 0)) {
      iVar2 = -0x16;
    }
    else {
      uStack_20 = param_2 & 0x100;
      if ((uStack_20 == 0) || ((in_stack_00000012 & 0xffd9) == 0)) {
        iVar2 = dispatch_parsed_string_result(param_1,&pvStack_10,&pcStack_18);
        pvVar1 = pvStack_10;
        if (iVar2 == 0) {
          if (*(short *)(*(int *)((int)pvStack_10 + 100) + 0xe) == 0) {
            if ((param_2 == 0) || (*(int *)((int)pvStack_10 + 0x7c) != 1)) {
              if (param_2 == 0) {
                uVar5 = 6;
              }
              else {
                uVar5 = 7;
              }
              *puVar6 = 0;
              iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_18,(int *)&uStack_14,(int *)auStack_ac,
                                   (int *)*puVar6);
              if (iVar2 == 0) {
                if (uStack_20 == 0) {
                  iVar2 = process_0x20_byte_records(pvStack_10,uStack_14,auStack_ac);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar2 = check_lens_update_status(pvStack_10,auStack_ac,param_2);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_10,uVar5,(int *)&piStack_78,auStack_ac);
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  if (((param_2 & 0x200) != 0) &&
                     (iVar2 = func_0x1054019a(pvStack_10,auStack_ac), iVar2 != 0)) {
                    decrement_lens_update_step(uVar5,piStack_78);
                    return iVar2;
                  }
                }
                else {
                  iVar2 = (*(code *)0x10539f70/*ROM*/)(pvStack_10,uStack_14,auStack_ac);
                  if (iVar2 == -0x11) {
                    iVar2 = check_lens_update_status(pvStack_10,auStack_ac,param_2);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_10,uVar5,(int *)&piStack_78,auStack_ac);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    if (((param_2 & 0x200) != 0) &&
                       (iVar2 = func_0x1054019a(pvStack_10,auStack_ac), iVar2 != 0)) {
                      decrement_lens_update_step(uVar5,piStack_78);
                      return iVar2;
                    }
                  }
                  else {
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    uStack_8d = (uint8_t)in_stack_00000012;
                    iStack_9c = 0;
                    uStack_a0 = 0;
                    call_single_helper_1047f97e(&iStack_44);
                    uStack_96 = (ushort)(iStack_44 / 2) | (ushort)(iStack_40 << 5) |
                                (ushort)(iStack_3c << 0xb);
                    uStack_98 = (sStack_32 + 1) * 0x20 | uStack_36 | (sStack_2e + -0x50) * 0x200;
                    uStack_94 = uStack_98;
                    uStack_92 = uStack_96;
                    uStack_90 = uStack_98;
                    iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_10,uVar5,(int *)&piStack_78,auStack_ac);
                    if (iVar2 != 0) {
                      return iVar2;
                    }
                    *(uint32_t *)((int)pvStack_10 + 0x78) = 0;
                    iVar2 = process_buffered_data_block(pvStack_10,auStack_ac);
                    if (iVar2 != 0) {
                      decrement_lens_update_step(uVar5,piStack_78);
                      return iVar2;
                    }
                  }
                }
                uStack_70 = 1;
                uStack_6c = uStack_98;
                uStack_72 = (uint16_t)param_2;
                uStack_6a = uStack_96;
                iStack_68 = iStack_9c;
                uStack_64 = uStack_a0;
                uStack_60 = 0;
                uStack_50 = 0;
                pvStack_4c = (void *)0x0;
                uStack_48 = 0;
                uStack_74 = uVar5;
                if (iStack_9c != 0) {
                  if (param_2 == 0) {
                    iVar2 = (*(code *)0x1053d3a6/*ROM*/)(pvStack_10,&piStack_78);
                  }
                  else {
                    uVar3 = unsigned_divide(iStack_9c - 1,*(uint *)((int)pvStack_10 + 0x10));
                    iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvStack_10,uStack_a0,uVar3,&uStack_60);
                  }
                  if (iVar2 != 0) {
                    if (iVar2 == -0x1f5) {
                      iVar2 = -0x390;
                    }
                    release_heap_block_1047f9bc(pvStack_4c);
                    pvStack_4c = (void *)0x0;
                    try_primary_then_fallback_loader(pvStack_10);
                    decrement_lens_update_step(uVar5,piStack_78);
                    return iVar2;
                  }
                  iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)pvStack_10,uStack_60,1,&uStack_c);
                  if (iVar2 != 0) {
                    release_heap_block_1047f9bc(pvStack_4c);
                    pvStack_4c = (void *)0x0;
                    try_primary_then_fallback_loader(pvStack_10);
                    decrement_lens_update_step(uVar5,piStack_78);
                    return iVar2;
                  }
                  if (uStack_c <= *(uint *)((int)pvStack_10 + 0x50)) {
                    release_heap_block_1047f9bc(pvStack_4c);
                    pvStack_4c = (void *)0x0;
                    try_primary_then_fallback_loader(pvStack_10);
                    decrement_lens_update_step(uVar5,piStack_78);
                    return -0x390;
                  }
                }
                if ((param_2 & 8) == 0) {
                  iStack_5c = 0;
                  uStack_58 = uStack_a0;
                }
                else {
                  iStack_5c = iStack_9c;
                  uStack_58 = uStack_60;
                }
                uStack_54 = 0;
                iVar4 = (*(code *)0x10538b86/*ROM*/)(pvStack_10,&piStack_78,&iStack_1c);
                if (iVar4 == 0) {
                  if (((param_2 & 0x200) == 0) || (iVar4 = try_primary_then_fallback_loader(pvStack_10), iVar4 == 0)) {
                    iVar2 = iStack_1c;
                    if (iVar4 < 0) {
                      (*(code *)0x10538c98/*ROM*/)();
                      decrement_lens_update_step(uVar5,piStack_78);
                      iVar2 = iVar4;
                    }
                  }
                  else {
                    (*(code *)0x10538c98/*ROM*/)(iStack_1c);
                    decrement_lens_update_step(uVar5,piStack_78);
                    iVar2 = iVar4;
                  }
                }
                else {
                  release_heap_block_1047f9bc(pvStack_4c);
                  pvStack_4c = (void *)0x0;
                  try_primary_then_fallback_loader(pvStack_10);
                  decrement_lens_update_step(uVar5,piStack_78);
                  iVar2 = iVar4;
                }
              }
              else if (iVar2 == -0x191) {
                iVar2 = -0x15;
              }
            }
            else {
              iVar2 = -0x1e;
            }
          }
          else {
            iVar2 = -6;
          }
        }
      }
      else {
        iVar2 = -0x16;
      }
    }
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}
