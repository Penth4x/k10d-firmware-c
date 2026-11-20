/* @k10d write_data_to_cf_card @ 0x1046efa8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Writes a buffer to a file on the CompactFlash card via a virtual file interface.
 * summary:
 *   Retrieves a file object pointer from get_or_create_camera_object and invokes virtual
 *   slot 5 (offset 0x2c) to write param_2 bytes. If successful, it calls virtual slot 8
 *   (offset 0x44) with base 0x10000000 and size 0x800000, likely for flushing or
 *   committing, and then calls virtual slot 6 (offset 0x34) to close or finalize the file
 *   handle. The caller service_op_dispatch suggests this is part of a card-based service
 *   operation, such as storing EEPROM or ROM data to a file.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_data_to_cf_card(uint32_t param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  iVar1 = get_or_create_camera_object();
  piVar2 = *(int **)(iVar1 + 0xc);
  uStack_c = 0;
  iVar1 = (((vtbl_entry*)(*piVar2))[5].fn)
                    ((int)((vtbl_entry*)(*piVar2))[5].adj + (int)piVar2,param_2,0,&uStack_c);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*piVar2))[8].fn)
              ((int)((vtbl_entry*)(*piVar2))[8].adj + (int)piVar2,uStack_c,0x10000000/*ROM*/,0x800000);
    (((vtbl_entry*)(*piVar2))[6].fn)((int)((vtbl_entry*)(*piVar2))[6].adj + (int)piVar2,uStack_c);
  }
  return iVar1;
}
