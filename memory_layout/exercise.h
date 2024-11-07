#include <stdint.h>

typedef union PacketHeader{
  struct {
    uint16_t src_port;  // First 2 bytes
    uint16_t dest_port; // Next 2 bytes
    uint32_t seq_num;   // Last 4 bytes
  } tcp_header;

  uint8_t raw[8];
} packet_header_t;