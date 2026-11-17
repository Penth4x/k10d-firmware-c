/* @k10d compare_two_structs_by_fields @ 0x104c1f44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Compares two objects field-by-field via six accessor functions and returns 1 if all
 *   fields match.
 * summary:
 *   The function calls read_first_word_1045c66c on both param_2 and param_3 to compare an
 *   integer field, then sequentially compares five byte-sized fields using
 *   read_byte_at_offset_two, read_byte_at_offset_three, read_byte_at_offset_5,
 *   read_byte_at_offset_six, and read_byte_at_offset_seven. It returns 1 if all six
 *   comparisons are equal, otherwise 0. param_1 is unused. The specific meaning of the
 *   compared fields is unknown because the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_two_structs_by_fields(uint32_t param_1,void *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  uint32_t uVar5;
  
  iVar1 = read_first_word_1045c66c(param_2);
  iVar2 = read_first_word_1045c66c(param_3);
  uVar5 = 0;
  if (iVar1 == iVar2) {
    cVar3 = read_byte_at_offset_two(param_2);
    cVar4 = read_byte_at_offset_two(param_3);
    if (cVar3 == cVar4) {
      cVar3 = read_byte_at_offset_three(param_2);
      cVar4 = read_byte_at_offset_three(param_3);
      if (cVar3 == cVar4) {
        cVar3 = read_byte_at_offset_5(param_2);
        cVar4 = read_byte_at_offset_5(param_3);
        if (cVar3 == cVar4) {
          cVar3 = read_byte_at_offset_six(param_2);
          cVar4 = read_byte_at_offset_six(param_3);
          if (cVar3 == cVar4) {
            cVar3 = read_byte_at_offset_seven(param_2);
            cVar4 = read_byte_at_offset_seven(param_3);
            if (cVar3 == cVar4) {
              uVar5 = 1;
            }
          }
        }
      }
    }
  }
  return uVar5;
}
