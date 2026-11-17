/* @k10d prepend_to_singly_linked_list @ 0x105470da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Inserts the given node at the head of a singly-linked list rooted at DAT_8005b494.
 * summary:
 *   The function takes a pointer to a node (param_1), stores the current head of the list
 *   (DAT_8005b494) into the node's next field, and then updates the global head pointer to
 *   point to the new node. This is a standard O(1) head-insertion operation for a singly-
 *   linked list. The global DAT_8005b494 is located in SDRAM (0x80000000+), consistent with
 *   dynamic data structures. No other side effects or MMIO operations are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prepend_to_singly_linked_list(uint32_t *param_1)

{
  *param_1 = _DAT_8005b494/*SDRAM*/;
  _DAT_8005b494/*SDRAM*/ = param_1;
  return;
}
