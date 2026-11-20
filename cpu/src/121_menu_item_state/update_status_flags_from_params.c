/* @k10d update_status_flags_from_params @ 0x1043465a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 121_menu_item_state (unit names are model-proposed)
 * purpose:
 *   Maps input parameters to status codes and writes them to a state object via a setter
 *   function.
 * summary:
 *   The function reads values from param_2 using helper functions at 0x10435546 and
 *   0x10435554, mapping them to specific indices (0-4) and boolean flags. It then calls
 *   write_object_field_byte multiple times with the pointer at param_1+0x1c to set various
 *   status fields (indices 0, 1, 3, 4, 5, 0xe, 0x14). It also queries param_1 via
 *   read_byte_at_offset_0x14, read_byte_at_offset_0x15, and read_byte_at_offset_0x16 to set
 *   boolean status bits. Finally, if param_3 is non-zero, it calls resubmit_cpucom_context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_from_params(int param_1,void *param_2,int param_3)

{
  uint8_t uVar1;
  uint8_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  
  uVar2 = 0;
  iVar3 = (*(code *)0x10435546/*ROM*/)(param_2);
  uVar1 = 1;
  if (iVar3 == 0) {
    iVar3 = 4;
    uVar2 = 1;
  }
  else if (iVar3 == 1) {
    iVar3 = 3;
  }
  else if (iVar3 == 2) {
    iVar3 = 2;
    uVar1 = 0;
  }
  else if (iVar3 == 3) {
    iVar3 = 1;
  }
  else if (iVar3 == 4) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  write_object_field_byte((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(0),(uint)(iVar3));
  iVar4 = (*(code *)0x10435546/*ROM*/)((int)param_2 + 0x14);
  if (iVar4 == 0) {
    iVar4 = (*(code *)0x10435554/*ROM*/)((int)param_2 + 0x14);
    iVar5 = 2;
    if (iVar4 == 0) {
      iVar5 = 1;
    }
    if ((iVar5 == 2) && (iVar3 == 1)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (iVar4 == 1) {
    iVar5 = 4;
  }
  else if (iVar4 == 2) {
    iVar5 = 3;
  }
  else {
    iVar5 = 0;
  }
  write_object_field_byte((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(1),(uint)(iVar5));
  uVar6 = *(uint32_t *)(param_1 + 0x1c);
  iVar3 = (*(code *)0x10433ce8/*ROM*/)(param_1);
  write_object_field_byte((int *)(uVar6),(int)(3),(uint)(iVar3 != 0));
  uVar6 = *(uint32_t *)(param_1 + 0x1c);
  iVar3 = read_byte_at_offset_0x15(param_1);
  write_object_field_byte((int *)(uVar6),(int)(4),(uint)(iVar3 != 0));
  uVar6 = *(uint32_t *)(param_1 + 0x1c);
  iVar3 = read_byte_at_offset_0x16(param_1);
  write_object_field_byte((int *)(uVar6),(int)(5),(uint)(iVar3 != 0));
  write_object_field_byte((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(0xe),(uint)(uVar1));
  write_object_field_byte((int *)(*(uint32_t *)(param_1 + 0x1c)),(int)(0x14),(uint)(uVar2));
  if (param_3 != 0) {
    resubmit_cpucom_context(param_1);
  }
  return;
}
