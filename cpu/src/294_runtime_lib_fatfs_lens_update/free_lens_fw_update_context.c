/* @k10d free_lens_fw_update_context @ 0x1053e580
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Releases the second field of a lens firmware update context structure and nulls both
 *   fields.
 * summary:
 *   Takes a pointer to a two-word structure. If non-NULL, it calls free_linked_list_nodes
 *   on the second word (param_1[1]), then sets both words to zero. This is a standard
 *   cleanup/teardown pattern for a resource handle or sub-structure within the lens
 *   firmware update module. The specific resource freed by free_linked_list_nodes is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_lens_fw_update_context(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
    free_linked_list_nodes((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
