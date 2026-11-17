/* @k10d initialize_settings_block @ 0x1051da0c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a settings data structure by writing default values to its fields via
 *   helper functions.
 * summary:
 *   The function takes a pointer to a settings block (param_1) and initializes its
 *   contents. It calls copy_words_to_struct_offset_10428576 nine times to set specific
 *   fields (offsets 0xc through 0x4c) to values 0, 1, or 2, likely representing modes or
 *   states. It then calls copy_bytes_to_struct_offset_10428b80 three times to initialize
 *   larger blocks at offsets 0x54, 0xd4, and 0x154, each with a size of 0x80 bytes. The
 *   caller is power_off_save_settings, suggesting this prepares the settings structure
 *   before saving or during a reset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_settings_block(int param_1)

{
  int iVar1;
  uintptr_t sp;
  int *piVar2;
  
  piVar2 = (int *)&stack0xffffffec;
  copy_words_to_struct_offset_10428576(*(int *)(param_1 + 8),0,param_1 + 0xc,4,0);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 0;
  copy_words_to_struct_offset_10428576(iVar1,1,param_1 + 0x14,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 0;
  copy_words_to_struct_offset_10428576(iVar1,2,param_1 + 0x1c,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 1;
  copy_words_to_struct_offset_10428576(iVar1,0,param_1 + 0x24,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 1;
  copy_words_to_struct_offset_10428576(iVar1,1,param_1 + 0x2c,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 1;
  copy_words_to_struct_offset_10428576(iVar1,2,param_1 + 0x34,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 2;
  copy_words_to_struct_offset_10428576(iVar1,0,param_1 + 0x3c,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 2;
  copy_words_to_struct_offset_10428576(iVar1,1,param_1 + 0x44,4,*piVar2);
  iVar1 = *(int *)(param_1 + 8);
  *piVar2 = 2;
  copy_words_to_struct_offset_10428576(iVar1,2,param_1 + 0x4c,4,*piVar2);
  copy_bytes_to_struct_offset_10428b80(*(int *)(param_1 + 8),(void *)(param_1 + 0x54),0x80,0);
  copy_bytes_to_struct_offset_10428b80(*(int *)(param_1 + 8),(void *)(param_1 + 0xd4),0x80,1);
  copy_bytes_to_struct_offset_10428b80(*(int *)(param_1 + 8),(void *)(param_1 + 0x154),0x80,2);
  return;
}
