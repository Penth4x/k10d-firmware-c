/* @k10d dispatch_event_to_handler_103653a0 @ 0x103653a0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an event parameter and conditionally flags a state change before invoking a
 *   virtual handler method.
 * summary:
 *   The function calls read_array_element_at_offset to obtain a pointer based on param_1
 *   and param_2, then extracts a byte from offset 4 of that result. It checks if param_3
 *   matches a value at param_1+0x21c; if so, it calls read_byte_from_buffer and
 *   read_table_entry_if_valid to determine a flag (uVar4). Finally, it performs a virtual
 *   call on the object at param_1+0x70, invoking the method at vtable offset 0xe4 with
 *   param_2, the extracted byte, and the computed flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_handler_103653a0(int param_1,int param_2,uint param_3,int param_4)

{
  uint8_t uVar1;
  int iVar2;
  char cVar3;
  uint32_t uVar4;
  
  iVar2 = read_array_element_at_offset(param_1 + 0x1c,param_2);
  uVar1 = *(uint8_t *)(iVar2 + 4);
  uVar4 = 0;
  if (param_3 == *(ushort *)(param_1 + 0x21c)) {
    cVar3 = read_byte_from_buffer((int *)(param_1 + 0x224),param_4);
    if ((cVar3 != '\0') && (iVar2 = read_table_entry_if_valid((int *)(param_1 + 0x224),param_4), iVar2 == 1)) {
      uVar4 = 1;
    }
  }
  iVar2 = **(int **)(param_1 + 0x70);
  (((vtbl_entry*)(iVar2))[28].fn)
            ((int)*(int **)(param_1 + 0x70) + (int)((vtbl_entry*)(iVar2))[28].adj,param_2,uVar1,uVar4);
  return;
}
