/* @k10d write_three_byte_pattern_sequence @ 0x104b53b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Writes a repeating 3-byte pattern to a target buffer in chunks of three, then handles
 *   the remainder.
 * summary:
 *   The function first calls format_string_to_buffer_10545140 to initialize a local buffer
 *   (auStack_58) using a constant pointer and two input pointers. It then calculates the
 *   number of complete 3-element groups in the range defined by param_2 and param_3. For
 *   each group, it sets three local variables to fixed values (7, 0xff, 0) and calls
 *   build_and_dispatch_parameter_block three times with incrementing indices. Finally, it
 *   processes any remaining elements (1 or 2) in a similar loop, calling
 *   build_and_dispatch_parameter_block for each. The specific values 7 and 0xff suggest a
 *   specific data pattern or command sequence, but the exact subsystem is not identifiable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_byte_pattern_sequence(uint32_t *param_1,uint param_2,void *param_3,void *param_4)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_84 [12];
  int iStack_68;
  uint8_t auStack_58 [80];
  
  puVar1 = auStack_84;
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b86e8/*ROM*/,param_3,param_4);
  if (param_2 < (int)param_3 + param_2) {
    iStack_68 = (((int)param_3 + param_2) - param_2) + -3;
    if (2 < iStack_68) {
      do {
        *(uint16_t *)(puVar1 + 2) = 7;
        *(uint16_t *)(puVar1 + 6) = 0xff;
        puVar1[0xb] = 0;
        build_and_dispatch_parameter_block(param_1,param_2 & 0xffff,0,auStack_58,*(uint16_t *)(puVar1 + 2),
                     *(uint16_t *)(puVar1 + 6),puVar1[0xb]);
        *(uint16_t *)(puVar1 + 2) = 7;
        *(uint16_t *)(puVar1 + 6) = 0xff;
        puVar1[0xb] = 0;
        build_and_dispatch_parameter_block(param_1,param_2 + 1 & 0xffff,0,auStack_58,*(uint16_t *)(puVar1 + 2),
                     *(uint16_t *)(puVar1 + 6),puVar1[0xb]);
        *(uint16_t *)(puVar1 + 2) = 7;
        *(uint16_t *)(puVar1 + 6) = 0xff;
        puVar1[0xb] = 0;
        build_and_dispatch_parameter_block(param_1,param_2 + 2 & 0xffff,0,auStack_58,*(uint16_t *)(puVar1 + 2),
                     *(uint16_t *)(puVar1 + 6),puVar1[0xb]);
        iStack_68 = iStack_68 + -3;
        param_2 = param_2 + 3;
      } while (-1 < iStack_68);
    }
    iStack_68 = iStack_68 + 2;
    if (-1 < iStack_68) {
      do {
        *(uint16_t *)(puVar1 + 2) = 7;
        *(uint16_t *)(puVar1 + 6) = 0xff;
        puVar1[0xb] = 0;
        build_and_dispatch_parameter_block(param_1,param_2 & 0xffff,0,auStack_58,*(uint16_t *)(puVar1 + 2),
                     *(uint16_t *)(puVar1 + 6),puVar1[0xb]);
        iStack_68 = iStack_68 + -1;
        param_2 = param_2 + 1;
      } while (-1 < iStack_68);
    }
  }
  return;
}
