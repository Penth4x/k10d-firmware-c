/* @k10d run_seven_step_operation_sequence @ 0x10540ece
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Executes a multi-stage operation sequence with validation, state checks, and cleanup on
 *   failure.
 * summary:
 *   Validates the mode parameter (param_2) and initializes a context object via
 *   dispatch_parsed_string_result. It checks specific state fields in the context (offsets
 *   0x64, 0x7c) before proceeding through a chain of dependent calls
 *   (resolve_file_path_and_read, process_0x20_byte_records,
 *   allocate_and_link_event_node_105382e4, process_buffered_data_block). On success or
 *   failure, it ensures cleanup by calling decrement_lens_update_step and
 *   try_primary_then_fallback_loader, returning specific error codes for distinct failure
 *   modes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_seven_step_operation_sequence(char *param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_5c [4];
  uint auStack_58 [3];
  int iStack_4c;
  byte bStack_39;
  char *pcStack_24;
  uint uStack_20;
  int *piStack_1c;
  void *pvStack_18;
  
  puVar3 = (uint32_t *)auStack_5c;
  if ((param_2 & 0xffffffd8) == 0) {
    iVar2 = dispatch_parsed_string_result(param_1,&pvStack_18,&pcStack_24);
    pvVar1 = pvStack_18;
    if (iVar2 == 0) {
      if (*(short *)(*(int *)((int)pvStack_18 + 100) + 0xe) == 0) {
        if (*(int *)((int)pvStack_18 + 0x7c) == 1) {
          iVar2 = -0x1e;
        }
        else {
          *(uint32_t *)((int)pvStack_18 + 0x78) = 0;
          *puVar3 = 0;
          iVar2 = resolve_file_path_and_read((int)pvVar1,pcStack_24,(int *)&uStack_20,(int *)auStack_58,
                               (int *)*puVar3);
          if (iVar2 == 0) {
            iVar2 = process_0x20_byte_records(pvStack_18,uStack_20,auStack_58);
          }
          else if ((iVar2 == -0x191) && (iVar2 = 0, iStack_4c == *(int *)((int)pvStack_18 + 0x28)))
          {
            iVar2 = -0x334;
          }
          if ((iVar2 == 0) &&
             (iVar2 = allocate_and_link_event_node_105382e4((int)pvStack_18,0x11,(int *)&piStack_1c,auStack_58), iVar2 == 0))
          {
            if ((bStack_39 & 0x10) != 0) {
              param_2 = param_2 | 0x10;
            }
            bStack_39 = (byte)param_2;
            iVar2 = process_buffered_data_block(pvStack_18,auStack_58);
            if (iVar2 == 0) {
              iVar2 = decrement_lens_update_step(0x11,piStack_1c);
              if (iVar2 == 0) {
                iVar2 = try_primary_then_fallback_loader(pvStack_18);
              }
              else {
                try_primary_then_fallback_loader(pvStack_18);
              }
            }
            else {
              decrement_lens_update_step(0x11,piStack_1c);
              try_primary_then_fallback_loader(pvStack_18);
            }
          }
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
  return iVar2;
}
