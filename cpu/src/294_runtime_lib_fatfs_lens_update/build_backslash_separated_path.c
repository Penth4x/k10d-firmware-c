/* @k10d build_backslash_separated_path @ 0x1053ed70
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Builds a backslash-separated path string by appending a base name and each entry from a
 *   linked list into a caller buffer.
 * summary:
 *   The function copies a base string into param_3, appends a colon, then walks a linked
 *   list of entries (via piVar3[5]). For each entry it formats a name into a local buffer,
 *   checks the remaining buffer size, and appends the name with a backslash separator. It
 *   returns the final path length or a negative error code if the buffer is too small.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_backslash_separated_path(uint32_t param_1,uint32_t param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uintptr_t sp;
  int in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  char acStack_2c4 [16];
  uint8_t auStack_2b4 [672];
  uint8_t *puStack_14;
  int iStack_10;
  uint uStack_c;
  
  iVar1 = count_string_bytes((char *)(in_stack_00000010 + 1));
  if (in_stack_00000018 < iVar1 + 2U) {
    iVar2 = -0x4e;
  }
  else {
    copy_null_terminated_string(param_3,(void *)(in_stack_00000010 + 1));
    param_3[iVar1] = ':';
    iVar2 = iVar1 + 1;
    param_3[iVar2] = '\0';
    piVar3 = *(int **)((uint)*(ushort *)(in_stack_00000010 + 10) * 8 + in_stack_00000014 + 0x10);
    if (piVar3 == (int *)0x0) {
      param_3[iVar2] = '\\';
      iVar2 = iVar1 + 2;
      param_3[iVar2] = '\0';
    }
    else {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[5]) {
        iVar1 = dispatch_param2_command(in_stack_00000010,piVar3,auStack_2b4);
        if (iVar1 != 0) {
          return iVar1;
        }
        puStack_14 = auStack_2b4;
        iVar1 = validate_block_sequence(auStack_2b4,piVar3[2],&uStack_c);
        if (iVar1 != 0) {
          return -0x38f;
        }
        if (in_stack_00000018 < iVar2 + 2U) {
          return -0x4e;
        }
        param_3[iVar2] = '\\';
        param_3[iVar2 + 1] = '\0';
        append_dot_to_buffer(auStack_2b4 + (piVar3[2] + -1) * 0x20,acStack_2c4);
        iStack_10 = count_string_bytes(acStack_2c4);
        iStack_10 = iVar2 + 1 + iStack_10;
        if (in_stack_00000018 < iStack_10 + 1U) {
          return -0x4e;
        }
        copy_string_to_buffer(param_3,acStack_2c4);
        iVar2 = iStack_10;
      }
    }
  }
  return iVar2;
}
