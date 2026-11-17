/* @k10d update_index_from_lookup @ 0x10368efa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Updates an index field in a struct based on a lookup result and a table entry.
 * summary:
 *   The function calls a virtual method (slot 0x6c) on the object to get an index. If the
 *   index is valid (non-zero), it compares it against a current value stored at offset
 *   0x1c. If they differ, it updates the current value, retrieves a new value from a helper
 *   function, and stores both the new value and a corresponding entry from a table (at
 *   offset 0x130) into the struct at offsets 0x16 and 0x18. The callees
 *   write_byte_at_offset_five, read_byte_at_offset_five_1051e924, and
 *   read_pointer_from_table appear to be accessors or updaters for the field at offset
 *   0x1c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_index_from_lookup(int param_1)

{
  char cVar2;
  byte bVar3;
  uint16_t uVar1;
  uint uVar4;
  int iVar5;
  
  cVar2 = (*(code *)0x1038202a/*ROM*/)(param_1 + 0x6c,*(uint32_t *)(param_1 + 0x114));
  if (cVar2 != '\0') {
    uVar4 = (uint)(byte)(cVar2 - 1);
    iVar5 = param_1 + 0x1c;
    bVar3 = read_byte_at_offset_five_1051e924(iVar5);
    if (uVar4 != bVar3) {
      write_byte_at_offset_five(iVar5,uVar4);
      uVar1 = read_pointer_from_table(iVar5,uVar4);
      *(uint16_t *)(param_1 + 0x16) = uVar1;
      *(uint16_t *)(param_1 + 0x18) = *(uint16_t *)(param_1 + 0x130 + uVar4 * 2);
    }
  }
  return;
}
