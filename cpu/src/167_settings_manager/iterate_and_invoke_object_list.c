/* @k10d iterate_and_invoke_object_list @ 0x1047527c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a count from an object header, calling a virtual method on each item from a
 *   list, then finalizes the list.
 * summary:
 *   Reads a start and end index from offsets 0x28 and 0x2a of the input object. In a loop,
 *   it calls get_bounded_array_element to retrieve an item pointer from the list at offset
 *   0xc, and if valid, invokes virtual slot 1 (offset 0xc) on that item with an argument of
 *   3. After the loop, it calls zero_initialize_900_word_buffer on the list pointer and
 *   clears a field at offset 0x68. The specific camera subsystem role is not determinable
 *   from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_invoke_object_list(int param_1)

{
  int *piVar1;
  ushort uVar2;
  
  uVar2 = *(short *)(param_1 + 0x28) + 100;
  if (uVar2 <= (ushort)(*(short *)(param_1 + 0x2a) + 100U)) {
    do {
      piVar1 = (int *)get_bounded_array_element((int *)(param_1 + 0xc));
      if (piVar1 != (int *)0x0) {
        (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= (ushort)(*(short *)(param_1 + 0x2a) + 100U));
  }
  zero_initialize_900_word_buffer((int *)(param_1 + 0xc));
  *(uint16_t *)(param_1 + 0x68) = 0;
  return;
}
