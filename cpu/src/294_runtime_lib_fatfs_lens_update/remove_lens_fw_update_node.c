/* @k10d remove_lens_fw_update_node @ 0x10538c9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int remove_lens_fw_update_node(uint32_t param_1)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_c;
  
  iVar1 = check_lens_fw_id_in_list(param_1,&piStack_c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(piStack_c[2] + 0xc) + 100);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
    if (*(int **)(iVar1 + 0x14) == piStack_c) {
      *(int *)(iVar1 + 0x14) = piStack_c[1];
    }
    if (*(int **)(iVar1 + 0x18) == piStack_c) {
      *(int *)(iVar1 + 0x18) = *piStack_c;
    }
    if (*piStack_c != 0) {
      *(int *)(*piStack_c + 4) = piStack_c[1];
    }
    if ((int *)piStack_c[1] != (int *)0x0) {
      *(int *)piStack_c[1] = *piStack_c;
    }
    release_lens_update_context_1053905e(piStack_c);
    iVar1 = 0;
  }
  return iVar1;
}
