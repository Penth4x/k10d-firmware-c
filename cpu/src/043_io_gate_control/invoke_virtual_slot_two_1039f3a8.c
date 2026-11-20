/* @k10d invoke_virtual_slot_two_1039f3a8 @ 0x1039f3a8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Sets a flag byte and invokes virtual slot 2 on an object pointer stored at offset 0x30.
 * summary:
 *   The function checks if the byte at param_1 + 0x34 is non-zero and sets the byte at
 *   param_1 + 0x35 to 1 if so. It then dereferences the pointer at param_1 + 0x30 to get an
 *   object pointer, and calls virtual slot 2 (offset 0x14) on that object with arguments
 *   0x1170003 and 0. The this-pointer is adjusted by the short value at offset 0x10 of the
 *   vtable. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1039f3a8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(uint8_t *)(param_1 + 0x35) = 1;
  }
  iVar1 = **(int **)(param_1 + 0x30);
  (((vtbl_entry*)(iVar1))[2].fn)
            ((int)*(int **)(param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[2].adj,0x1170003,0);
  return;
}
