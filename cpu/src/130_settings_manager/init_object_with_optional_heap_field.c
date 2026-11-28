/* @k10d init_object_with_optional_heap_field @ 0x1045cca8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_optional_heap_field(uint32_t *obj)

{
  cls_105a5c3c *heap_obj;

  /* zero the 4-word header (offsets 0,4,8) and the byte flag at offset 16 */
  obj[2] = 0;
  obj[1] = 0;
  *obj = 0;
  *(uint8_t *)(obj + 4) = 0;

  /* if the heap-pointer slot (offset 12) is still empty, allocate and init */
  if (obj[3] == 0) {
    heap_obj = (cls_105a5c3c *)heap_alloc((void *)4);
    if (heap_obj == (cls_105a5c3c *)0x0) {
      heap_obj = (cls_105a5c3c *)0x0;
    }
    else {
      cls_105a5c3c_new(heap_obj);
    }
    obj[3] = (uint32_t)heap_obj;
    if (heap_obj != (cls_105a5c3c *)0x0) {
      *(uint8_t *)(obj + 4) = 1;
    }
  }
  return;
}
