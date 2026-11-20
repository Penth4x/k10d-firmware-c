/* @k10d eeprom_adj_dump_0xa7 @ 0x10470158
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dump_eeprom_adj_data)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x12000 buffer, writes two segments to it via
 *   copy_buffer_with_length_check, and invokes a vtable sequence to process the data.
 * summary:
 *   The function allocates a 0x12000 byte buffer using heap_alloc_2. It calls
 *   copy_buffer_with_length_check twice with offsets 0 and 0x2000, likely writing data from
 *   a source identified by read_table_entry_field(pvVar1, 0xa7). It then retrieves an
 *   object via get_or_create_camera_object and calls three virtual methods (slots 5, 8, and
 *   6) on it, passing the buffer and size. Finally, it frees the buffer via heap_free_2.
 *   The caller context suggests this is a service operation for dumping adjustment data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t eeprom_adj_dump_0xa7(uint32_t param_1,void *param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint32_t uStack_c;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xa7);
  uVar6 = 0;
  iVar3 = heap_alloc_2(0x12000);
  iVar4 = copy_buffer_with_length_check(uVar2,3,iVar3,0x1000);
  if ((iVar4 == 0) && (iVar4 = copy_buffer_with_length_check(uVar2,0x85,iVar3 + 0x2000,0x8000), iVar4 == 0)) {
    iVar4 = get_or_create_camera_object();
    piVar5 = *(int **)(iVar4 + 0xc);
    uStack_c = 0;
    iVar4 = (((vtbl_entry*)(*piVar5))[5].fn)
                      ((int)((vtbl_entry*)(*piVar5))[5].adj + (int)piVar5,param_2,0,&uStack_c);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = (((vtbl_entry*)(*piVar5))[8].fn)
                        ((int)((vtbl_entry*)(*piVar5))[8].adj + (int)piVar5,uStack_c,iVar3,0x12000);
      (((vtbl_entry*)(*piVar5))[6].fn)((int)((vtbl_entry*)(*piVar5))[6].adj + (int)piVar5,uStack_c);
    }
  }
  heap_free_2(iVar3);
  return uVar6;
}
