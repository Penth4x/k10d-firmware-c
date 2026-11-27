/* @k10d process_sensor_readout_data @ 0x1041962c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Processes sensor readout data by invoking a virtual handler and conditionally writing
 *   result buffers to a companion chip.
 * summary:
 *   The function retrieves a global context pointer and initializes a local structure. It
 *   calls a virtual method on an object at param_1+0x4c, passing the initialized structure.
 *   If the handler sets a flag, it writes four 16-bit buffers (0x1580 words each) to a
 *   companion chip via a series of write functions, suggesting a data transfer or
 *   calibration step. The function returns the status flag from the handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10419716) overlaps instruction at (ram,0x10419714)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char process_sensor_readout_data(int param_1,uint32_t param_2,int param_3,uint16_t param_4)

{
  struct {
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    int iStack_c;
  } _cfg_2c;
  char cVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint16_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  char cStack_30;
  iVar2 = get_or_create_singleton_object_104fb12e();
  iVar2 = *(int *)(iVar2 + 0x78);
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  cStack_30 = '\0';
  alloc_and_zero_struct_1041a95a(&_cfg_2c.uStack_2c);
  _cfg_2c.iStack_c = 0;
  uStack_5c = *(uint32_t *)(iVar2 + 0x30);
  uStack_58 = *(uint32_t *)(iVar2 + 0x34);
  uStack_54 = *(uint32_t *)(iVar2 + 0x38);
  uStack_50 = *(uint32_t *)(iVar2 + 0x3c);
  uStack_48 = 0x2b00;
  if (*(int *)(param_1 + 0x84) != 0) {
    _cfg_2c.iStack_c = *(int *)(param_1 + 0x84) + 0x880;
  }
  uStack_4c = param_4;
  uStack_44 = param_2;
  iStack_40 = param_3;
  iStack_3c = param_3;
  iStack_38 = param_3;
  iStack_34 = param_3;
  eventflag_clr_flg((uint32_t *)(param_1 + 0x1540),0x100);
  iVar5 = **(int **)(param_1 + 0x4c);
  (((vtbl_entry*)(iVar5))[10].fn)
            ((int)*(int **)(param_1 + 0x4c) + (int)((vtbl_entry*)(iVar5))[10].adj,&uStack_5c);
  eventflag_wai_flg((uint32_t *)(param_1 + 0x1540),0x100,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  cVar1 = cStack_30;
  if (cStack_30 == '\0') {
    *(uint32_t *)(iVar2 + 0x40) = _cfg_2c.uStack_1c;
    *(uint32_t *)(iVar2 + 0x44) = _cfg_2c.uStack_18;
    *(uint32_t *)(iVar2 + 0x48) = _cfg_2c.uStack_14;
    *(uint32_t *)(iVar2 + 0x4c) = _cfg_2c.uStack_10;
  }
  else {
    *(uint32_t *)(iVar2 + 0x50) = _cfg_2c.uStack_2c;
    *(uint32_t *)(iVar2 + 0x54) = _cfg_2c.uStack_28;
    *(uint32_t *)(iVar2 + 0x58) = _cfg_2c.uStack_24;
    *(uint32_t *)(iVar2 + 0x5c) = _cfg_2c.uStack_20;
    *(uint32_t *)(iVar2 + 0x40) = _cfg_2c.uStack_1c;
    *(uint32_t *)(iVar2 + 0x44) = _cfg_2c.uStack_18;
    *(uint32_t *)(iVar2 + 0x48) = _cfg_2c.uStack_14;
    *(uint32_t *)(iVar2 + 0x4c) = _cfg_2c.uStack_10;
    copy_struct_fields_to_buffer_1052a012((uint32_t)param_1);
    if ((*(int *)(param_1 + 0x84) != 0) &&
       (iVar5 = *(int *)(param_1 + 0x84) + 0x880,
       *(char *)(*(int *)(param_1 + 0x84) + 0x8c0) != '\0')) {
      append_bytes_to_ring_buffer(iVar5,0x1059c748/*ROM*/,0);
      append_newline_to_buffer(iVar5,0);
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_2c),(int)(1),(void *)(0));
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_28),(int)(1),(void *)(0));
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_24),(int)(1),(void *)(0));
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_20),(int)(1),(void *)(0));
      append_newline_to_buffer(iVar5,0);
      append_bytes_to_ring_buffer(iVar5,0x1059c758/*ROM*/,0);
      append_newline_to_buffer(iVar5,0);
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_1c),(int)(1),(void *)(0));
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_18),(int)(1),(void *)(0));
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_14),(int)(1),(void *)(0));
      copy_stream_bytes_into_struct((int)(iVar5),(void *)(_cfg_2c.uStack_10),(int)(1),(void *)(0));
      append_newline_to_buffer(iVar5,0);
      puVar3 = *(ushort **)(iVar2 + 0x30);
      append_bytes_to_ring_buffer(iVar5,0x1059c768/*ROM*/,0);
      append_newline_to_buffer(iVar5,0);
      iVar4 = 0;
      do {
        parse_and_store_buffered_records(iVar5,(void *)(uint)*puVar3,1,0);
        append_newline_to_buffer(iVar5,0);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 0x1580);
      puVar3 = *(ushort **)(iVar2 + 0x34);
      append_bytes_to_ring_buffer(iVar5,0x1059c774/*ROM*/,0);
      append_newline_to_buffer(iVar5,0);
      iVar4 = 0;
      do {
        parse_and_store_buffered_records(iVar5,(void *)(uint)*puVar3,1,0);
        append_newline_to_buffer(iVar5,0);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 0x1580);
      puVar3 = *(ushort **)(iVar2 + 0x38);
      append_bytes_to_ring_buffer(iVar5,0x1059c780/*ROM*/,0);
      append_newline_to_buffer(iVar5,0);
      iVar4 = 0;
      do {
        parse_and_store_buffered_records(iVar5,(void *)(uint)*puVar3,1,0);
        append_newline_to_buffer(iVar5,0);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 0x1580);
      puVar3 = *(ushort **)(iVar2 + 0x3c);
      append_bytes_to_ring_buffer(iVar5,0x1059c78c/*ROM*/,0);
      append_newline_to_buffer(iVar5,0);
      iVar2 = 0;
      do {
        parse_and_store_buffered_records(iVar5,(void *)(uint)*puVar3,1,0);
        append_newline_to_buffer(iVar5,0);
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < 0x1580);
    }
  }
  free_heap_block_if_flagged_1041a992(&_cfg_2c.uStack_2c,2);
  return cVar1;
}
