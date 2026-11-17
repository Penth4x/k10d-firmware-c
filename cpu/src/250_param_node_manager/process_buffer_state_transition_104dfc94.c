/* @k10d process_buffer_state_transition_104dfc94 @ 0x104dfc94
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates state flags in a control block and dispatches to specific handler routines
 *   based on the current mode.
 * summary:
 *   The function reads a pointer from offset 0x3c of the input object and compares it to a
 *   value at offset 0xc. It then checks two 16-bit fields (at offset 4 of the object and
 *   offset 4 of the dereferenced pointer) against constants 0x100c and 0x100d. Depending on
 *   these values, it calls different subroutines (initialize_exposure_params,
 *   select_and_run_mode_handler, dereference_and_call_pointer, advance_state_machine) and
 *   updates fields at offsets 0x28, 0x34, and 0x38. It returns 9 on most paths or 1 on a
 *   specific success path for the 0x100d case.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_buffer_state_transition_104dfc94(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  piVar1 = *(int **)((int)param_1 + 0x3c);
  if (piVar1[3] == *(int *)((int)param_1 + 0xc)) {
    if ((*(short *)(piVar1 + 1) == 0x100c) && (*(short *)((int)param_1 + 4) == 0x100c)) {
      (*(code *)0x104e0e6c/*ROM*/)(*(uint32_t *)((int)param_1 + 0x2c),0);
      (*(code *)0x104e0e74/*ROM*/)(*(uint32_t *)((int)param_1 + 0x2c),0);
      *(uint32_t *)((int)param_1 + 0x28) = 0;
      iVar2 = initialize_exposure_params((int)param_1,*(int *)((int)param_1 + 0x50));
      if (iVar2 != 0) {
        uStack_c = 0;
        select_and_run_mode_handler(*(uint32_t *)((int)param_1 + 0x34),*(uint32_t *)((int)param_1 + 0x50),
                     &uStack_c);
        iVar2 = *(int *)(*(int *)((int)param_1 + 0x4c) + 0xc);
        uStack_c = (**(code **)(iVar2 + 0x34))
                             (*(int *)((int)param_1 + 0x4c) + (int)*(short *)(iVar2 + 0x30),
                              *(uint32_t *)((int)param_1 + 0x50));
        *(uint32_t *)((int)param_1 + 0x28) = uStack_c;
        *(uint32_t *)(*(int *)((int)param_1 + 0x2c) + 0x34) = 1;
        (*(code *)0x104e0e7e/*ROM*/)
                  (*(uint32_t *)((int)param_1 + 0x2c),*(uint32_t *)((int)param_1 + 0x28));
        *(uint32_t *)(*(int *)((int)param_1 + 0x2c) + 0x38) = *(uint32_t *)((int)param_1 + 0x28)
        ;
        return 9;
      }
      uVar3 = 0x200b;
    }
    else if ((*(short *)(piVar1 + 1) == 0x100d) && (*(short *)((int)param_1 + 4) == 0x100d)) {
      if (*piVar1 - 0xcU <= **(uint **)((int)param_1 + 0x38)) {
        iVar2 = dereference_and_call_pointer(*(int *)((int)param_1 + 0x34),
                             (*(uint **)((int)param_1 + 0x38))[2] + 0xc,*piVar1 - 0xcU,
                             *(int *)((int)param_1 + 0x28));
        if (iVar2 == 0) {
          return 9;
        }
        iVar2 = advance_state_machine((void *)(*(uint32_t *)((int)param_1 + 0x4c)),
                             *(uint32_t *)((int)param_1 + 0x28));
        if (iVar2 == 0) {
          (*(code *)0x104dfafa/*ROM*/)(param_1,0x2009);
        }
        *(uint32_t *)(*(int *)((int)param_1 + 0x2c) + 0x38) = *(uint32_t *)((int)param_1 + 0x28)
        ;
        *(uint32_t *)(*(int *)((int)param_1 + 0x2c) + 0x34) = 2;
        return 1;
      }
      uVar3 = 0x2002;
    }
    else {
      uVar3 = 0x2002;
    }
    (*(code *)0x104dfafa/*ROM*/)(param_1,uVar3);
  }
  else {
    (*(code *)0x104dfafa/*ROM*/)(param_1,0x2004);
  }
  return 9;
}
