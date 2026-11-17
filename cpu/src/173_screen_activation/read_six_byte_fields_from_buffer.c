/* @k10d read_six_byte_fields_from_buffer @ 0x10480158
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_six_byte_fields_from_buffer(uint *param_1)

{
  byte bVar2;
  int iVar1;
  uintptr_t sp;
  uint16_t auStack_10 [4];
  
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
  collect_and_forward_object_state(uRam80010034,auStack_10);
  bVar2 = read_byte_at_offset_seven(auStack_10);
  *param_1 = (uint)bVar2;
  bVar2 = read_byte_at_offset_six(auStack_10);
  param_1[1] = (uint)bVar2;
  bVar2 = read_byte_at_offset_5(auStack_10);
  param_1[2] = (uint)bVar2;
  bVar2 = read_byte_at_offset_three(auStack_10);
  param_1[3] = (uint)bVar2;
  bVar2 = read_byte_at_offset_two(auStack_10);
  param_1[4] = bVar2 - 1;
  iVar1 = read_first_word_1045c66c(auStack_10);
  param_1[5] = iVar1 - 0x76c;
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
