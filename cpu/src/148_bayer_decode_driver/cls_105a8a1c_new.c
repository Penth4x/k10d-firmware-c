/* @k10d cls_105a8a1c_new @ 0x1046b092
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105a8a1c; returns param_1)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a8a1c (vtable 0x105a8a1c, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105a8a1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b40c4 * cls_105a8a1c_new(cls_105a8a1c *obj_ptr)

{
  int byte_offset;
  int loop_count;

  if ((obj_ptr != (cls_105a8a1c *)0x0) ||
     (obj_ptr = (cls_105a8a1c *)heap_alloc((void *)0x40), obj_ptr != (cls_105a8a1c *)0x0)) {
    cls_105b40c4_new((cls_105b40c4 *)obj_ptr);
    ((cls_105b40c4 *)obj_ptr)->field_0x0 = (uintptr_t)(&DAT_105a8a1c/*ROM*/);
    byte_offset = 0;
    loop_count = 2;
    do {
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 1))->field_0x0 + byte_offset) = 0xff;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 4))->field_0x0 + byte_offset + 3) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 8))->field_0x0 + byte_offset + 2) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 0xc))->field_0x0 + byte_offset + 1) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 1))->field_0x0 + byte_offset + 1) = 0xff;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 5))->field_0x0 + byte_offset) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 8))->field_0x0 + byte_offset + 3) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 0xc))->field_0x0 + byte_offset + 2) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 1))->field_0x0 + byte_offset + 2) = 0xff;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 5))->field_0x0 + byte_offset + 1) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 9))->field_0x0 + byte_offset) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 0xc))->field_0x0 + byte_offset + 3) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 1))->field_0x0 + byte_offset + 3) = 0xff;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 5))->field_0x0 + byte_offset + 2) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 9))->field_0x0 + byte_offset + 1) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 0xd))->field_0x0 + byte_offset) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 2))->field_0x0 + byte_offset) = 0xff;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 5))->field_0x0 + byte_offset + 3) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 9))->field_0x0 + byte_offset + 2) = 0;
      *(uint8_t *)((int)&((cls_105b40c4 *)(obj_ptr + 0xd))->field_0x0 + byte_offset + 1) = 0;
      loop_count = loop_count + -1;
      byte_offset = byte_offset + 5;
    } while (-1 < loop_count);
  }
  return (cls_105b40c4 *)obj_ptr;
}
