#pragma once
#include <cstdint>

constexpr uint16_t STANDARD_VECTOR_SIZE = 2048;
struct DataChunk {
    alignas(64) int64_t keys[STANDARD_VECTOR_SIZE];
    alignas(64) int64_t payload[STANDARD_VECTOR_SIZE];
    uint16_t count = 0;
};
struct OutputRow {
    int64_t key;
    int64_t build_payload;
    int64_t probe_payload;
};