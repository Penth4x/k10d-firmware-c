/* @k10d process_event_queue_entry_1047b4d8 @ 0x1047b4d8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a flag on an object, then either updates a timer with a value from a linked list
 *   node or calls a handler with node data.
 * summary:
 *   The function first calls check_flag_and_null_byte on a field at offset 0x48 to check a
 *   condition. If true, it dereferences a pointer chain to get a node (iVar3) and calls
 *   decrement_counter_on_nonzero_result on a field at offset 0x50. If that second check
 *   passes, it inspects a byte at offset 0x18 of the node. If the byte is zero, it reads a
 *   short at offset 0x0a (clamping 9999 to 0), calls get_or_init_sram_object_10483206, and
 *   passes the result and the short to call_subroutine_with_offset_field_10483248. If the
 *   byte is non-zero, it clears the byte and calls send_struct_via_handler with the object,
 *   a pointer to node+8, and a value from node+4. Finally, it clears a field at offset 0x34
 *   of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_event_queue_entry_1047b4d8(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  short sVar4;
  
  iVar1 = check_flag_and_null_byte(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar3 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
    iVar1 = decrement_counter_on_nonzero_result(*(int *)(param_1 + 0x50));
    if (iVar1 != 0) {
      if (*(char *)(iVar3 + 0x18) == '\0') {
        sVar4 = *(short *)(iVar3 + 10);
        if (sVar4 == 9999) {
          sVar4 = 0;
        }
        uVar2 = get_or_init_sram_object_10483206();
        call_subroutine_with_offset_field_10483248(uVar2,sVar4);
      }
      else {
        *(uint8_t *)(iVar3 + 0x18) = 0;
        send_struct_via_handler(param_1,(void *)(iVar3 + 8),*(uint32_t *)(iVar3 + 4));
      }
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
  }
  return;
}
