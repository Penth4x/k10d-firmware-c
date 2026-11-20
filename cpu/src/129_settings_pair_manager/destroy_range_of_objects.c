/* @k10d destroy_range_of_objects @ 0x1045b870
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a range of object pointers and destroys each one via helper calls.
 * summary:
 *   Reads two pointers from the object at param_1 (offsets 0 and 4). If they differ, it
 *   loops from the second pointer down to the first, calling
 *   swap_first_word_and_call_helper_1045b9e2 to prepare a temporary and
 *   unlink_and_copy_pointer to process/destroy the current element. This pattern is typical
 *   for a container's destructor that cleans up its elements before freeing the container
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_range_of_objects(int *param_1)

{
  struct {
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int iStack_c;
  } _cfg_1c;
  uintptr_t sp;
  int iStack_24;
  int iStack_20;
  iStack_24 = *(int *)(*param_1 + 4);
  iStack_20 = *param_1;
  if (iStack_24 != iStack_20) {
    _cfg_1c.iStack_10 = iStack_24;
    _cfg_1c.iStack_c = iStack_20;
    do {
      swap_first_word_and_call_helper_1045b9e2(&_cfg_1c.uStack_1c,&iStack_24,0);
      _cfg_1c.uStack_18 = _cfg_1c.uStack_1c;
      unlink_and_copy_pointer(&_cfg_1c.uStack_14,param_1,&_cfg_1c.uStack_18);
    } while (iStack_24 != iStack_20);
  }
  return;
}
