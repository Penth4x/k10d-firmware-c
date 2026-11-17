/* @k10d set_lens_update_state @ 0x105410ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x105410f0) */

int set_lens_update_state(void *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  int *piStack_10;
  int iStack_c;
  
  if ((param_2 == 1) || (param_2 == 0)) {
    iVar2 = lookup_table_entry_by_match(param_1,&iStack_c);
    if (iVar2 == 0) {
      if (*(short *)(*(int *)(iStack_c + 100) + 0xe) == 0) {
        iVar2 = allocate_and_link_event_node_105382e4(iStack_c,0x17,(int *)&piStack_10,(void *)0x0);
        if (iVar2 == 0) {
          if (param_2 == 1) {
            if (*(int *)(iStack_c + 0x78) == 0) {
              decrement_lens_update_step(0x17,piStack_10);
              return -0x334;
            }
            for (iVar2 = *(int *)(*(int *)(iStack_c + 100) + 0x14); iVar2 != 0;
                iVar2 = *(int *)(iVar2 + 4)) {
              if (*(short *)(iVar2 + 0xe) != 0) {
                decrement_lens_update_step(0x17,piStack_10);
                return -0x334;
              }
            }
            uVar1 = 1;
          }
          else {
            uVar1 = 0;
          }
          *(uint32_t *)(iStack_c + 0x7c) = uVar1;
          iVar2 = decrement_lens_update_step(0x17,piStack_10);
        }
      }
      else {
        iVar2 = -6;
      }
    }
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}
