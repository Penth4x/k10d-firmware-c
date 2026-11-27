/* @k10d process_event_queue_entry_103fe55a @ 0x103fe55a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Validates and dispatches an event structure, updating internal counters and processing
 *   associated data.
 * summary:
 *   The function first validates the event pointer using count_string_bytes. If valid, it
 *   copies 0x1c bytes from the source to the destination structure. It then calls two
 *   helper functions (compute_adjusted_value and compute_centered_text_offset) with fields
 *   from the event, adding their return values to short fields at offsets 0x4 and 0x6 of
 *   the destination. Finally, it enters a loop that processes data pointed to by the first
 *   field of the destination, calling try_two_checks_on_pair, check_two_conditions, and
 *   advance_pointer_on_carriage_return, with error handling via
 *   advance_and_process_buffer_entry and decode_and_advance_token.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_event_queue_entry_103fe55a(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  iVar1 = count_string_bytes((char *)*param_2);
  if (iVar1 != 0) {
    iVar1 = 0x1c;
    do {
      iVar1 = iVar1 + -4;
      *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)(iVar1 + (int)param_2);
    } while (iVar1 != 0);
    uVar2 = compute_adjusted_value(param_1,(uint)*(ushort *)((int)param_2 + 0x12),
                         (uint)*(ushort *)(param_2 + 5),(void *)*param_2);
    *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + (short)uVar2;
    uVar2 = compute_centered_text_offset(param_1,(uint)*(ushort *)((int)param_2 + 0x16),
                         (uint)*(ushort *)(param_2 + 6),(char *)*param_2);
    *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + (short)uVar2;
    pbVar4 = (byte *)*param_1;
    if (*pbVar4 != 0) {
      do {
        iVar1 = try_two_checks_on_pair(param_1,pbVar4);
        if (iVar1 == 0) {
          iVar1 = check_two_conditions(param_1,(byte *)*param_1);
          if (iVar1 == 0) {
            *(uint8_t *)((int)param_1 + 0x5a) = 0;
            iVar1 = 0x1c;
            do {
              iVar1 = iVar1 + -4;
              *(uint32_t *)(iVar1 + (int)auStack_24) = *(uint32_t *)(iVar1 + (int)param_2);
            } while (iVar1 != 0);
            bVar3 = advance_pointer_on_carriage_return(param_1,auStack_24);
            if (!bVar3) break;
          }
          else {
            advance_and_process_buffer_entry(param_1);
          }
        }
        else {
          decode_and_advance_token((int *)(uint32_t)param_1);
        }
        pbVar4 = (byte *)*param_1;
      } while (*pbVar4 != 0);
    }
    *(uint8_t *)((int)param_1 + 0x5a) = 0;
  }
  return;
}
