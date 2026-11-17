/* @k10d populate_lens_info_struct @ 0x10541318
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates a lens handle and copies multiple fields from it into a caller-provided
 *   output structure.
 * summary:
 *   The function calls lookup_table_entry_by_match to obtain a handle, checks a short value
 *   at offset 0xe of a sub-structure, and if valid, calls
 *   allocate_and_link_event_node_105382e4. It then populates param_2 with values from the
 *   handle (offsets 0x10, 0x4c, 0x74, 0x7c, 0x44, 0x40) and a global pointer. It invokes
 *   three unknown functions (0x1053db52, 0x1053e5c4, 0x105390ca) to fill additional fields,
 *   and finally calls decrement_lens_update_step to release the resource. The module
 *   context suggests lens-related data, but the specific 'firmware' nature is not confirmed
 *   by the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int populate_lens_info_struct(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_10;
  int iStack_c;
  
  if (param_2 == (uint32_t *)0x0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = lookup_table_entry_by_match(param_1,&iStack_c);
    if (iVar1 == 0) {
      if (*(short *)(*(int *)(iStack_c + 100) + 0xe) == 0) {
        iVar1 = allocate_and_link_event_node_105382e4(iStack_c,2,(int *)&piStack_10,(void *)0x0);
        if (iVar1 == 0) {
          *param_2 = *(uint32_t *)(iStack_c + 0x10);
          param_2[1] = *(int *)(iStack_c + 0x4c) + -2;
          iVar1 = (*(code *)0x1053db52/*ROM*/)(iStack_c,param_2 + 2);
          if (iVar1 == 0) {
            param_2[3] = *(uint32_t *)(iStack_c + 0x74);
            param_2[4] = *(uint32_t *)(iStack_c + 0x7c);
            *(short *)(param_2 + 5) = (short)*(uint32_t *)(iStack_c + 0x44);
            *(short *)((int)param_2 + 0x16) = (short)*(uint32_t *)(iStack_c + 0x40);
            param_2[7] = *puRam80014a40;
            iVar1 = (*(code *)0x1053e5c4/*ROM*/)(iStack_c,param_2 + 6);
            if (iVar1 == 0) {
              iVar1 = (*(code *)0x105390ca/*ROM*/)(iStack_c,(int)param_2 + 0x1a);
              if (iVar1 == 0) {
                iVar1 = decrement_lens_update_step(2,piStack_10);
              }
              else {
                decrement_lens_update_step(2,piStack_10);
              }
            }
            else {
              decrement_lens_update_step(2,piStack_10);
            }
          }
          else {
            decrement_lens_update_step(2,piStack_10);
          }
        }
      }
      else {
        iVar1 = -6;
      }
    }
  }
  return iVar1;
}
