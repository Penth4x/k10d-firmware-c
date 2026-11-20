/* @k10d remove_entry_from_list @ 0x10493b44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t remove_entry_from_list(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    piVar3 = *(int **)(param_1 + 0x48);
    if (piVar3 != *(int **)(param_1 + 0x4c)) {
      do {
        if (param_2 == *piVar3) {
          piVar4 = *(int **)(param_1 + 0x60);
          (((vtbl_entry*)(*(int *)(param_1 + 0xc)))[30].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0xc)))[30].adj + param_1);
          piVar2 = *(int **)(param_1 + 0x48);
          if (piVar2 != *(int **)(param_1 + 0x4c)) {
            do {
              if (((piVar2 != piVar4) && (piVar2 != piVar3)) &&
                 (iVar1 = read_byte_at_offset_8(*piVar2), iVar1 != 0)) {
                iVar1 = *(int *)(*piVar2 + 0xc);
                (((vtbl_entry*)(iVar1))[8].fn)(*piVar2 + (int)((vtbl_entry*)(iVar1))[8].adj);
              }
              piVar2 = piVar2 + 1;
            } while (piVar2 != *(int **)(param_1 + 0x4c));
          }
          *(int **)(param_1 + 0x60) = piVar3;
          (((vtbl_entry*)(*(int *)(param_1 + 0xc)))[31].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0xc)))[31].adj + param_1);
          return 1;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != *(int **)(param_1 + 0x4c));
    }
  }
  return 0;
}
