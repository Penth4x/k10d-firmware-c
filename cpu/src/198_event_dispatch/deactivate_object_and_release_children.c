/* @k10d deactivate_object_and_release_children @ 0x104940b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_object_and_release_children(cls_105b47b4 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a01e/*ROM*/)(uVar1,param_1->field_0x4);
  iVar2 = read_byte_at_offset_8((uint32_t)(param_1));
  if (iVar2 != 0) {
    dispatch_object_event_and_notify((cls_105b48dc *)param_1);
    piVar4 = (void*)(param_1->field43_0x48);
    if ((uint32_t)(piVar4) != param_1->field_0x4c) {
      do {
        iVar3 = *piVar4;
        iVar2 = (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[13].fn)
                          (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[13].adj + iVar3);
        if (iVar2 == 0) {
          (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[10].fn)
                    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[10].adj + iVar3);
        }
        piVar4 = piVar4 + 1;
      } while ((uint32_t)(piVar4) != param_1->field_0x4c);
    }
    iVar2 = *(int *)(*(uint32_t*)(param_1->field_0x60) + 0xc);
    (((vtbl_entry*)(iVar2))[10].fn)(*(uint32_t*)(param_1->field_0x60) + (int)((vtbl_entry*)(iVar2))[10].adj);
  }
  invoke_virtual_on_range_items_10493858((cls_105b4dac *)param_1,0);
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a020/*ROM*/)(uVar1,param_1->field_0x4);
  return;
}
