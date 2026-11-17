/* @k10d process_param_with_two_helpers @ 0x104b5038
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a struct field and param_2, processes the result, then passes it to
 *   a second helper.
 * summary:
 *   The function reads a pointer from offset 0x5c of the object in param_1 and passes it,
 *   along with param_2, to parse_quoted_path_segment, which writes output to a local
 *   buffer. It then calls copy_string_to_buffer on that buffer with a constant data
 *   pointer. Finally, it reads a pointer from offset 0x60 of the object and passes the
 *   buffer to open_cf_autorun_file. The function always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_param_with_two_helpers(int param_1,void *param_2)

{
  uint32_t r7_in;
  uintptr_t sp;
  char acStack_58 [80];
  
  parse_quoted_path_segment((void *)(*(uint32_t *)(param_1 + 0x5c)),(int)param_2,acStack_58,(void *)r7_in);
  copy_string_to_buffer(acStack_58,&DAT_105b8514/*ROM*/);
  open_cf_autorun_file((void *)(*(uint32_t *)(param_1 + 0x60)),acStack_58);
  return 1;
}
