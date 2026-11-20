/* @k10d serialize_state_to_buffer @ 0x10525f8c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 282_event_handler_state (unit names are model-proposed)
 * purpose:
 *   Serializes fields from a state object into a destination buffer using label and value
 *   write primitives.
 * summary:
 *   The function checks a flag at 0x800134c8 and, if set, retrieves a state object via
 *   get_or_create_singleton_object_104fb12e. It iterates through an array of 3-word records
 *   and four separate arrays of 16-bit values, writing each to param_2 using
 *   append_bytes_to_ring_buffer for labels and
 *   copy_stream_bytes_into_struct/parse_and_store_buffered_records for data. The specific
 *   subsystem (display, logging, etc.) is not determinable from the provided callees or
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void serialize_state_to_buffer(uint32_t param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint16_t *puVar3;
  uint uVar4;
  int iVar5;
  
  if (cRam800134c8 != '\0') {
    cRam800134c8 = '\0';
    iVar2 = get_or_create_singleton_object_104fb12e();
    iVar5 = *(int *)(iVar2 + 0x78);
    uVar1 = *(ushort *)(iVar5 + 0x14);
    puVar3 = *(uint16_t **)(iVar5 + 0x18);
    append_bytes_to_ring_buffer(param_2,0x105d9110/*ROM*/,0);
    copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint16_t *)(iVar5 + 0x14)),(int)(1),(void *)(0));
    append_newline_to_buffer(param_2,0);
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        append_bytes_to_ring_buffer(param_2,0x105d9120/*ROM*/,0);
        copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
        append_bytes_to_ring_buffer(param_2,0x105d9128/*ROM*/,0);
        copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[1]),(int)(1),(void *)(0));
        append_bytes_to_ring_buffer(param_2,0x105d9130/*ROM*/,0);
        copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[2] & 0xf),(int)(1),(void *)(0));
        append_bytes_to_ring_buffer(param_2,0x105d9138/*ROM*/,0);
        copy_stream_bytes_into_struct((int)(param_2),(void *)(((ushort)puVar3[2] & 0xf00) >> 8),(int)(1),(void *)(0));
        append_bytes_to_ring_buffer(param_2,0x105d9140/*ROM*/,0);
        copy_stream_bytes_into_struct((int)(param_2),(void *)((puVar3[2] & 0x8000) != 0),(int)(1),(void *)(0));
        append_newline_to_buffer(param_2,0);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 3;
      } while (iVar2 < (int)(uint)uVar1);
    }
    puVar3 = *(uint16_t **)(iVar5 + 0x30);
    uVar4 = *(uint *)(iVar5 + 0x40) >> 1;
    append_bytes_to_ring_buffer(param_2,0x105d9148/*ROM*/,0);
    parse_and_store_buffered_records(param_2,puVar3,1,0);
    copy_stream_bytes_into_struct((int)(param_2),(void *)(uVar4),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[uVar4 - 1]),(int)(1),(void *)(0));
    append_newline_to_buffer(param_2,0);
    iVar2 = 0;
    if (uVar4 != 0) {
      do {
        copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
        append_newline_to_buffer(param_2,0);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)uVar4);
    }
    puVar3 = *(uint16_t **)(iVar5 + 0x34);
    uVar4 = *(uint *)(iVar5 + 0x44) >> 1;
    append_bytes_to_ring_buffer(param_2,0x105d9150/*ROM*/,0);
    parse_and_store_buffered_records(param_2,puVar3,1,0);
    copy_stream_bytes_into_struct((int)(param_2),(void *)(uVar4),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[uVar4 - 1]),(int)(1),(void *)(0));
    append_newline_to_buffer(param_2,0);
    iVar2 = 0;
    if (uVar4 != 0) {
      do {
        copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
        append_newline_to_buffer(param_2,0);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)uVar4);
    }
    puVar3 = *(uint16_t **)(iVar5 + 0x38);
    uVar4 = *(uint *)(iVar5 + 0x48) >> 1;
    append_bytes_to_ring_buffer(param_2,0x105d9158/*ROM*/,0);
    parse_and_store_buffered_records(param_2,puVar3,1,0);
    copy_stream_bytes_into_struct((int)(param_2),(void *)(uVar4),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[uVar4 - 1]),(int)(1),(void *)(0));
    append_newline_to_buffer(param_2,0);
    iVar2 = 0;
    if (uVar4 != 0) {
      do {
        copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
        append_newline_to_buffer(param_2,0);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)uVar4);
    }
    puVar3 = *(uint16_t **)(iVar5 + 0x3c);
    uVar4 = *(uint *)(iVar5 + 0x4c) >> 1;
    append_bytes_to_ring_buffer(param_2,0x105d9160/*ROM*/,0);
    parse_and_store_buffered_records(param_2,puVar3,1,0);
    copy_stream_bytes_into_struct((int)(param_2),(void *)(uVar4),(int)(1),(void *)(0));
    copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[uVar4 - 1]),(int)(1),(void *)(0));
    append_newline_to_buffer(param_2,0);
    iVar2 = 0;
    if (uVar4 != 0) {
      do {
        copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
        append_newline_to_buffer(param_2,0);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)uVar4);
    }
  }
  return;
}
