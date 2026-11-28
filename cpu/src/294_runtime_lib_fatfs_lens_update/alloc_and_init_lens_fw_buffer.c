/* @k10d alloc_and_init_lens_fw_buffer @ 0x10546eea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int alloc_and_init_lens_fw_buffer(int buffer_ptr,int entry_count,int entry_stride,code *init_fn,code *alloc_fn,int use_custom_alloc)

{
  int cur_ptr;
  int loop_idx;

  if ((buffer_ptr == 0) || (use_custom_alloc != 0)) {
    if (buffer_ptr == 0) {
      cur_ptr = entry_count * entry_stride + _DAT_80014a74/*SDRAM*/;
      if (alloc_fn == (code *)0x0) {
        buffer_ptr = heap_alloc_2(cur_ptr);
      }
      else {
        buffer_ptr = (*alloc_fn)(cur_ptr);
      }
      if (buffer_ptr != 0) {
        buffer_ptr = buffer_ptr + _DAT_80014a74/*SDRAM*/;
      }
      if (buffer_ptr == 0) {
        return 0;
      }
    }
    *(int *)(buffer_ptr - _DAT_80014a74/*SDRAM*/) = entry_count;
  }
  if ((init_fn != (code *)0x0) && (loop_idx = 0, cur_ptr = buffer_ptr, 0 < entry_count)) {
    do {
      (*init_fn)(cur_ptr);
      loop_idx = loop_idx + 1;
      cur_ptr = cur_ptr + entry_stride;
    } while (loop_idx < entry_count);
  }
  return buffer_ptr;
}
