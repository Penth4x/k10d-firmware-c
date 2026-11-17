/* @k10d process_sensor_readout_request_104e6a1e @ 0x104e6a1e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Validates and executes a sensor readout or data transfer operation with error handling
 *   and resource cleanup.
 * summary:
 *   The function validates input flags and object state before initiating a multi-step data
 *   operation. It calls helper functions to prepare buffers, transfer data, and finalize
 *   the process, returning specific error codes for various failure conditions. On error,
 *   it cleans up allocated resources and releases locks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e6b80) overlaps instruction at (ram,0x104e6b7e)
    */

int process_sensor_readout_request_104e6a1e(uint32_t param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ushort uVar5;
  uintptr_t sp;
  int iStack_2bc;
  int iStack_2b8;
  uint uStack_2b0;
  int iStack_2ac;
  uint16_t uStack_2a8;
  uint16_t uStack_2a6;
  int *piStack_80;
  ushort uStack_7c;
  uint16_t uStack_7a;
  uint32_t uStack_78;
  uint16_t uStack_74;
  uint16_t uStack_72;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  uint uStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  void *pvStack_54;
  uint32_t uStack_50;
  int iStack_4c;
  int iStack_48;
  uint32_t uStack_44;
  uint8_t auStack_40 [32];
  uint8_t *puStack_20;
  int *piStack_1c;
  uint uStack_18;
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  
  if ((param_2 & 0xfffffcf4) == 0) {
    if ((((param_2 & 1) == 0) && ((param_2 & 2) == 0)) && (param_2 != 0)) {
      iVar1 = -0x16;
    }
    else if ((param_2 & 0x100) == 0) {
      iVar1 = (*(code *)0x10538c70/*ROM*/)(param_1,&piStack_10);
      if (iVar1 == 0) {
        if (*(int *)(*piStack_10 + 8) == 1) {
          pvVar4 = *(void **)(*piStack_10 + 0xc);
          if (*(short *)(*(int *)((int)pvVar4 + 100) + 0xe) == 0) {
            if ((param_2 == 0) || (*(int *)((int)pvVar4 + 0x7c) != 1)) {
              uVar5 = 6;
              if (param_2 != 0) {
                uVar5 = 7;
              }
              if ((uint)piStack_10[9] < 2) {
                iVar1 = -0x334;
              }
              else {
                iStack_4c = piStack_10[8];
                iStack_48 = piStack_10[9] + -1;
                uStack_44 = 1;
                puStack_20 = auStack_40;
                iVar1 = dispatch_param2_command((int)pvVar4,&iStack_4c,puStack_20);
                if (iVar1 == 0) {
                  piStack_1c = &iStack_2bc;
                  swap_lens_info_fields(puStack_20,1,piStack_1c);
                  iStack_2bc = piStack_10[5];
                  iStack_2b8 = piStack_10[7] + -1;
                  iVar1 = check_flag_and_dispatch_104e6dd0(pvVar4,piStack_1c,param_2);
                  if ((iVar1 == 0) &&
                     (iVar1 = allocate_and_link_event_node_105382e4((int)pvVar4,uVar5,(int *)&piStack_80,piStack_1c),
                     iVar1 == 0)) {
                    uStack_18 = param_2 & 0x200;
                    if ((uStack_18 == 0) || (iVar1 = func_0x104e6e08(pvVar4,piStack_1c), iVar1 == 0)
                       ) {
                      uStack_78 = 1;
                      uStack_7a = (uint16_t)param_2;
                      uStack_74 = uStack_2a8;
                      uStack_72 = uStack_2a6;
                      iStack_70 = iStack_2ac;
                      uStack_6c = uStack_2b0;
                      uStack_68 = 0;
                      uStack_58 = 0;
                      pvStack_54 = (void *)0x0;
                      uStack_50 = 0;
                      uStack_7c = uVar5;
                      if (iStack_2ac != 0) {
                        if (param_2 == 0) {
                          iVar1 = (*(code *)0x1053d3a6/*ROM*/)(pvVar4,&piStack_80);
                        }
                        else {
                          uVar2 = unsigned_divide(iStack_2ac - 1,*(uint *)((int)pvVar4 + 0x10));
                          iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)pvVar4,uStack_2b0,uVar2,&uStack_68);
                        }
                        if (iVar1 != 0) {
                          if (iVar1 == -0x1f5) {
                            iVar1 = -0x390;
                          }
                          release_heap_block_1047f9bc(pvStack_54);
                          pvStack_54 = (void *)0x0;
                          try_primary_then_fallback_loader(pvVar4);
                          decrement_lens_update_step(uVar5,piStack_80);
                          return iVar1;
                        }
                        iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)pvVar4,uStack_68,1,&uStack_c);
                        if (iVar1 != 0) {
                          release_heap_block_1047f9bc(pvStack_54);
                          pvStack_54 = (void *)0x0;
                          try_primary_then_fallback_loader(pvVar4);
                          decrement_lens_update_step(uVar5,piStack_80);
                          return iVar1;
                        }
                        if (uStack_c <= *(uint *)((int)pvVar4 + 0x50)) {
                          release_heap_block_1047f9bc(pvStack_54);
                          pvStack_54 = (void *)0x0;
                          try_primary_then_fallback_loader(pvVar4);
                          decrement_lens_update_step(uVar5,piStack_80);
                          return -0x390;
                        }
                      }
                      if ((param_2 & 8) == 0) {
                        iStack_64 = 0;
                        uStack_60 = uStack_2b0;
                      }
                      else {
                        iStack_64 = iStack_2ac;
                        uStack_60 = uStack_68;
                      }
                      uStack_5c = 0;
                      iVar3 = (*(code *)0x10538b86/*ROM*/)(pvVar4,&piStack_80,&iStack_14);
                      if (iVar3 == 0) {
                        if ((uStack_18 == 0) || (iVar3 = try_primary_then_fallback_loader(pvVar4), iVar3 == 0)) {
                          iVar1 = iStack_14;
                          if (iVar3 < 0) {
                            (*(code *)0x10538c98/*ROM*/)(iStack_14);
                            decrement_lens_update_step(uVar5,piStack_80);
                            iVar1 = iVar3;
                          }
                        }
                        else {
                          (*(code *)0x10538c98/*ROM*/)(iStack_14);
                          decrement_lens_update_step(uVar5,piStack_80);
                          iVar1 = iVar3;
                        }
                      }
                      else {
                        release_heap_block_1047f9bc(pvStack_54);
                        pvStack_54 = (void *)0x0;
                        try_primary_then_fallback_loader(pvVar4);
                        decrement_lens_update_step(uVar5,piStack_80);
                        iVar1 = iVar3;
                      }
                    }
                    else {
                      decrement_lens_update_step(uVar5,piStack_80);
                    }
                  }
                }
              }
            }
            else {
              iVar1 = -0x1e;
            }
          }
          else {
            iVar1 = -6;
          }
        }
        else {
          iVar1 = -9;
        }
      }
    }
    else {
      iVar1 = -0x16;
    }
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}
