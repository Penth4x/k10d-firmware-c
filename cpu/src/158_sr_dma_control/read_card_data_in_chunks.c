/* @k10d read_card_data_in_chunks @ 0x1046eea6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Allocates a 16KB buffer and iteratively reads 16KB chunks from a card device until the
 *   read operation fails or 16 chunks are processed.
 * summary:
 *   The function initializes a local structure and calls a virtual method (slot 5) on an
 *   object retrieved from get_or_create_camera_object, passing param_2. If successful, it
 *   allocates a 0x4000 (16KB) heap buffer. It then enters a loop up to 16 times, calling
 *   dispatch_event_with_timeout_1046f01e with an incrementing offset (starting at 0xc0000)
 *   and writing the result to the buffer via a virtual call (slot 8). After the loop, it
 *   calls a virtual method (slot 6) and frees the buffer. If the initial check or the loop
 *   fails, it sets error codes in a local struct and calls sr_dma_command.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_card_data_in_chunks(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_3c [8];
  int iStack_18;
  uint16_t uStack_14;
  int iStack_10;
  uint32_t uStack_c;
  
  puVar7 = auStack_3c;
  iStack_18 = 0;
  uStack_14 = 0;
  iStack_10 = 0;
  iVar1 = get_or_create_camera_object();
  piVar5 = *(int **)(iVar1 + 0xc);
  uStack_c = 0;
  iVar2 = (((vtbl_entry*)(*piVar5))[5].fn)
                    ((int)((vtbl_entry*)(*piVar5))[5].adj + (int)piVar5,param_2,0,&uStack_c);
  iVar1 = 0;
  if (iVar2 != 0) {
    reset_subobject_at_offset_0x2c_104706a0(param_1);
    iVar4 = 0;
    iVar2 = heap_alloc_2(0x4000);
    iVar3 = 0xc0000;
    uStack_14 = 0x4000;
    iStack_10 = iVar2;
    do {
      iStack_18 = iVar3;
      iVar1 = dispatch_event_with_timeout_1046f01e(param_1,&iStack_18);
      iVar6 = *piVar5;
      if (iVar1 == 0) goto LAB_1046ef52;
      (((vtbl_entry*)(iVar6))[8].fn)((int)((vtbl_entry*)(iVar6))[8].adj + (int)piVar5,uStack_c,iVar2,0x4000)
      ;
      iVar3 = iVar3 + 0x4000;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    iVar6 = *piVar5;
LAB_1046ef52:
    (((vtbl_entry*)(iVar6))[6].fn)((int)((vtbl_entry*)(iVar6))[6].adj + (int)piVar5,uStack_c);
    heap_free_2(iVar2);
    reset_subobject_at_offset_0x2c_104706b2(param_1);
  }
  if (iVar1 == 0) {
    *(uint16_t *)(puVar7 + 2) = 7;
    *(uint16_t *)(puVar7 + 6) = 0xff;
    sr_dma_command(param_1,5,3,(void*)(&DAT_105a95cc/*ROM*/),*(uint16_t *)(puVar7 + 2),*(uint16_t *)(puVar7 + 6)
                  );
  }
  return iVar1;
}
