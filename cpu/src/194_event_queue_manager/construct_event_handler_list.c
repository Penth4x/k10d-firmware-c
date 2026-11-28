/* @k10d construct_event_handler_list @ 0x10491c66
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x24-byte object, then registers 12 virtual event handlers
 *   from a global table.
 * summary:
 *   The function allocates 0x24 bytes if param_1 is NULL, otherwise uses the provided
 *   pointer. It calls constructors for two embedded objects (cls_105b41d0 and cls_105a5c2c)
 *   and sets a vtable pointer. It then iterates 12 times over a table returned by
 *   get_lens_fw_update_status, performing virtual calls (slot 2) on each entry and passing
 *   the entries to write_field_at_offset_c, likely registering them with the newly
 *   constructed object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b41d0 * construct_event_handler_list(cls_105b41d0 *existing_obj)

{
  int handler_table;
  int entry_ptr;
  int table_offset;
  int handler_index;
  cls_105b41d0 *obj;
  int remaining;

  obj = existing_obj;
  if ((existing_obj == (cls_105b41d0 *)0x0) &&
     (obj = (cls_105b41d0 *)heap_alloc((void *)0x24), obj == (cls_105b41d0 *)0x0)) {
    return (cls_105b41d0 *)0x0;
  }
  cls_105b41d0_new(obj);
  obj->field_0x8 = (uintptr_t)(&DAT_105b4188/*ROM*/);
  cls_105a5c2c_new((cls_105a5c2c *)(obj + 1),0);
  handler_table = get_lens_fw_update_status(0, 0x2e, 0xc, (code *)cls_105b41d0_new);
  handler_index = 0;
  remaining = 0x16;
  table_offset = 0;
  do {
    entry_ptr = handler_table + table_offset;
    (((vtbl_entry*)(*(int *)(entry_ptr + 8)))[2].fn)(((vtbl_entry*)(*(int *)(entry_ptr + 8)))[2].adj + entry_ptr,handler_index);
    write_field_at_offset_c(obj,entry_ptr);
    entry_ptr = handler_table + table_offset + 0xc;
    (((vtbl_entry*)(*(int *)(entry_ptr + 8)))[2].fn)
              (((vtbl_entry*)(*(int *)(entry_ptr + 8)))[2].adj + entry_ptr,handler_index + 1);
    write_field_at_offset_c(obj,entry_ptr);
    handler_index = handler_index + 2;
    table_offset = table_offset + 0x18;
    remaining = remaining + -1;
  } while (-1 < remaining);
  return obj;
}
