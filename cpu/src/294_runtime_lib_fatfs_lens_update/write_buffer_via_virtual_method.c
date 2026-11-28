/* @k10d write_buffer_via_virtual_method @ 0x1053df7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a buffer in chunks by repeatedly calling a virtual method on an object, tracking
 *   progress and handling specific error codes.
 * summary:
 *   The function iterates through a data buffer (param_4) of length param_3, calling a
 *   virtual function at offset 0x58 of the object (param_1) to send chunks. It tracks the
 *   number of bytes sent in *param_5 and adjusts the source pointer by a stride
 *   (param_1+0xc). If the virtual call returns -1000, it sets a flag in a status structure;
 *   otherwise, it returns -5 on other errors or 0 on success. The module context suggests
 *   this is part of a firmware update process, but the function itself is a generic chunked
 *   write operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_buffer_via_virtual_method(void *obj, int dst_offset, uint remaining,
                                    void *src_buf, int *bytes_written)
{
  int    stride;
  uint  *chunk_size_ptr;
  char   ret_code;
  int    call_result;
  uint   chunk_len;

  stride         = *(int  *)((int)obj + 0xc);
  *bytes_written = 0;
  chunk_size_ptr = *(uint **)((int)obj + 0x70);

  while (1) {
    if (remaining == 0)
      return 0;

    chunk_len = *chunk_size_ptr;
    if (remaining < *chunk_size_ptr)
      chunk_len = remaining;

    /* vtable slot at offset 0x58; first arg is the object's own field at 0x60 */
    call_result = ((vtbl_entry *)((int)obj))[11].fn(
                      *(uint32_t *)((int)obj + 0x60),
                      dst_offset, chunk_len, src_buf);

    if (call_result != 0)
      break;

    dst_offset   += chunk_len;
    src_buf       = (void *)((int)src_buf + (int)chunk_len * stride);
    *bytes_written += chunk_len;
    remaining    -= chunk_len;
  }

  if (call_result == -1000) {
    /* set bit 0 of the 16-bit status word at *(obj+100)+14 */
    uint16_t *status_word =
        (uint16_t *)(*(int *)((int)obj + 100) + 0xe);
    *status_word |= 1;
    ret_code = -6;
  } else {
    ret_code = -5;
  }
  return (int)ret_code;
}
