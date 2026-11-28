/* @k10d copy_structured_field_array @ 0x1042873e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_field_array(void *param_1,int param_2,void *param_3,int param_4,int param_5)

{
  int dst_off;
  int src_off;
  int remaining;

  if (param_5 == 0) {
    if (0 < param_4) {
      src_off = param_2 << 3;
      remaining = param_4 + -3;
      dst_off = 0;
      if (2 < remaining) {
        do {
          *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x50);
          *(uint16_t *)((int)param_3 + dst_off + 2) = *(uint16_t *)((int)param_1 + src_off + 0x52);
          *(uint16_t *)((int)param_3 + dst_off + 4) = *(uint16_t *)((int)param_1 + src_off + 0x54);
          dst_off = dst_off + 6;
          remaining = remaining + -3;
          src_off = src_off + 6;
        } while (-1 < remaining);
      }
      for (remaining = remaining + 2; -1 < remaining; remaining = remaining + -1) {
        *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x50);
        dst_off = dst_off + 2;
        src_off = src_off + 2;
      }
    }
  }
  else if (param_5 == 1) {
    if (0 < param_4) {
      src_off = param_2 << 3;
      remaining = param_4 + -3;
      dst_off = 0;
      if (2 < remaining) {
        do {
          *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x68);
          *(uint16_t *)((int)param_3 + dst_off + 2) = *(uint16_t *)((int)param_1 + src_off + 0x6a);
          *(uint16_t *)((int)param_3 + dst_off + 4) = *(uint16_t *)((int)param_1 + src_off + 0x6c);
          dst_off = dst_off + 6;
          remaining = remaining + -3;
          src_off = src_off + 6;
        } while (-1 < remaining);
      }
      for (remaining = remaining + 2; -1 < remaining; remaining = remaining + -1) {
        *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x68);
        dst_off = dst_off + 2;
        src_off = src_off + 2;
      }
    }
  }
  else if (param_5 == 2) {
    if (0 < param_4) {
      src_off = param_2 << 3;
      remaining = param_4 + -3;
      dst_off = 0;
      if (2 < remaining) {
        do {
          *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x80);
          *(uint16_t *)((int)param_3 + dst_off + 2) = *(uint16_t *)((int)param_1 + src_off + 0x82);
          *(uint16_t *)((int)param_3 + dst_off + 4) = *(uint16_t *)((int)param_1 + src_off + 0x84);
          dst_off = dst_off + 6;
          remaining = remaining + -3;
          src_off = src_off + 6;
        } while (-1 < remaining);
      }
      for (remaining = remaining + 2; -1 < remaining; remaining = remaining + -1) {
        *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x80);
        dst_off = dst_off + 2;
        src_off = src_off + 2;
      }
    }
  }
  else if (0 < param_4) {
    src_off = param_2 << 3;
    remaining = param_4 + -3;
    dst_off = 0;
    if (2 < remaining) {
      do {
        *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x38);
        *(uint16_t *)((int)param_3 + dst_off + 2) = *(uint16_t *)((int)param_1 + src_off + 0x3a);
        *(uint16_t *)((int)param_3 + dst_off + 4) = *(uint16_t *)((int)param_1 + src_off + 0x3c);
        dst_off = dst_off + 6;
        remaining = remaining + -3;
        src_off = src_off + 6;
      } while (-1 < remaining);
    }
    for (remaining = remaining + 2; -1 < remaining; remaining = remaining + -1) {
      *(uint16_t *)((int)param_3 + dst_off) = *(uint16_t *)((int)param_1 + src_off + 0x38);
      dst_off = dst_off + 2;
      src_off = src_off + 2;
    }
  }
  return;
}
