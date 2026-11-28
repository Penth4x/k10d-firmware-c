/* @k10d app_obj_factory @ 0x104957de
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_object_constructor)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Selects and invokes a type-specific constructor based on a descriptor field to build an
 *   object.
 * summary:
 *   The function iterates through a list to find a matching entry, then uses a large switch
 *   statement on a type identifier (aiStack_60[6]) to call one of many per-type
 *   initialization routines (chain_two_helper_calls_10495b9c through
 *   alloc_and_init_0x14_object). It initializes a local object structure, calls a virtual
 *   method on the resulting object, and returns the pointer to the newly constructed
 *   instance.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1049588a) overlaps instruction at (ram,0x10495888)
    */
/* WARNING: Type propagation algorithm not settling */

void * app_obj_factory(int *desc_base,void *match_key,void *arg_c,void *arg_d)

{
  uint *entry_ptr;
  int entry_offset;
  int entry_count;
  uint32_t ctor_result;
  void *saved_r5;
  uint type_id;
  uint32_t free_flag;
  void *tmp_ptr_a;
  void *tmp_ptr_b;
  void *tmp_ptr_c;
  int *obj_field_ptr;
  int copy_offset;
  uintptr_t sp_unused;
  int *local_base;
  uint64_t sub_ret;
  void *constructed_obj;
  uint8_t local_buf [8];
  int obj_fields [7];
  byte *field_44;
  int field_40;
  ushort field_3c;
  ushort field_3a;
  uint8_t scratch_buf [8];
  uint32_t pair_buf [2];
  uint32_t pair_lo;
  uint32_t copy_dst [5];
  int desc_word2;
  int desc_word1;

  local_base = (int *)local_buf;
  desc_word2 = desc_base[2];
  obj_fields[0] = desc_word2;
  desc_word1 = desc_base[1];
  tmp_ptr_c = match_key;
  tmp_ptr_b = arg_c;
  tmp_ptr_a = arg_d;
  entry_ptr = (uint *)0x0;
  if (desc_word2 != desc_word1) {
    local_base = (int *)local_buf;
    do {
      sub_ret = subtract_four_from_pointer(obj_fields);
      tmp_ptr_c = (void *)sub_ret;
      entry_ptr = (uint *)*(int *)((ulonglong)sub_ret >> 0x20);
      if ((*entry_ptr & 0xffff0000) == ((uint)match_key & 0xffff0000)) break;
      tmp_ptr_b = (void *)0x0;
      swap_first_word_and_call(scratch_buf,obj_fields);
      desc_word1 = desc_base[1];
      tmp_ptr_c = saved_r5;
      entry_ptr = (uint *)0x0;
    } while (obj_fields[0] != desc_word1);
  }
  entry_count = 0;
  if (*entry_ptr != 0) {
    entry_offset = 0;
    do {
      if (match_key == *(void **)((int)entry_ptr + entry_offset)) break;
      entry_offset = entry_offset + 0x14;
      entry_count = entry_count + 1;
    } while (*(int *)((int)entry_ptr + entry_offset) != 0);
  }
  if (entry_ptr[entry_count * 5] == 0) {
    console_printf(&DAT_105b511c/*ROM*/,tmp_ptr_c,tmp_ptr_b,tmp_ptr_a);
  }
  obj_field_ptr = obj_fields + 1;
  *local_base = 0;
  type_id = 0;
  tmp_ptr_c = (void *)0x0;
  tmp_ptr_b = (void *)0x0;
  allocate_and_init_object_1045bd94(obj_field_ptr,0,0,0,*local_base);
  constructed_obj = (void *)0;
  entry_offset = 0x14;
  do {
    copy_offset = entry_offset + -4;
    *(uint32_t *)((int)obj_fields + entry_offset + 0x10) =
         *(uint32_t *)(copy_offset + (int)(entry_ptr + entry_count * 5));
    entry_offset = copy_offset;
  } while (copy_offset != 0);
  switch(obj_fields[6]) {
  case 1:
    type_id = (uint)field_44 & 0xffff;
    ctor_result = chain_two_helper_calls_10495bd8(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 2:
    type_id = (uint)field_44 & 0xffff;
    ctor_result = chain_two_helper_calls_10495bc4(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 3:
    *(ushort *)((int)local_base + 2) = field_3c;
    *(ushort *)((int)local_base + 6) = field_3a;
    type_id = (uint)field_44 & 0xffff;
    ctor_result = chain_two_helper_calls_10495c06(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 4:
    *(ushort *)((int)local_base + 2) = field_3c;
    *(ushort *)((int)local_base + 6) = field_3a;
    type_id = (uint)field_44 & 0xffff;
    ctor_result = chain_two_helper_calls_10495c2e(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 5:
    tmp_ptr_c = (void *)(uint)field_3c;
    *(ushort *)((int)local_base + 2) = field_3a;
    entry_count = allocate_and_initialize_object(desc_base,arg_c,arg_d,tmp_ptr_c,*(ushort *)((int)local_base + 2));
    constructed_obj = (void *)entry_count;
    arg_c = arg_d;
    arg_d = tmp_ptr_c;
    break;
  case 6:
    ctor_result = chain_two_helper_calls_10495bb0(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 7:
    ctor_result = chain_two_helper_calls_10495b9c(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 8:
    *(ushort *)((int)local_base + 2) = field_3c;
    *(ushort *)((int)local_base + 6) = field_3a;
    type_id = (uint)field_44 & 0xffff;
    ctor_result = chain_two_helper_calls_10495d1a(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 9:
    *(uint8_t *)((int)local_base + 3) = 5;
    *(uint8_t *)((int)local_base + 7) = 1;
    ctor_result = chain_two_helper_calls_10495cf2(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 10:
    ctor_result = chain_two_helper_calls_10495d48(desc_base);
    constructed_obj = (void *)ctor_result;
    arg_c = arg_d;
    arg_d = tmp_ptr_b;
    break;
  case 0xb:
    *(short *)((int)local_base + 2) = (short)arg_d;
    tmp_ptr_c = (void *)0x7;
    arg_d = arg_c;
    ctor_result = chain_two_helper_calls_10495d62(desc_base);
    constructed_obj = (void *)ctor_result;
    arg_c = tmp_ptr_c;
    break;
  case 0xc:
    *(short *)((int)local_base + 2) = (short)arg_d;
    tmp_ptr_c = (void *)0x7;
    arg_d = arg_c;
    ctor_result = chain_two_helper_calls_10495d8a(desc_base);
    constructed_obj = (void *)ctor_result;
    arg_c = tmp_ptr_c;
    break;
  case 0xd:
    ctor_result = chain_two_helper_calls_10495bec(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 0xe:
    tmp_ptr_c = (void *)alloc_two_word_pair_1045bc2e((uint32_t *)(pair_buf),(uint32_t)(arg_c),(uint32_t)(arg_d));
    copy_eight_bytes_1045bf68(obj_field_ptr,tmp_ptr_c);
    free_heap_block_if_flagged_1045bc54(pair_buf,2);
    arg_c = (void *)(uint)field_3a;
    tmp_ptr_c = (void *)alloc_two_word_pair_1045c3dc((uint32_t *)(&pair_lo),(uint32_t)((uint)field_3c),(uint32_t)(arg_c));
    copy_and_dispatch_two_params(obj_field_ptr,tmp_ptr_c);
    free_heap_if_flagged_1045c402(&pair_lo,2);
    entry_count = 0x10;
    do {
      entry_offset = entry_count + -4;
      *(uint32_t *)((int)copy_dst + entry_count) = *(uint32_t *)((int)obj_fields + entry_count);
      entry_count = entry_offset;
    } while (entry_offset != 0);
    ctor_result = copy_and_dispatch_buffer(desc_base,copy_dst + 1);
    free_flag = 2;
    destroy_text_widget(copy_dst + 1,2);
    constructed_obj = (void *)ctor_result;
    arg_d = tmp_ptr_b;
    break;
  case 0xf:
    entry_count = create_object_with_init_call_10495f06(desc_base,(int)field_44,arg_c,arg_d);
    constructed_obj = (void *)entry_count;
    break;
  case 0x10:
    type_id = (uint)field_44 & 0xffff;
    entry_count = create_object_with_heap_alloc(desc_base,type_id,arg_c,arg_d);
    constructed_obj = (void *)entry_count;
    break;
  case 0x11:
    constructed_obj = (void *)(alloc_and_construct_object((uint32_t)(desc_base)));
    arg_c = tmp_ptr_c;
    arg_d = tmp_ptr_b;
    break;
  case 0x12:
    entry_count = draw_string_at(desc_base,field_44,arg_c,arg_d);
    constructed_obj = (void *)entry_count;
    break;
  case 0x13:
    constructed_obj = (void *)(allocate_and_construct_object((uint32_t)(desc_base)));
    arg_c = tmp_ptr_c;
    arg_d = tmp_ptr_b;
    break;
  case 0x14:
    constructed_obj = (void *)(alloc_and_init_object_1049609e((uint32_t)(desc_base)));
    arg_c = tmp_ptr_c;
    arg_d = tmp_ptr_b;
    break;
  case 0x15:
    constructed_obj = (void *)(alloc_and_init_0x14_object((uint32_t)(desc_base)));
    arg_c = tmp_ptr_c;
    arg_d = tmp_ptr_b;
    break;
  case 0x16:
    ctor_result = chain_two_helper_calls_10495db2(desc_base);
    constructed_obj = (void *)ctor_result;
    break;
  case 0x17:
    type_id = (uint)field_44 & 0xffff;
    entry_count = allocate_and_init_object_1049600e(desc_base,type_id,arg_c,arg_d);
    constructed_obj = (void *)entry_count;
    break;
  default:
    arg_c = tmp_ptr_c;
    arg_d = tmp_ptr_b;
  }
  tmp_ptr_c = constructed_obj;
  if (tmp_ptr_c == 0) {
    console_printf(&DAT_105b5158/*ROM*/,constructed_obj,arg_c,arg_d);
  }
  write_field_at_offset_four_10493da0(tmp_ptr_c,obj_fields[5]);
  if ((field_40 == 2) || (obj_fields[6] == 5)) {
    (((vtbl_entry*)(*(int *)((int)tmp_ptr_c + 0xc)))[27].fn)
              ((int)((vtbl_entry*)(*(int *)((int)tmp_ptr_c + 0xc)))[27].adj + (int)tmp_ptr_c,
               *(uint32_t *)(*desc_base + 4));
  }
  else {
    (((vtbl_entry*)(*(int *)((int)tmp_ptr_c + 0xc)))[27].fn)
              ((int)((vtbl_entry*)(*(int *)((int)tmp_ptr_c + 0xc)))[27].adj + (int)tmp_ptr_c,
               *(uint32_t *)*desc_base);
  }
  destroy_text_widget(obj_field_ptr,2);
  return tmp_ptr_c;
}
