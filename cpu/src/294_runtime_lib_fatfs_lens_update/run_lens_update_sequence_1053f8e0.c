/* @k10d run_lens_update_sequence_1053f8e0 @ 0x1053f8e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Orchestrates a multi-step lens update sequence with state validation and error cleanup.
 * summary:
 *   The function validates the input object's state (checking fields at offsets 0x64 and
 *   0x7c) and proceeds through a series of helper calls: resolve_file_path_and_read, a
 *   direct call at 0x10539f70, allocate_and_link_event_node_105382e4,
 *   send_lens_command_block, and process_buffered_data_block. It constructs a parameter
 *   block on the stack (uStack_52..uStack_64) from values returned by
 *   call_single_helper_1047f97e. On success, it calls decrement_lens_update_step and
 *   try_primary_then_fallback_loader; on failure, it invokes cleanup routines like
 *   dispatch_lens_fw_update_step_1053d138. The module context suggests lens firmware
 *   update, but the specific 'firmware' nature is not explicitly verified in the code
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_lens_update_sequence_1053f8e0(char *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_74 [4];
  uint auStack_70 [3];
  uint32_t uStack_64;
  uint32_t uStack_60;
  ushort uStack_5c;
  ushort uStack_5a;
  ushort uStack_58;
  ushort uStack_56;
  ushort uStack_54;
  uint8_t uStack_52;
  byte bStack_51;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  ushort uStack_2e;
  short sStack_2a;
  short sStack_26;
  char *pcStack_18;
  int *piStack_14;
  int iStack_10;
  void *pvStack_c;
  
  piVar5 = (int *)auStack_74;
  iVar2 = dispatch_parsed_string_result(param_1,&pvStack_c,&pcStack_18);
  pvVar1 = pvStack_c;
  if (iVar2 == 0) {
    if (*(short *)(*(int *)((int)pvStack_c + 100) + 0xe) == 0) {
      if (*(int *)((int)pvStack_c + 0x7c) == 1) {
        iVar2 = -0x1e;
      }
      else {
        *(uint32_t *)((int)pvStack_c + 0x78) = 0;
        *piVar5 = 0;
        iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_18,&iStack_10,(int *)auStack_70,(int *)*piVar5);
        if (iVar2 == 0) {
          iVar2 = (*(code *)0x10539f70/*ROM*/)(pvStack_c,iStack_10,auStack_70);
          if ((iVar2 == 0) &&
             (iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_c,0x13,(int *)&piStack_14,auStack_70), iVar2 == 0))
          {
            bStack_51 = bStack_51 | 0x10;
            call_single_helper_1047f97e(&iStack_3c);
            pvVar1 = pvStack_c;
            uStack_5a = (ushort)(iStack_3c / 2) | (ushort)(iStack_38 << 5) |
                        (ushort)(iStack_34 << 0xb);
            uVar4 = (uint)uStack_5a;
            uStack_5c = (sStack_2a + 1) * 0x20 | uStack_2e | (sStack_26 + -0x50) * 0x200;
            uStack_52 = 0;
            uVar3 = (uint)uStack_5c;
            uStack_60 = 0;
            uStack_58 = uStack_5c;
            uStack_56 = uStack_5a;
            uStack_54 = uStack_5c;
            *piVar5 = (int)&uStack_64;
            iVar2 = send_lens_command_block(pvVar1,uVar3,uVar4,auStack_70[0],(uint *)*piVar5);
            if (iVar2 == 0) {
              iVar2 = process_buffered_data_block(pvStack_c,auStack_70);
              if (iVar2 == 0) {
                iVar2 = decrement_lens_update_step(0x13,piStack_14);
                if (iVar2 == 0) {
                  iVar2 = try_primary_then_fallback_loader(pvStack_c);
                }
                else {
                  try_primary_then_fallback_loader(pvStack_c);
                }
              }
              else {
                dispatch_lens_fw_update_step_1053d138(pvStack_c,uStack_64,*(uint32_t *)((int)pvStack_c + 0x54),0);
                decrement_lens_update_step(0x13,piStack_14);
                try_primary_then_fallback_loader(pvStack_c);
              }
            }
            else {
              decrement_lens_update_step(0x13,piStack_14);
              try_primary_then_fallback_loader(pvStack_c);
            }
          }
        }
        else if (iVar2 == -0x191) {
          iVar2 = -0x11;
        }
      }
    }
    else {
      iVar2 = -6;
    }
  }
  return iVar2;
}
