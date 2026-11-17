/* @k10d load_file_into_heap_buffer @ 0x10467cec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Opens a file by path, allocates a heap buffer for its size, reads the contents, and
 *   registers the buffer with a callback.
 * summary:
 *   The function calls call_helper_with_temp_object with a file path string to retrieve a
 *   file size. If successful, it allocates a buffer of that size plus one byte using
 *   heap_alloc_2. It then reads the file data into the buffer via a virtual call on an
 *   object at param_1+0x248 and null-terminates the result. Finally, it calls
 *   count_lens_fw_update_chars to register the buffer and invokes
 *   forward_params_to_helper_1046a5be and build_and_send_param_struct_1046a60e to set up
 *   additional parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_file_into_heap_buffer(void *param_1)

{
  bool bVar2;
  byte *pbVar1;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  uint8_t local_28 [8];
  uint32_t uStack_10;
  void *pvStack_c;
  
  puVar6 = (uint32_t *)local_28;
  uStack_10 = 0;
  pvStack_c = (void *)0x0;
  bVar2 = call_helper_with_temp_object((int)param_1,s_C__KBCHG_BIN_1054740a,&pvStack_c);
  if ((bVar2) &&
     (iVar5 = **(int **)((int)param_1 + 0x248),
     iVar5 = (**(code **)(iVar5 + 0x2c))
                       ((int)*(int **)((int)param_1 + 0x248) + (int)*(short *)(iVar5 + 0x28),
                        s_C__KBCHG_BIN_1054740a,1,&uStack_10), iVar5 != 0)) {
    pbVar1 = (byte *)heap_alloc_2((int)pvStack_c + 1);
    iVar5 = **(int **)((int)param_1 + 0x248);
    pvVar4 = pvStack_c;
    iVar5 = (**(code **)(iVar5 + 0x3c))
                      ((int)*(int **)((int)param_1 + 0x248) + (int)*(short *)(iVar5 + 0x38),
                       uStack_10,pbVar1);
    if (iVar5 != 0) {
      pbVar1[(int)pvStack_c] = 0;
      count_lens_fw_update_chars(pbVar1,&DAT_105a8070/*ROM*/,(void *)((int)param_1 + 0x25c),pvVar4);
      uVar3 = _DAT_800042d0/*SDRAM*/ + 1;
      *(uint16_t *)((int)puVar6 + 2) = 4;
      forward_params_to_helper_1046a5be(param_1,2,(uint)uVar3,&DAT_105a8074/*ROM*/,*(uint16_t *)((int)puVar6 + 2));
      pvVar4 = *(void **)((int)param_1 + 0x25c);
      uVar3 = _DAT_800042d0/*SDRAM*/ + 3;
      *puVar6 = &DAT_105a8078/*ROM*/;
      *(uint16_t *)((int)puVar6 + 6) = 4;
      build_and_send_param_struct_1046a60e(param_1,2,(uint)uVar3,pvVar4,(char *)*puVar6,*(uint16_t *)((int)puVar6 + 6));
      uVar3 = _DAT_800042d0/*SDRAM*/ + 6;
      *(uint16_t *)((int)puVar6 + 2) = 4;
      forward_params_to_helper_1046a5be(param_1,2,(uint)uVar3,&DAT_105a8080/*ROM*/,*(uint16_t *)((int)puVar6 + 2));
    }
    iVar5 = **(int **)((int)param_1 + 0x248);
    (**(code **)(iVar5 + 0x34))
              ((int)*(int **)((int)param_1 + 0x248) + (int)*(short *)(iVar5 + 0x30),uStack_10);
    heap_free_2((int)pbVar1);
  }
  return;
}
