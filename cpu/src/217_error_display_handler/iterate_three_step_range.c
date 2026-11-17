/* @k10d iterate_three_step_range @ 0x104b5a1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a helper repeatedly over a range derived from three values, processing in chunks
 *   of three then one.
 * summary:
 *   The function calls parse_numeric_expression three times with the same arguments to
 *   obtain three values (uVar1, uVar2, uVar3). It stores uVar3 at offset 0x28 in param_1.
 *   It then computes a count based on uVar1 and uVar2 and loops, calling
 *   build_and_dispatch_parameter_block with an incrementing index (masked to 16 bits) and a
 *   fixed set of parameters (7, 0xff, 0) derived from a local struct. The loop processes
 *   indices in groups of three, then handles the remainder one by one.
 *   format_string_to_buffer_10545140 is called at the start to initialize a local buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_three_step_range(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint32_t *puVar4;
  void *r6_in;
  void *r7_in;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_84 [12];
  int iStack_64;
  uint8_t auStack_58 [80];
  
  puVar5 = auStack_84;
  format_string_to_buffer_10545140(auStack_58,(void *)&DAT_105b88f4/*ROM*/,r6_in,r7_in);
  uVar1 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  uVar2 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  uVar3 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  *(uint *)(param_1 + 0x28) = uVar3;
  if (uVar1 < uVar2 + uVar1) {
    iStack_64 = ((uVar2 + uVar1) - uVar1) + -3;
    if (2 < iStack_64) {
      do {
        puVar4 = *(uint32_t **)(param_1 + 4);
        *(uint16_t *)(puVar5 + 2) = 7;
        *(uint16_t *)(puVar5 + 6) = 0xff;
        puVar5[0xb] = 0;
        build_and_dispatch_parameter_block(puVar4,uVar1 & 0xffff,0,auStack_58,*(uint16_t *)(puVar5 + 2),
                     *(uint16_t *)(puVar5 + 6),puVar5[0xb]);
        puVar4 = *(uint32_t **)(param_1 + 4);
        *(uint16_t *)(puVar5 + 2) = 7;
        *(uint16_t *)(puVar5 + 6) = 0xff;
        puVar5[0xb] = 0;
        build_and_dispatch_parameter_block(puVar4,uVar1 + 1 & 0xffff,0,auStack_58,*(uint16_t *)(puVar5 + 2),
                     *(uint16_t *)(puVar5 + 6),puVar5[0xb]);
        puVar4 = *(uint32_t **)(param_1 + 4);
        *(uint16_t *)(puVar5 + 2) = 7;
        *(uint16_t *)(puVar5 + 6) = 0xff;
        puVar5[0xb] = 0;
        build_and_dispatch_parameter_block(puVar4,uVar1 + 2 & 0xffff,0,auStack_58,*(uint16_t *)(puVar5 + 2),
                     *(uint16_t *)(puVar5 + 6),puVar5[0xb]);
        iStack_64 = iStack_64 + -3;
        uVar1 = uVar1 + 3;
      } while (-1 < iStack_64);
    }
    iStack_64 = iStack_64 + 2;
    if (-1 < iStack_64) {
      do {
        puVar4 = *(uint32_t **)(param_1 + 4);
        *(uint16_t *)(puVar5 + 2) = 7;
        *(uint16_t *)(puVar5 + 6) = 0xff;
        puVar5[0xb] = 0;
        build_and_dispatch_parameter_block(puVar4,uVar1 & 0xffff,0,auStack_58,*(uint16_t *)(puVar5 + 2),
                     *(uint16_t *)(puVar5 + 6),puVar5[0xb]);
        iStack_64 = iStack_64 + -1;
        uVar1 = uVar1 + 1;
      } while (-1 < iStack_64);
    }
  }
  return;
}
