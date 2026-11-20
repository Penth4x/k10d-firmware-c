/* @k10d dispatch_pending_state_action @ 0x1039f4c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Checks a state field and calls a specific handler if it matches one of three stored
 *   values, wrapping the call with virtual method invocations.
 * summary:
 *   The function reads a byte at offset 0x34 and an int at 0x3c from the object passed in
 *   param_1. If the byte is non-zero and the int is zero, it compares the value at offset
 *   0x38 against values stored at offsets 0x74, 0x90, and 0x78. Depending on which match
 *   occurs, it calls a virtual method (slot 3) on the object at offset 0x2c with arguments
 *   0x130068 and 2, then calls one of three specific functions
 *   (dispatch_virtual_event_with_flag, notify_object_event_if_active, or
 *   register_menu_item_on_state_change) with the matched value, and finally calls the
 *   virtual method again with 0. The function always concludes by calling virtual method
 *   slot 2 on the object at offset 0x30 with arguments 0x1170005 and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039f4dc) overlaps instruction at (ram,0x1039f4da)
    */

void dispatch_pending_state_action(int param_1)

{
  int iVar1;
  char cVar2;
  
  if ((*(char *)(param_1 + 0x34) != '\0') && (*(int *)(param_1 + 0x3c) == 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_1 + 0x74)) {
      iVar1 = **(int **)(param_1 + 0x2c);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[3].adj,0x130068,2);
      dispatch_virtual_event_with_flag(*(uint32_t *)(param_1 + 0x74));
      iVar1 = **(int **)(param_1 + 0x2c);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[3].adj,0x130068,0);
    }
    else if (iVar1 == *(int *)(param_1 + 0x90)) {
      iVar1 = **(int **)(param_1 + 0x2c);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[3].adj,0x130068,2);
      notify_object_event_if_active(*(uint32_t *)(param_1 + 0x90));
      iVar1 = **(int **)(param_1 + 0x2c);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[3].adj,0x130068,0);
    }
    else if ((iVar1 == *(int *)(param_1 + 0x78)) &&
            (cVar2 = read_byte_at_offset_0x65(*(int *)(param_1 + 0x78)), cVar2 == '\0')) {
      iVar1 = **(int **)(param_1 + 0x2c);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[3].adj,0x130068,2);
      register_menu_item_on_state_change(*(uint32_t *)(param_1 + 0x78));
      iVar1 = **(int **)(param_1 + 0x2c);
      (((vtbl_entry*)(iVar1))[3].fn)
                ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[3].adj,0x130068,0);
    }
  }
  iVar1 = **(int **)(param_1 + 0x30);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[2].adj,0x1170005,0);
  return;
}
