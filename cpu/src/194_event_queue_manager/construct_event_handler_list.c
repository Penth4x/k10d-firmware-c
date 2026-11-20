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

cls_105b41d0 * construct_event_handler_list(cls_105b41d0 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  cls_105b41d0 *pcStack_14;
  int iStack_c;
  
  pcStack_14 = param_1;
  if ((param_1 == (cls_105b41d0 *)0x0) &&
     (pcStack_14 = (cls_105b41d0 *)heap_alloc((void *)0x24), pcStack_14 == (cls_105b41d0 *)0x0)) {
    return (cls_105b41d0 *)0x0;
  }
  cls_105b41d0_new(pcStack_14);
  pcStack_14->field_0x8 = (uintptr_t)(&DAT_105b4188/*ROM*/);
  cls_105a5c2c_new((cls_105a5c2c *)(pcStack_14 + 1),0);
  iVar1 = get_lens_fw_update_status(0, 0x2e, 0xc, (code *)cls_105b41d0_new);
  iVar4 = 0;
  iStack_c = 0x16;
  iVar3 = 0;
  do {
    iVar2 = iVar1 + iVar3;
    (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].fn)(((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].adj + iVar2,iVar4);
    write_field_at_offset_c(pcStack_14,iVar2);
    iVar2 = iVar1 + iVar3 + 0xc;
    (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].adj + iVar2,iVar4 + 1);
    write_field_at_offset_c(pcStack_14,iVar2);
    iVar4 = iVar4 + 2;
    iVar3 = iVar3 + 0x18;
    iStack_c = iStack_c + -1;
  } while (-1 < iStack_c);
  return pcStack_14;
}
