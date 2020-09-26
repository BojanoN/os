#pragma once

typedef struct page {
    uint32_t present : 1; // Page present in memory
    uint32_t rw : 1; // Read-only if clear, readwrite if set
    uint32_t user : 1; // Supervisor level only if clear
    uint32_t accessed : 1; // Has the page been accessed since last refresh?
    uint32_t dirty : 1; // Has the page been written to since last refresh?
    uint32_t unused : 7; // Amalgamation of unused and reserved bits
    uint32_t frame : 20; // Frame address (shifted right 12 bits)
} page_t;
