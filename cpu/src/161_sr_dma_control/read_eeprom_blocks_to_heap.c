/* @k10d read_eeprom_blocks_to_heap @ 0x10470228
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Allocates a 72KB heap buffer and reads two EEPROM blocks (IDs 3 and 0x85) into it via a
 *   vtable interface.
 * summary:
 *   The function retrieves a global object pointer, constructs a temporary object, and
 *   checks a status field (0x12000). If valid, it allocates 0x12000 bytes on the heap. It
 *   then calls a virtual method (slot 5) to prepare a handle, and uses
 *   copy_buffer_with_clamped_length to read data from EEPROM block 3 (0x1000 bytes) and
 *   block 0x85 (0x8000 bytes) into the allocated buffer. Finally, it calls heap_free_2
 *   (likely free) on the buffer and returns the success status of the second read.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool read_eeprom_blocks_to_heap(uint32_t param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  int iVar4;
  int *piVar5;
  uintptr_t sp;
  bool bVar6;
  uint8_t auStack_2c [16];
  int iStack_1c;
  uint32_t uStack_c;
  
  iVar1 = get_or_create_camera_object();
  piVar5 = *(int **)(iVar1 + 0xc);
  cls_105ab468_new(auStack_2c);
  iVar1 = call_with_offset_lock_1048101c(piVar5,param_2,auStack_2c);
  bVar6 = false;
  if ((iVar1 != 0) && (bVar6 = false, iStack_1c == 0x12000)) {
    uStack_c = 0;
    iVar1 = (**(code **)(*piVar5 + 0x2c))
                      ((int)*(short *)(*piVar5 + 0x28) + (int)piVar5,param_2,1,&uStack_c);
    bVar6 = false;
    if (iVar1 != 0) {
      iVar1 = heap_alloc_2(0x12000);
      (**(code **)(*piVar5 + 0x3c))
                ((int)*(short *)(*piVar5 + 0x38) + (int)piVar5,uStack_c,iVar1,0x12000);
      (**(code **)(*piVar5 + 0x34))((int)*(short *)(*piVar5 + 0x30) + (int)piVar5,uStack_c);
      pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
      uVar3 = read_table_entry_field(pvVar2,0xa7);
      copy_buffer_with_clamped_length(uVar3,3,iVar1,0x1000);
      iVar4 = copy_buffer_with_clamped_length(uVar3,0x85,iVar1 + 0x2000,0x8000);
      bVar6 = iVar4 == 0;
      heap_free_2(iVar1);
    }
  }
  cls_105ab468_delete(auStack_2c,2);
  return bVar6;
}
