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

uint32_t * construct_event_handler_list(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t *puStack_14;
  int iStack_c;
  
  puStack_14 = param_1;
  if ((param_1 == (uint32_t *)0x0) &&
     (puStack_14 = (uint32_t *)heap_alloc((void *)0x24), puStack_14 == (uint32_t *)0x0)) {
    return (uint32_t *)0x0;
  }
  cls_105b41d0_new(puStack_14);
  puStack_14[2] = (uint32_t)&DAT_105b4188/*ROM*/;
  cls_105a5c2c_new(puStack_14 + 3,0);
  iVar1 = get_lens_fw_update_status();
  iVar4 = 0;
  iStack_c = 0x16;
  iVar3 = 0;
  do {
    iVar2 = iVar1 + iVar3;
    (**(code **)(*(int *)(iVar2 + 8) + 0x14))(*(short *)(*(int *)(iVar2 + 8) + 0x10) + iVar2,iVar4);
    write_field_at_offset_c(puStack_14,iVar2);
    iVar2 = iVar1 + iVar3 + 0xc;
    (**(code **)(*(int *)(iVar2 + 8) + 0x14))
              (*(short *)(*(int *)(iVar2 + 8) + 0x10) + iVar2,iVar4 + 1);
    write_field_at_offset_c(puStack_14,iVar2);
    iVar4 = iVar4 + 2;
    iVar3 = iVar3 + 0x18;
    iStack_c = iStack_c + -1;
  } while (-1 < iStack_c);
  return puStack_14;
}
