/* @k10d read_two_words_from_buffer @ 0x1036535e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Reads a length byte and two 16-bit values from a buffer at an offset and passes them to
 *   a handler.
 * summary:
 *   The function takes a base pointer, adds 0x1c to form an offset. It calls
 *   read_byte_at_offset_five_1051e50e to get a length byte, then calls
 *   read_array_element_at_offset twice to retrieve pointers to data. It extracts the first
 *   16-bit word and the second 16-bit word (at offset +2) and passes the base pointer,
 *   length, and both words to dispatch_event_to_handler_103653a0. The specific subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_words_from_buffer(int param_1)

{
  ushort uVar1;
  uint extraout_r4;
  ushort *puVar2;
  int iVar4;
  byte bVar3;
  
  iVar4 = param_1 + 0x1c;
  bVar3 = read_byte_at_offset_five_1051e50e(iVar4);
  extraout_r4 = (uint)bVar3;
  puVar2 = (ushort *)read_array_element_at_offset(iVar4,extraout_r4);
  uVar1 = *puVar2;
  iVar4 = read_array_element_at_offset(iVar4,extraout_r4);
  dispatch_event_to_handler_103653a0(param_1,extraout_r4,(uint)uVar1,(uint)*(ushort *)(iVar4 + 2));
  return;
}
