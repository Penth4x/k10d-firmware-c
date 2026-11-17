/* @k10d parse_dotted_version_string @ 0x1053efde
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Splits a dot-separated string into two numeric components and converts them to
 *   integers.
 * summary:
 *   The function takes a string (param_1) and splits it into two parts based on a dot
 *   separator. It uses count_string_bytes to get the string length and validate_hex_string
 *   to validate the format. It extracts the first part (up to 8 chars) and the second part
 *   (up to 3 chars) into stack buffers, then calls decode_length_prefixed_byte_stream to
 *   convert these buffers into the output parameters param_2 and param_3. Returns 0 on
 *   success or negative error codes (-0x208, -0x4e) on parse failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int parse_dotted_version_string(char *param_1,byte *param_2,byte *param_3,uint32_t *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uintptr_t sp;
  uint8_t auStack_38 [12];
  uint8_t auStack_2c [4];
  int iStack_28;
  
  iStack_28 = 0;
  *param_4 = 0;
  uVar1 = count_string_bytes(param_1);
  uVar3 = 0;
  if (param_1[uVar1 - 1] == ' ') {
    iVar2 = -0x208;
  }
  else {
    iVar2 = validate_hex_string(param_1);
    if (-1 < iVar2) {
      while (uVar1 != 0) {
        if (param_1[uVar1 - 1] == '.') {
          uVar1 = uVar1 - 1;
          iStack_28 = 1;
          break;
        }
        uVar3 = uVar3 + 1;
        uVar1 = uVar1 - 1;
      }
      uVar4 = uVar3;
      if (iStack_28 == 0) {
        uVar4 = 0;
        uVar1 = uVar3;
      }
      if (uVar4 < 4) {
        if (uVar1 == 0) {
          iVar2 = -0x208;
        }
        else if (uVar1 < 9) {
          uVar3 = copy_string_with_escape(param_1,uVar1,auStack_38,8);
          if (uVar3 < uVar1) {
            iVar2 = -0x208;
          }
          else {
            if (uVar4 == 0) {
              auStack_2c[0] = 0;
              uVar1 = 0;
            }
            else if (uVar3 == 0) {
              *param_4 = 0x10;
              uVar3 = copy_string_with_escape(param_1 + uVar1 + 1,uVar4,auStack_38,8);
              auStack_2c[0] = 0;
              uVar1 = 0;
            }
            else {
              uVar1 = copy_string_with_escape(param_1 + uVar1 + 1,uVar4,auStack_2c,3);
              if (uVar1 < uVar4) {
                return -0x208;
              }
            }
            if ((uVar3 == 0) && (uVar1 == 0)) {
              iVar2 = -0x208;
            }
            else {
              decode_length_prefixed_byte_stream(auStack_38,param_2);
              decode_length_prefixed_byte_stream(auStack_2c,param_3);
              iVar2 = 0;
            }
          }
        }
        else {
          iVar2 = -0x4e;
        }
      }
      else {
        iVar2 = -0x4e;
      }
    }
  }
  return iVar2;
}
