/* @k10d send_grid_data_in_blocks @ 0x1050a058
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a 2D grid of 32-bit values and sends each element via a write function,
 *   with periodic control calls.
 * summary:
 *   The function checks a flag at param_2+0x40 and, if set, reads row/column dimensions
 *   from param_3. It then loops through two data arrays (pointers at param_3+0x10 and
 *   param_3+0x14), calling copy_stream_bytes_into_struct for each element. It intersperses
 *   calls to append_newline_to_buffer and append_bytes_to_ring_buffer with specific
 *   constants, likely for synchronization or mode switching. The structure suggests
 *   transmitting a matrix of values, possibly for a histogram or metering display.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_grid_data_in_blocks(uint32_t param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint32_t *puVar3;
  int iVar4;
  int iVar5;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  if (*(char *)(param_2 + 0x40) != '\0') {
    uVar1 = (uint)*(ushort *)(param_3 + 6);
    uVar2 = (uint)*(ushort *)(param_3 + 4);
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d53c0/*ROM*/,0);
    puVar3 = *(uint32_t **)(param_3 + 0x10);
    iStack_10 = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar4 = uVar2 - 3;
          if (2 < iVar4) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[4]),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[8]),(int)(1),(void *)(0));
              iVar4 = iVar4 + -3;
              puVar3 = puVar3 + 0xc;
            } while (-1 < iVar4);
          }
          for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
            puVar3 = puVar3 + 4;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_10 = iStack_10 + 1;
      } while (iStack_10 < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d53cc/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x10);
    iStack_14 = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar5 = uVar2 - 3;
          if (2 < iVar5) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 4)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x14)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x24)),(int)(1),(void *)(0));
              iVar5 = iVar5 + -3;
              iVar4 = iVar4 + 0x30;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 4)),(int)(1),(void *)(0));
            iVar4 = iVar4 + 0x10;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d53d8/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x10);
    iStack_18 = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar5 = uVar2 - 3;
          if (2 < iVar5) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 8)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x18)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x28)),(int)(1),(void *)(0));
              iVar5 = iVar5 + -3;
              iVar4 = iVar4 + 0x30;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 8)),(int)(1),(void *)(0));
            iVar4 = iVar4 + 0x10;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d53e4/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x10);
    iStack_1c = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar5 = uVar2 - 3;
          if (2 < iVar5) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0xc)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x1c)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x2c)),(int)(1),(void *)(0));
              iVar5 = iVar5 + -3;
              iVar4 = iVar4 + 0x30;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0xc)),(int)(1),(void *)(0));
            iVar4 = iVar4 + 0x10;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d53f4/*ROM*/,0);
    puVar3 = *(uint32_t **)(param_3 + 0x14);
    iStack_20 = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar4 = uVar2 - 3;
          if (2 < iVar4) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[4]),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(puVar3[8]),(int)(1),(void *)(0));
              iVar4 = iVar4 + -3;
              puVar3 = puVar3 + 0xc;
            } while (-1 < iVar4);
          }
          for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*puVar3),(int)(1),(void *)(0));
            puVar3 = puVar3 + 4;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d5400/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x14);
    iStack_24 = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar5 = uVar2 - 3;
          if (2 < iVar5) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 4)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x14)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x24)),(int)(1),(void *)(0));
              iVar5 = iVar5 + -3;
              iVar4 = iVar4 + 0x30;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 4)),(int)(1),(void *)(0));
            iVar4 = iVar4 + 0x10;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d540c/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x14);
    iStack_28 = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar5 = uVar2 - 3;
          if (2 < iVar5) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 8)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x18)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x28)),(int)(1),(void *)(0));
              iVar5 = iVar5 + -3;
              iVar4 = iVar4 + 0x30;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 8)),(int)(1),(void *)(0));
            iVar4 = iVar4 + 0x10;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < (int)uVar1);
    }
    append_newline_to_buffer(param_2,0);
    append_bytes_to_ring_buffer(param_2,0x105d5418/*ROM*/,0);
    iVar4 = *(int *)(param_3 + 0x14);
    iStack_2c = 0;
    if (uVar1 != 0) {
      do {
        if (uVar2 != 0) {
          iVar5 = uVar2 - 3;
          if (2 < iVar5) {
            do {
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0xc)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x1c)),(int)(1),(void *)(0));
              copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0x2c)),(int)(1),(void *)(0));
              iVar5 = iVar5 + -3;
              iVar4 = iVar4 + 0x30;
            } while (-1 < iVar5);
          }
          for (iVar5 = iVar5 + 2; -1 < iVar5; iVar5 = iVar5 + -1) {
            copy_stream_bytes_into_struct((int)(param_2),(void *)(*(uint32_t *)(iVar4 + 0xc)),(int)(1),(void *)(0));
            iVar4 = iVar4 + 0x10;
          }
        }
        append_newline_to_buffer(param_2,0);
        iStack_2c = iStack_2c + 1;
      } while (iStack_2c < (int)uVar1);
    }
  }
  return;
}
