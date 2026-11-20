/* @k10d copy_row_blocks_to_buffer @ 0x104e1416
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_5 row blocks of param_4 bytes from param_2 into a destination buffer at
 *   param_1[2]+param_3.
 * summary:
 *   Checks that the destination buffer size (*param_1) is large enough for
 *   param_4*param_5+param_3 bytes. If param_1[1] is 1, it calls copy_bytes_forward for each
 *   row block; otherwise it performs a manual byte-wise copy. Returns 1 on success, 0 if
 *   the buffer is too small. The caller is a virtual method of cls_105be9a0, but the
 *   specific camera subsystem is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_row_blocks_to_buffer(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  int iStack_c;
  
  if (*param_1 < (uint)(param_4 * param_5 + param_3)) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = param_1[2] + param_3;
    if (*(char *)(param_1 + 1) == '\x01') {
      if (param_5 != 0) {
        iStack_c = param_5 + -3;
        if (2 < iStack_c) {
          do {
            copy_bytes_forward((uint8_t *)(param_2 + iVar4),(uint8_t *)(iVar5 + iVar4),(uint)(param_4));
            iVar4 = iVar4 + param_4;
            copy_bytes_forward((uint8_t *)(param_2 + iVar4),(uint8_t *)(iVar5 + iVar4),(uint)(param_4));
            iVar4 = iVar4 + param_4;
            copy_bytes_forward((uint8_t *)(param_2 + iVar4),(uint8_t *)(iVar5 + iVar4),(uint)(param_4));
            iStack_c = iStack_c + -3;
            iVar4 = iVar4 + param_4;
          } while (-1 < iStack_c);
        }
        iStack_c = iStack_c + 2;
        if (-1 < iStack_c) {
          do {
            copy_bytes_forward((uint8_t *)(param_2 + iVar4),(uint8_t *)(iVar5 + iVar4),(uint)(param_4));
            iStack_c = iStack_c + -1;
            iVar4 = iVar4 + param_4;
          } while (-1 < iStack_c);
          return 1;
        }
      }
    }
    else if (param_5 != 0) {
      iVar1 = param_5 + -3;
      if (2 < iVar1) {
        do {
          iVar2 = param_4;
          while (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            *(uint8_t *)(iVar2 + iVar5 + iVar4) = *(uint8_t *)(iVar2 + param_2 + iVar4);
          }
          iVar4 = iVar4 + param_4;
          iVar2 = param_4;
          while (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            *(uint8_t *)(iVar2 + iVar5 + iVar4) = *(uint8_t *)(iVar2 + param_2 + iVar4);
          }
          iVar4 = iVar4 + param_4;
          iVar2 = param_4;
          while (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            *(uint8_t *)(iVar2 + iVar5 + iVar4) = *(uint8_t *)(iVar2 + param_2 + iVar4);
          }
          iVar1 = iVar1 + -3;
          iVar4 = iVar4 + param_4;
        } while (-1 < iVar1);
      }
      for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar2 = param_4;
        while (iVar2 != 0) {
          iVar2 = iVar2 + -1;
          *(uint8_t *)(iVar2 + iVar5 + iVar4) = *(uint8_t *)(iVar2 + param_2 + iVar4);
        }
        iVar4 = iVar4 + param_4;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
