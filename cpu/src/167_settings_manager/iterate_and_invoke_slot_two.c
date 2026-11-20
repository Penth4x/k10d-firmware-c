/* @k10d iterate_and_invoke_slot_two @ 0x10476ae6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a range of indices, fetches an object via a helper, and invokes its virtual
 *   slot 2 with argument 3.
 * summary:
 *   Reads a start index from offset 0x10 and an end index from offset 0x12 of the object in
 *   param_1. For each index, it calls read_bounded_array_element_10477358 with the object's
 *   offset 0xc and the current index; if the returned pointer is non-null, it performs a
 *   virtual call to slot 2 (offset 0xc) with a this-adjustment and argument 3. After the
 *   loop, it calls zero_clear_struct_array with the object's offset 0xc and clears two
 *   16-bit fields at offsets 0x2c and 0x2e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_invoke_slot_two(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x10);
  if (uVar2 <= *(ushort *)(param_1 + 0x12)) {
    do {
      piVar1 = (int *)read_bounded_array_element_10477358(param_1 + 0xc,uVar2 & 0xffff);
      if (piVar1 != (int *)0x0) {
        (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 <= (int)(uint)*(ushort *)(param_1 + 0x12));
  }
  zero_clear_struct_array((uint32_t *)(param_1 + 0xc));
  *(uint16_t *)(param_1 + 0x2e) = 0;
  *(uint16_t *)(param_1 + 0x2c) = 0;
  return;
}
