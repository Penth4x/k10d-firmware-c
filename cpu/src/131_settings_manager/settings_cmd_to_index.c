/* @k10d settings_cmd_to_index @ 0x1045e83a
 * name: verified (structural evidence: d313: decompile loop over 0x105a5e06; slot 0x84 of cls_105a6a14, called from copy_payload_and_notify)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Map a companion-CPU status letter to its index (table 0x105a5e06, 25 entries; 0x19 =
 *   unknown) and run the per-index handler.
 * summary:
 *   VERIFIED: d313: decompile loop over 0x105a5e06; slot 0x84 of cls_105a6a14, called from
 *   copy_payload_and_notify
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char settings_cmd_to_index(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  char cVar4;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar4 = cVar1;
    if (param_2 == *(char *)(iVar2 + 0x105a5e06/*ROM*/)) break;
    iVar2 = iVar2 + 2;
    cVar1 = cVar1 + '\x01';
    cVar4 = '\x19';
  } while (iVar2 < 0x32);
  switch(cVar4) {
  case '\0':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_settings_handler_1045ebc2(param_1,uVar3);
    break;
  case '\x01':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ec00(param_1,uVar3);
    break;
  case '\x02':
    uVar3 = get_context_field_at_offset_8(param_1);
    invoke_virtual_method_on_object_1045ec3e(param_1,uVar3);
    break;
  case '\x03':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ec7c(param_1,uVar3);
    break;
  case '\x04':
    uVar3 = get_context_field_at_offset_8(param_1);
    invoke_virtual_method_on_object_1045ecba(param_1,uVar3);
    break;
  case '\x05':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ecf8(param_1,uVar3);
    break;
  case '\x06':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ed36(param_1,uVar3);
    break;
  case '\a':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_object_1045ed74(param_1,uVar3);
    break;
  case '\b':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_settings_handler_1045edb2(param_1,uVar3,0);
    break;
  case '\t':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_settings_handler_1045edb2(param_1,uVar3,1);
    break;
  case '\n':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ee00(param_1,uVar3);
    break;
  case '\v':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ee3e(param_1,uVar3);
    break;
  case '\f':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ee7c(param_1,uVar3);
    break;
  case '\r':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045eeba(param_1,uVar3);
    break;
  case '\x0e':
    uVar3 = get_context_field_at_offset_8(param_1);
    invoke_virtual_method_on_subobject_1045eef8(param_1,uVar3);
    break;
  case '\x0f':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045ef36(param_1,uVar3);
    break;
  case '\x10':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_settings_handler_1045ef74(param_1,uVar3,0);
    break;
  case '\x11':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_settings_handler_1045ef74(param_1,uVar3,1);
    break;
  case '\x12':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_object_1045efc2(param_1,uVar3);
    break;
  case '\x13':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_settings_handler_1045f000(param_1,uVar3);
    break;
  case '\x14':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_object_1045f03e(param_1,uVar3);
    break;
  case '\x15':
    uVar3 = get_context_field_at_offset_8(param_1);
    invoke_virtual_method_on_subobject_1045f07c(param_1,uVar3);
    break;
  case '\x16':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_subobject_1045f0ba(param_1,uVar3);
    break;
  case '\x17':
    uVar3 = get_context_field_at_offset_8(param_1);
    dispatch_virtual_method_on_object_1045f0f8(param_1,uVar3);
    break;
  case '\x18':
    uVar3 = get_context_field_at_offset_8(param_1);
    invoke_virtual_method_on_object_1045f136(param_1,uVar3);
    break;
  default:
  }
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x2);
  return cVar4;
}
