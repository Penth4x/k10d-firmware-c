/* @k10d build_and_send_two_byte_payload_10470c54 @ 0x10470c54
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructs a small payload from two 16-bit values and dispatches it via a helper.
 * summary:
 *   The function initializes a local buffer, reads two 16-bit values (via
 *   return_global_word_104592ce or return_global_word_104592d8 depending on param_2), and
 *   passes them to format_string_to_buffer_10545140 along with a pointer to a static data
 *   block. It then sets two fields in the local buffer (7 and 0xff) and calls
 *   sr_dma_command with the constructed payload. Finally, it calls heap_free_if_flagged to
 *   clean up or finalize the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_two_byte_payload_10470c54(int param_1,int param_2)

{
  ushort uVar3;
  ushort uVar4;
  int iVar1;
  uint uVar2;
  char *pcVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t local_80 [8];
  uint8_t auStack_5c [83];
  uint8_t uStack_9;
  
  piVar6 = (int *)local_80;
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  if (param_2 == 0) {
    uVar3 = return_global_word_104592ce();
    uVar4 = return_global_word_104592ce();
    pcVar5 = (char *)&DAT_105a9778/*ROM*/;
  }
  else {
    uVar3 = return_global_word_104592ce();
    uVar4 = return_global_word_104592ce();
    iVar1 = return_global_word_104592d8((int)&uStack_9);
    uVar2 = return_global_word_104592d8((int)&uStack_9);
    *piVar6 = iVar1 >> 8;
    piVar6[1] = uVar2 & 0xff;
    pcVar5 = (char *)&DAT_105a975c/*ROM*/;
  }
  format_string_to_buffer_10545140(auStack_5c,pcVar5,(void *)((int)(uint)uVar3 >> 8),(void *)(uVar4 & 0xff));
  *(uint16_t *)((int)piVar6 + 2) = 7;
  *(uint16_t *)((int)piVar6 + 6) = 0xff;
  sr_dma_command(param_1,4,5,auStack_5c,*(uint16_t *)((int)piVar6 + 2),
                 *(uint16_t *)((int)piVar6 + 6));
  heap_free_if_flagged(&uStack_9,2);
  return;
}
