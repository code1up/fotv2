#include "pebble_process_info.h"
#include "src/resource_ids.auto.h"

const PebbleProcessInfo __pbl_app_info __attribute__ ((section (".pbl_header"))) = {
  .header = "PBLAPP",
  .struct_version = { PROCESS_INFO_CURRENT_STRUCT_VERSION_MAJOR, PROCESS_INFO_CURRENT_STRUCT_VERSION_MINOR },
  .sdk_version = { PROCESS_INFO_CURRENT_SDK_VERSION_MAJOR, PROCESS_INFO_CURRENT_SDK_VERSION_MINOR },
  .process_version = { 1, 0 },
  .load_size = 0xb6b6,
  .offset = 0xb6b6b6b6,
  .crc = 0xb6b6b6b6,
  .name = "FOTV",
  .company = "alanjgorton@googlemail.com",
  .icon_resource_id = DEFAULT_MENU_ICON,
  .sym_table_addr = 0xA7A7A7A7,
  .flags = PROCESS_INFO_VISIBILITY_HIDDEN,
  .num_reloc_entries = 0xdeadcafe,
  .uuid = { 0x0A, 0x63, 0xB7, 0x48, 0xB1, 0xF3, 0x46, 0x3F, 0x9B, 0x47, 0x06, 0x7E, 0x84, 0x03, 0xFE, 0x68 },
  .virtual_size = 0xb6b6
};
