/* @k10d retry_operation_until_state_matches @ 0x1040a77a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Repeats a two-step operation (check, execute, apply) until two output values stabilize
 *   or an error occurs.
 * summary:
 *   The function initializes four local variables to zero. It enters a loop that first
 *   checks a condition via increment_index_and_notify. If true, it calls
 *   extract_and_check_struct_fields with two pointers to local variables, then calls
 *   write_two_stage_command with values read from the object structure. It returns 1 if
 *   write_two_stage_command returns a value other than 0 or 2. The loop continues as long
 *   as the local variables (sStack_10/sStack_e) differ from the new values
 *   (sStack_c/sStack_a), effectively retrying until the state converges or an error is
 *   detected.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t retry_operation_until_state_matches(void *param_1,uint8_t *param_2,uint *param_3,uint32_t *param_4)

{
  bool bVar1;
  int extraout_r4;
  int extraout_r4_00;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_30 [8];
  short sStack_10;
  short sStack_e;
  short sStack_c;
  short sStack_a;
  
  piVar5 = (int *)auStack_30;
  sStack_10 = 0;
  sStack_e = 0;
  sStack_c = 0;
  sStack_a = 0;
  bVar1 = increment_index_and_notify((int *)((int)param_1 + 0x48));
  if (bVar1) {
    *piVar5 = (int)&sStack_10;
    piVar5[1] = (int)&sStack_e;
    bVar1 = extract_and_check_struct_fields((int)param_1,param_2,param_3,param_4,(uint16_t *)*piVar5,
                         (uint16_t *)piVar5[1]);
    if (bVar1) {
      uVar2 = *(uint32_t *)((int)param_1 + 0x58);
      uVar3 = *(uint32_t *)((int)param_1 + 0x38);
      uVar4 = *(uint32_t *)((int)param_1 + 0x30);
      *piVar5 = *(uint32_t *)((int)param_1 + 0x34);
      piVar5[1] = uVar4;
      write_two_stage_command(param_1,0,uVar2,uVar3,*piVar5,piVar5[1]);
      if ((extraout_r4 != 2) && (extraout_r4 != 0)) {
        return 1;
      }
    }
  }
  do {
    bVar1 = increment_index_and_notify((int *)((int)param_1 + 0x48));
    if (bVar1) {
      *piVar5 = (int)&sStack_c;
      piVar5[1] = (int)&sStack_a;
      bVar1 = extract_and_check_struct_fields((int)param_1,param_2,param_3,param_4,(uint16_t *)*piVar5,
                           (uint16_t *)piVar5[1]);
      if (bVar1) {
        uVar2 = *(uint32_t *)((int)param_1 + 0x58);
        uVar3 = *(uint32_t *)((int)param_1 + 0x38);
        uVar4 = *(uint32_t *)((int)param_1 + 0x30);
        *piVar5 = *(uint32_t *)((int)param_1 + 0x34);
        piVar5[1] = uVar4;
        write_two_stage_command(param_1,0,uVar2,uVar3,*piVar5,piVar5[1]);
        if ((extraout_r4_00 != 2) && (extraout_r4_00 != 0)) {
          return 1;
        }
      }
    }
  } while ((sStack_10 != sStack_c) || (sStack_e != sStack_a));
  return 0;
}
