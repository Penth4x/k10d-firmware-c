/* @k10d advance_grid_cursor_state @ 0x104bd894
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates a 2D grid cursor position and fills adjacent grid entries based on direction
 *   and boundary conditions.
 * summary:
 *   The function manages a state machine for a cursor moving on a grid of size stored at
 *   param_1+0xeb88. It handles three cases: initial placement (param_2==0), forward
 *   movement (param_2==1), and backward movement (param_2==2). It uses helper functions
 *   increment_and_call_helper and decrement_and_call_helper to generate values for grid
 *   cells (stride 0xb34) and updates row/column indices at offsets 0xeb8a/0xeb8c. It also
 *   calls invoke_object_method_with_lock to validate or initialize the current position.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bd9a4) overlaps instruction at (ram,0x104bd9a2)
    */

int advance_grid_cursor_state(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  uint16_t uVar5;
  ushort uVar6;
  int iVar4;
  int iVar7;
  int iVar8;
  uint16_t *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  int iStack_14;
  
  if (*(char *)(param_1 + 0x8a8) == '\0') {
LAB_104bd932:
    clear_fourteen_word_blocks(param_1);
    iStack_1c = 0;
  }
  else {
    store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
    sVar1 = 0;
    uVar11 = 0;
    iVar7 = param_2;
    if (param_2 == 0) {
      psVar2 = (short *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34);
      sVar1 = *psVar2;
      uVar11 = (uint)(ushort)psVar2[1];
    }
    else if ((param_2 == 2) && (*(short *)(param_1 + 0xeb8c) == 0)) {
      sVar1 = *(short *)(param_1 + 0xeb94);
      uVar11 = (uint)*(ushort *)(param_1 + 0xeb96);
      if ((sVar1 == 0) && (uVar11 == 0)) goto LAB_104bd932;
      iVar7 = 0;
    }
    else if ((param_2 == 1) && (*(short *)(param_1 + 0xeb8c) == *(short *)(param_1 + 0xeb8a))) {
      sVar1 = *(short *)(param_1 + 0xeb94);
      uVar11 = (uint)*(ushort *)(param_1 + 0xeb96);
      if ((sVar1 == 0) && (uVar11 == 0)) goto LAB_104bd932;
      iVar7 = 0;
    }
    iStack_1c = 0;
    if (iVar7 == 0) {
      iVar7 = param_1 + 0x890;
      *(short *)(param_1 + 0xeb92) = sVar1;
      check_and_zero_two_buffers((void *)iVar7);
      iStack_1c = invoke_object_method_with_lock(param_1,sVar1,iVar7);
      if (iStack_1c != 0) {
        uVar5 = (*(code *)0x1047e4e6/*ROM*/)(iVar7);
        *(uint16_t *)(param_1 + 0xeb82) = uVar5;
        uVar6 = (*(code *)0x1047e4aa/*ROM*/)(iVar7);
        *(ushort *)(param_1 + 0xeb86) = uVar6;
        uVar3 = (uint)*(byte *)(param_1 + 0xeb88);
        iVar7 = (int)(uVar6 - 1) % (int)uVar3;
        *(short *)(param_1 + 0xeb8c) = (short)((int)(uVar6 - 1) / (int)uVar3);
        *(short *)(param_1 + 0xeb8a) =
             (short)((int)(*(ushort *)(param_1 + 0xeb82) - 1) / (int)uVar3);
        psVar2 = (short *)(param_1 + 0x2c4c + iVar7 * 0xb34);
        *psVar2 = sVar1;
        psVar2[1] = (short)uVar11;
        if (0 < iVar7) {
          iVar8 = (iVar7 + -1) * 0xb34;
          iStack_2c = iVar7 + -3;
          uVar3 = uVar11;
          if (2 < iStack_2c) {
            do {
              piVar12 = (int *)(param_1 + 0x890);
              iVar4 = decrement_and_call_helper(piVar12,uVar3);
              iVar10 = param_1 + 0x2c4c;
              *(short *)(iVar10 + iVar8) = sVar1;
              ((short *)(iVar10 + iVar8))[1] = (short)iVar4;
              iVar4 = decrement_and_call_helper(piVar12,iVar4);
              psVar2 = (short *)(iVar10 + iVar8 + -0xb34);
              *psVar2 = sVar1;
              psVar2[1] = (short)iVar4;
              uVar3 = decrement_and_call_helper(piVar12,iVar4);
              psVar2 = (short *)(iVar10 + iVar8 + -0x1668);
              *psVar2 = sVar1;
              psVar2[1] = (short)uVar3;
              iVar8 = iVar8 + -0x219c;
              iStack_2c = iStack_2c + -3;
            } while (-1 < iStack_2c);
          }
          for (iStack_2c = iStack_2c + 2; -1 < iStack_2c; iStack_2c = iStack_2c + -1) {
            uVar3 = decrement_and_call_helper((int *)(param_1 + 0x890),uVar3);
            psVar2 = (short *)(param_1 + 0x2c4c + iVar8);
            *psVar2 = sVar1;
            psVar2[1] = (short)uVar3;
            iVar8 = iVar8 + -0xb34;
          }
        }
        if ((uint)*(ushort *)(param_1 + 0xeb8c) == (uint)*(ushort *)(param_1 + 0xeb8a)) {
          iStack_14 = (*(ushort *)(param_1 + 0xeb82) - 1) -
                      ((uint)*(ushort *)(param_1 + 0xeb8c) * (uint)*(byte *)(param_1 + 0xeb88) +
                      iVar7);
        }
        else {
          iStack_14 = (uint)*(byte *)(param_1 + 0xeb88) - (iVar7 + 1);
        }
        if (0 < iStack_14) {
          iVar8 = (iVar7 + 1) * 0xb34;
          iStack_34 = iStack_14 + -3;
          if (2 < iStack_34) {
            do {
              piVar12 = (int *)(param_1 + 0x890);
              iVar4 = increment_and_call_helper(piVar12,uVar11);
              iVar10 = param_1 + 0x2c4c;
              *(short *)(iVar10 + iVar8) = sVar1;
              ((short *)(iVar10 + iVar8))[1] = (short)iVar4;
              iVar4 = increment_and_call_helper(piVar12,iVar4);
              psVar2 = (short *)(iVar10 + iVar8 + 0xb34);
              *psVar2 = sVar1;
              psVar2[1] = (short)iVar4;
              uVar11 = increment_and_call_helper(piVar12,iVar4);
              psVar2 = (short *)(iVar10 + iVar8 + 0x1668);
              *psVar2 = sVar1;
              psVar2[1] = (short)uVar11;
              iVar8 = iVar8 + 0x219c;
              iStack_34 = iStack_34 + -3;
            } while (-1 < iStack_34);
          }
          for (iStack_34 = iStack_34 + 2; -1 < iStack_34; iStack_34 = iStack_34 + -1) {
            uVar11 = increment_and_call_helper((int *)(param_1 + 0x890),uVar11);
            psVar2 = (short *)(param_1 + 0x2c4c + iVar8);
            *psVar2 = sVar1;
            psVar2[1] = (short)uVar11;
            iVar8 = iVar8 + 0xb34;
          }
        }
        *(char *)(param_1 + 0xeb8e) = (char)iStack_14 + (char)iVar7 + '\x01';
        *(char *)(param_1 + 0xeb8f) = (char)iVar7;
        if (param_2 == 0) {
          *(uint8_t *)(param_1 + 0xeb90) = 1;
          if ((ushort)*(byte *)(param_1 + 0xeb88) < *(ushort *)(param_1 + 0xeb82)) {
            *(uint8_t *)(param_1 + 0xeb91) = 1;
          }
          else {
            *(uint8_t *)(param_1 + 0xeb90) = 0;
            *(uint8_t *)(param_1 + 0xeb91) = 0;
          }
        }
      }
    }
    else if (iVar7 == 1) {
      iStack_1c = 1;
      if (*(ushort *)(param_1 + 0xeb8c) + 1 == (uint)*(ushort *)(param_1 + 0xeb8a)) {
        uVar11 = (uint)*(ushort *)(param_1 + 0xeb82) % (uint)*(byte *)(param_1 + 0xeb88);
        if (uVar11 == 0) {
          *(byte *)(param_1 + 0xeb8e) = *(byte *)(param_1 + 0xeb88);
        }
        else {
          *(char *)(param_1 + 0xeb8e) = (char)uVar11;
        }
      }
      else {
        *(uint8_t *)(param_1 + 0xeb8e) = *(uint8_t *)(param_1 + 0xeb88);
      }
      puVar9 = (uint16_t *)(param_1 + 0x2c4c);
      deep_copy_struct_with_subblocks(puVar9,puVar9 + (*(byte *)(param_1 + 0xeb88) - 1) * 0x59a);
      uVar5 = *puVar9;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2c4e);
      iVar7 = 0;
      if (*(char *)(param_1 + 0xeb8e) != '\0') {
        iVar8 = 0;
        do {
          uVar11 = increment_and_call_helper((int *)(param_1 + 0x890),uVar11);
          puVar9 = (uint16_t *)(param_1 + 0x2c4c + iVar8);
          *puVar9 = uVar5;
          puVar9[1] = (short)uVar11;
          iVar8 = iVar8 + 0xb34;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0xeb8e));
      }
      *(short *)(param_1 + 0xeb8c) = *(short *)(param_1 + 0xeb8c) + 1;
    }
    else if (iVar7 == 2) {
      iStack_1c = 1;
      uVar5 = *(uint16_t *)(param_1 + 0x2c4c);
      uVar11 = (uint)*(ushort *)(param_1 + 0x2c4e);
      uVar3 = (uint)*(byte *)(param_1 + 0xeb88);
      if (uVar3 != 0) {
        iVar7 = (uVar3 - 1) * 0xb34;
        iStack_30 = uVar3 - 3;
        if (2 < iStack_30) {
          do {
            piVar12 = (int *)(param_1 + 0x890);
            iVar8 = decrement_and_call_helper(piVar12,uVar11);
            iVar4 = param_1 + 0x2c4c;
            *(uint16_t *)(iVar4 + iVar7) = uVar5;
            ((uint16_t *)(iVar4 + iVar7))[1] = (short)iVar8;
            iVar8 = decrement_and_call_helper(piVar12,iVar8);
            puVar9 = (uint16_t *)(iVar4 + iVar7 + -0xb34);
            *puVar9 = uVar5;
            puVar9[1] = (short)iVar8;
            uVar11 = decrement_and_call_helper(piVar12,iVar8);
            puVar9 = (uint16_t *)(iVar4 + iVar7 + -0x1668);
            *puVar9 = uVar5;
            puVar9[1] = (short)uVar11;
            iVar7 = iVar7 + -0x219c;
            iStack_30 = iStack_30 + -3;
          } while (-1 < iStack_30);
        }
        for (iStack_30 = iStack_30 + 2; -1 < iStack_30; iStack_30 = iStack_30 + -1) {
          uVar11 = decrement_and_call_helper((int *)(param_1 + 0x890),uVar11);
          puVar9 = (uint16_t *)(param_1 + 0x2c4c + iVar7);
          *puVar9 = uVar5;
          puVar9[1] = (short)uVar11;
          iVar7 = iVar7 + -0xb34;
        }
      }
      *(uint8_t *)(param_1 + 0xeb8e) = *(uint8_t *)(param_1 + 0xeb88);
      *(short *)(param_1 + 0xeb8c) = *(short *)(param_1 + 0xeb8c) + -1;
    }
    if (iStack_1c == 0) {
      clear_fourteen_word_blocks(param_1);
    }
  }
  return iStack_1c;
}
