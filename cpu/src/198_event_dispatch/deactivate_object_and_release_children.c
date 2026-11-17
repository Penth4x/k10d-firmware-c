/* @k10d deactivate_object_and_release_children @ 0x104940b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_object_and_release_children(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a01e/*ROM*/)(uVar1,*(uint32_t *)(param_1 + 4));
  iVar2 = read_byte_at_offset_8(param_1);
  if (iVar2 != 0) {
    dispatch_object_event_and_notify(param_1);
    piVar4 = *(int **)(param_1 + 0x48);
    if (piVar4 != *(int **)(param_1 + 0x4c)) {
      do {
        iVar3 = *piVar4;
        iVar2 = (**(code **)(*(int *)(iVar3 + 0xc) + 0x6c))
                          (*(short *)(*(int *)(iVar3 + 0xc) + 0x68) + iVar3);
        if (iVar2 == 0) {
          (**(code **)(*(int *)(iVar3 + 0xc) + 0x54))
                    (*(short *)(*(int *)(iVar3 + 0xc) + 0x50) + iVar3);
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != *(int **)(param_1 + 0x4c));
    }
    iVar2 = *(int *)(**(int **)(param_1 + 0x60) + 0xc);
    (**(code **)(iVar2 + 0x54))(**(int **)(param_1 + 0x60) + (int)*(short *)(iVar2 + 0x50));
  }
  invoke_virtual_on_range_items_10493858(param_1,0);
  uVar1 = get_or_init_sram_block_10409fec();
  (*(code *)0x1040a020/*ROM*/)(uVar1,*(uint32_t *)(param_1 + 4));
  return;
}
