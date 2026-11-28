/* @k10d prepend_to_singly_linked_list @ 0x105470da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Inserts a node at the head of a singly-linked list by updating the head pointer and the
 *   node's next field.
 * summary:
 *   The function takes a pointer to a node (param_1), sets its 'next' field to the current
 *   head of the list (stored in _DAT_8005b494), and then updates the head pointer to point
 *   to the new node. This is a standard O(1) prepend operation for a singly-linked list.
 *   The module context suggests this list may be used for managing lens firmware update
 *   states or events, but the mechanical operation is unambiguous.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prepend_to_singly_linked_list(uint32_t *node)

{
  /* node->next = current head */
  *node = _DAT_8005b494/*SDRAM*/;
  /* head = node (delay-slot store, executes before ret) */
  _DAT_8005b494/*SDRAM*/ = (uintptr_t)(node);
  return;
}
