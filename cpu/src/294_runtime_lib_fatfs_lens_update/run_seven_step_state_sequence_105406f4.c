/* @k10d run_seven_step_state_sequence_105406f4 @ 0x105406f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Executes a gated, multi-step state transition sequence with conditional cleanup on
 *   failure.
 * summary:
 *   The function calls dispatch_parsed_string_result to initialize a context object, then
 *   checks several state fields and flags (e.g., bit 0x10 and bit 0 of a byte at offset
 *   0x35). If conditions are met, it proceeds through a chain of calls
 *   (resolve_file_path_and_read, process_0x20_byte_records, validate_lens_fw_update_params,
 *   allocate_and_link_event_node_105382e4, init_buffer_with_0xe5_padding,
 *   dispatch_lens_fw_update_step_1053d138, try_primary_then_fallback_loader). On failure at
 *   any step, it invokes decrement_lens_update_step and try_primary_then_fallback_loader
 *   for cleanup. The specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_seven_step_state_sequence_105406f4(char *param_1)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_58 [4];
  uint auStack_54 [3];
  int iStack_48;
  byte bStack_35;
  char *pcStack_20;
  int *piStack_1c;
  uint uStack_18;
  void *pvStack_14;
  
  puVar3 = (uint32_t *)auStack_58;
  iVar2 = dispatch_parsed_string_result(param_1,&pvStack_14,&pcStack_20);
  pvVar1 = pvStack_14;
  if (iVar2 == 0) {
    if (*(short *)(*(int *)((int)pvStack_14 + 100) + 0xe) == 0) {
      if (*(int *)((int)pvStack_14 + 0x7c) == 1) {
        iVar2 = -0x1e;
      }
      else {
        *(uint32_t *)((int)pvStack_14 + 0x78) = 0;
        *puVar3 = 0;
        iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_20,(int *)&uStack_18,(int *)auStack_54,
                             (int *)*puVar3);
        if (iVar2 == 0) {
          iVar2 = process_0x20_byte_records(pvStack_14,uStack_18,auStack_54);
          if (iVar2 == 0) {
            if ((bStack_35 & 0x10) == 0) {
              if ((bStack_35 & 1) == 0) {
                iVar2 = validate_lens_fw_update_params((int)pvStack_14,auStack_54);
                if ((iVar2 == 0) &&
                   (iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_14,0xe,(int *)&piStack_1c,auStack_54),
                   iVar2 == 0)) {
                  iVar2 = init_buffer_with_0xe5_padding(pvStack_14,auStack_54);
                  if (iVar2 == 0) {
                    if ((iStack_48 == 0) ||
                       (iVar2 = dispatch_lens_fw_update_step_1053d138(pvStack_14,iStack_48,
                                             *(uint32_t *)((int)pvStack_14 + 0x54),0), iVar2 == 0)
                       ) {
                      iVar2 = try_primary_then_fallback_loader(pvStack_14);
                      if (iVar2 == 0) {
                        iVar2 = decrement_lens_update_step(0xe,piStack_1c);
                      }
                      else {
                        decrement_lens_update_step(0xe,piStack_1c);
                      }
                    }
                    else {
                      decrement_lens_update_step(0xf,piStack_1c);
                      try_primary_then_fallback_loader(pvStack_14);
                    }
                  }
                  else {
                    decrement_lens_update_step(0xe,piStack_1c);
                    try_primary_then_fallback_loader(pvStack_14);
                  }
                }
              }
              else {
                iVar2 = -0x1e;
              }
            }
            else {
              iVar2 = -0x15;
            }
          }
        }
        else if (iVar2 == -0x191) {
          iVar2 = -0x15;
        }
      }
    }
    else {
      iVar2 = -6;
    }
  }
  return iVar2;
}
