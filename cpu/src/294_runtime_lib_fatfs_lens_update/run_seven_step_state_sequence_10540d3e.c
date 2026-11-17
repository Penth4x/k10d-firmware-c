/* @k10d run_seven_step_state_sequence_10540d3e @ 0x10540d3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a context object and executes a gated sequence of seven helper calls with
 *   cleanup on failure.
 * summary:
 *   The function calls dispatch_parsed_string_result to initialize a context pointer and
 *   checks specific fields at offsets 0x64 and 0x7c. If valid, it proceeds through a chain
 *   of calls (resolve_file_path_and_read, process_0x20_byte_records,
 *   allocate_and_link_event_node_105382e4, etc.) gated by bit flags in a local byte.
 *   Cleanup functions decrement_lens_update_step and try_primary_then_fallback_loader are
 *   invoked on various failure paths. The specific subsystem is not determinable from the
 *   pseudocode alone, despite the module name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_seven_step_state_sequence_10540d3e(char *param_1)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_50 [4];
  uint auStack_4c [3];
  int iStack_40;
  byte bStack_2d;
  char *pcStack_18;
  int *piStack_14;
  uint uStack_10;
  void *pvStack_c;
  
  puVar3 = (uint32_t *)auStack_50;
  iVar2 = dispatch_parsed_string_result(param_1,&pvStack_c,&pcStack_18);
  pvVar1 = pvStack_c;
  if (iVar2 == 0) {
    if (*(short *)(*(int *)((int)pvStack_c + 100) + 0xe) == 0) {
      if (*(int *)((int)pvStack_c + 0x7c) == 1) {
        iVar2 = -0x1e;
      }
      else {
        *(uint32_t *)((int)pvStack_c + 0x78) = 0;
        *puVar3 = 0;
        iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_18,(int *)&uStack_10,(int *)auStack_4c,
                             (int *)*puVar3);
        if (iVar2 == 0) {
          iVar2 = process_0x20_byte_records(pvStack_c,uStack_10,auStack_4c);
        }
        else if (iVar2 == -0x191) {
          iVar2 = -0x1f6;
        }
        if (iVar2 == 0) {
          if ((bStack_2d & 0x10) == 0) {
            iVar2 = -0x14;
          }
          else if ((bStack_2d & 1) == 0) {
            iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_c,0xf,(int *)&piStack_14,auStack_4c);
            if (iVar2 == 0) {
              iVar2 = (*(code *)0x1053a314/*ROM*/)(pvStack_c,iStack_40);
              if (iVar2 == 0) {
                iVar2 = init_buffer_with_0xe5_padding(pvStack_c,auStack_4c);
                if (iVar2 == 0) {
                  if ((iStack_40 == 0) || (iVar2 = (*(code *)0x1053d1a4/*ROM*/)(pvStack_c), iVar2 == 0)) {
                    iVar2 = decrement_lens_update_step(0xf,piStack_14);
                    if (iVar2 == 0) {
                      iVar2 = try_primary_then_fallback_loader(pvStack_c);
                    }
                    else {
                      try_primary_then_fallback_loader(pvStack_c);
                    }
                  }
                  else {
                    decrement_lens_update_step(0xf,piStack_14);
                    try_primary_then_fallback_loader(pvStack_c);
                  }
                }
                else {
                  decrement_lens_update_step(0xf,piStack_14);
                  try_primary_then_fallback_loader(pvStack_c);
                }
              }
              else {
                decrement_lens_update_step(0xf,piStack_14);
              }
            }
          }
          else {
            iVar2 = -0x1e;
          }
        }
      }
    }
    else {
      iVar2 = -6;
    }
  }
  return iVar2;
}
