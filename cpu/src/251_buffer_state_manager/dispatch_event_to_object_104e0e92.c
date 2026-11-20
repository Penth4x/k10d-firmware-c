/* @k10d dispatch_event_to_object_104e0e92 @ 0x104e0e92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an event to an object based on a type code and state flag.
 * summary:
 *   The function reads a state flag at offset 0x10 and an event code at offset 0x34 from
 *   the input structure. It selects one of two object pointers (at 0x40 or 0x3c) based on
 *   the event code and performs a virtual method call on the selected object. The specific
 *   virtual slot is determined by the event code and the state flag. Finally, it clears the
 *   event code and the data field at offset 0x38.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_to_object_104e0e92(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(short *)(param_1 + 0x10) == 0x2001) {
    switch(iVar1) {
    case 1:
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
      (((vtbl_entry*)(iVar1))[7].fn)
                (*(int *)(param_1 + 0x40) + (int)((vtbl_entry*)(iVar1))[7].adj,
                 *(uint32_t *)(param_1 + 0x38));
      break;
    case 2:
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
      (((vtbl_entry*)(iVar1))[8].fn)
                (*(int *)(param_1 + 0x40) + (int)((vtbl_entry*)(iVar1))[8].adj,
                 *(uint32_t *)(param_1 + 0x38));
      break;
    case 3:
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
      (((vtbl_entry*)(iVar1))[7].fn)
                (*(int *)(param_1 + 0x3c) + (int)((vtbl_entry*)(iVar1))[7].adj,
                 *(uint32_t *)(param_1 + 0x38));
      break;
    case 4:
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
      (((vtbl_entry*)(iVar1))[8].fn)
                (*(int *)(param_1 + 0x3c) + (int)((vtbl_entry*)(iVar1))[8].adj,
                 *(uint32_t *)(param_1 + 0x38));
      break;
    case 5:
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
      (((vtbl_entry*)(iVar1))[3].fn)(*(int *)(param_1 + 0x3c) + (int)((vtbl_entry*)(iVar1))[3].adj);
      break;
    case 6:
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
      (((vtbl_entry*)(iVar1))[4].fn)(*(int *)(param_1 + 0x3c) + (int)((vtbl_entry*)(iVar1))[4].adj);
    }
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
    (((vtbl_entry*)(iVar1))[9].fn)
              (*(int *)(param_1 + 0x40) + (int)((vtbl_entry*)(iVar1))[9].adj,
               *(uint32_t *)(param_1 + 0x38));
  }
  else if ((iVar1 == 3) || (iVar1 == 4)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
    (((vtbl_entry*)(iVar1))[9].fn)
              (*(int *)(param_1 + 0x3c) + (int)((vtbl_entry*)(iVar1))[9].adj,
               *(uint32_t *)(param_1 + 0x38));
  }
  *(uint32_t *)(param_1 + 0x38) = 0;
  *(uint32_t *)(param_1 + 0x34) = 0;
  return;
}
