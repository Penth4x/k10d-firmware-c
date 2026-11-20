/* @k10d invoke_virtual_method_with_zero @ 0x10435436
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Obtains an object, allocates a 0xb8-byte block, and calls a virtual method on it with
 *   argument 0.
 * summary:
 *   Calls get_or_init_sram_buffer_104277bc to get a base pointer, then passes it and size
 *   0xb8 to read_table_entry_field to obtain a derived object pointer. It then performs a
 *   virtual function call on that object, using the vtable offset 0x7c and a this-
 *   adjustment from offset 0x78, passing 0 as the sole argument. The specific subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_with_zero(uint32_t param_x0)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  iVar2 = read_table_entry_field(pvVar1,0xb8);
  (((vtbl_entry*)(*(int *)(iVar2 + 4)))[15].fn)(iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 4)))[15].adj,0);
  return;
}
