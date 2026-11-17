/* @k10d step_focus_position @ 0x104be266
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Adjusts a focus position index by a direction and updates associated state fields.
 * summary:
 *   The function takes a direction parameter (0, 1, or 2) to modify a short value at offset
 *   0xeb9c, which appears to be a current position index. It calculates new values for
 *   offsets 0xeb9a, 0xeb9c, and 0xeb9f based on a divisor at 0xeb98. It then iterates
 *   through a buffer, calling invoke_object_callback_with_lock and a virtual method to
 *   process each step, likely updating a focus position or similar mechanical state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104be310) overlaps instruction at (ram,0x104be30e)
    */

int step_focus_position(int param_1,int param_2)

{
  uint16_t uVar1;
  short sVar2;
  uint uVar3;
  uint16_t uVar6;
  ushort uVar7;
  int iVar4;
  char *pcVar5;
  int iVar8;
  int *piVar9;
  uint16_t *puVar10;
  uint uVar11;
  int iStack_10;
  int iVar12;
  
  if (*(char *)(param_1 + 0x88c) == '\0') {
    reset_struct_fields_and_zero_tail(param_1);
    return 0;
  }
  iVar12 = 1;
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  if (((param_2 != 1) || (*(short *)(param_1 + 0xeb9a) != 0)) &&
     ((param_2 != 2 || (*(short *)(param_1 + 0xeb9a) != 0)))) {
    if (param_2 == 0) {
      reset_struct_fields_and_zero_tail(param_1);
      iVar8 = param_1 + 0x874;
      iVar12 = invoke_virtual_method_on_object_104bfc92(param_1,iVar8);
      if (iVar12 == 0) {
        return 0;
      }
      uVar1 = *(uint16_t *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34);
      uVar6 = (*(code *)0x1047e4e6/*ROM*/)(iVar8);
      *(uint16_t *)(param_1 + 0xeb80) = uVar6;
      uVar7 = (*(code *)0x1047e4aa/*ROM*/)(iVar8,uVar1);
      *(ushort *)(param_1 + 0xeb84) = uVar7;
      uVar3 = (uint)*(byte *)(param_1 + 0xeb98);
      uVar11 = (int)(*(ushort *)(param_1 + 0xeb80) - 1) / (int)uVar3;
      *(short *)(param_1 + 0xeb9a) = (short)uVar11;
      *(short *)(param_1 + 0xeb9c) = (short)((int)(uVar7 - 1) / (int)uVar3);
      *(char *)(param_1 + 0xeb9f) = (char)((int)(uVar7 - 1) % (int)uVar3);
      *(bool *)(param_1 + 0xeba0) = (uVar11 & 0xffff) != 0;
    }
    else {
      if (param_2 == 1) {
        if (*(ushort *)(param_1 + 0xeb9c) < *(ushort *)(param_1 + 0xeb9a)) {
          sVar2 = *(ushort *)(param_1 + 0xeb9c) + 1;
        }
        else {
          sVar2 = 0;
        }
      }
      else {
        if (param_2 != 2) goto LAB_104be494;
        if (*(short *)(param_1 + 0xeb9c) == 0) {
          *(uint16_t *)(param_1 + 0xeb9c) = *(uint16_t *)(param_1 + 0xeb9a);
          goto LAB_104be494;
        }
        sVar2 = *(short *)(param_1 + 0xeb9c) + -1;
      }
      *(short *)(param_1 + 0xeb9c) = sVar2;
    }
  }
LAB_104be494:
  if (iVar12 != 0) {
    iVar8 = (uint)*(ushort *)(param_1 + 0xeb9c) * (uint)*(byte *)(param_1 + 0xeb98);
    uVar3 = call_helper_with_zero_arg_1047e48c((int *)(param_1 + 0x874));
    if (iVar8 != 0) {
      iVar8 = iVar8 + -3;
      if (2 < iVar8) {
        do {
          piVar9 = (int *)(param_1 + 0x874);
          iVar4 = increment_and_call_helper(piVar9,uVar3);
          iVar4 = increment_and_call_helper(piVar9,iVar4);
          uVar3 = increment_and_call_helper(piVar9,iVar4);
          iVar8 = iVar8 + -3;
        } while (-1 < iVar8);
      }
      for (iVar8 = iVar8 + 2; -1 < iVar8; iVar8 = iVar8 + -1) {
        uVar3 = increment_and_call_helper((int *)(param_1 + 0x874),uVar3);
      }
    }
    iVar8 = 0;
    if (*(char *)(param_1 + 0xeb98) != '\0') {
      iStack_10 = 0;
      do {
        puVar10 = (uint16_t *)(param_1 + 0xdf8c + iStack_10);
        *puVar10 = (short)uVar3;
        iVar4 = invoke_object_callback_with_lock(param_1,uVar3 & 0xffff,param_1 + 0x4a4);
        if (iVar4 != 0) {
          iVar4 = **(int **)(param_1 + 0x4a4);
          pcVar5 = (char *)(**(code **)(iVar4 + 0x14))
                                     ((int)*(int **)(param_1 + 0x4a4) +
                                      (int)*(short *)(iVar4 + 0x10));
          copy_bytes_with_offset(puVar10,pcVar5);
        }
        iVar8 = iVar8 + 1;
        iStack_10 = iStack_10 + 0xc;
      } while ((((int)uVar3 < 999) &&
               (uVar3 = increment_and_call_helper((int *)(param_1 + 0x874),uVar3), 0 < (int)uVar3)) &&
              (iVar8 < (int)(uint)*(byte *)(param_1 + 0xeb98)));
    }
    *(char *)(param_1 + 0xeb9e) = (char)iVar8;
  }
  return iVar12;
}
