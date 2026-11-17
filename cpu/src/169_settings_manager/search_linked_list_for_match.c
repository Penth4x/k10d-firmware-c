/* @k10d search_linked_list_for_match @ 0x1047de16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list and returns the first node whose payload matches a key via a
 *   callee.
 * summary:
 *   Treats param_1 as a container with a start pointer at offset 4 and an end pointer at
 *   offset 8. It walks the list, calling case_insensitive_string_compare with param_2 and
 *   the second word of each node. If the callee returns 0, the first word of the node is
 *   returned; otherwise it continues. Returns 0xffffffff if no match is found.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t search_linked_list_for_match(void *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t *puVar3;
  
  piVar2 = *(int **)((int)param_1 + 4);
  if (piVar2 != *(int **)((int)param_1 + 8)) {
    do {
      puVar3 = (uint32_t *)*piVar2;
      iVar1 = case_insensitive_string_compare(param_2,(void *)(puVar3 + 1));
      if (iVar1 == 0) {
        return *puVar3;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)((int)param_1 + 8));
  }
  return 0xffffffff;
}
