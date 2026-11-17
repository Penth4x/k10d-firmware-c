/* @k10d build_and_send_two_byte_payload_10470d38 @ 0x10470d38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructs a small 8-byte buffer with fixed fields and passes it to a helper function.
 * summary:
 *   The function calls read_dat_50000000_upper_nibble to obtain a pointer, then calls
 *   format_string_to_buffer_10545140 to populate an 80-byte stack buffer using that
 *   pointer, a global constant, and param_4. It sets two 16-bit fields in a separate 8-byte
 *   stack buffer to 7 and 0xff, then calls sr_dma_command with param_1, constants 3 and 5,
 *   the 80-byte buffer, and the two 16-bit values. The specific subsystem is not
 *   identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_two_byte_payload_10470d38(int param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  void *pvVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStack_6c [8];
  uint8_t auStack_58 [80];
  
  puVar2 = auStack_6c;
  pvVar1 = (void *)read_dat_50000000_upper_nibble();
  format_string_to_buffer_10545140(auStack_58,(void *)&DAT_105a9788/*ROM*/,pvVar1,param_4);
  *(uint16_t *)(puVar2 + 2) = 7;
  *(uint16_t *)(puVar2 + 6) = 0xff;
  sr_dma_command(param_1,3,5,auStack_58,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6));
  return;
}
