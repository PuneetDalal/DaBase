#include "pager.h"
#include<iostream>
pager::pager(const std::string& filename) {
    // Open file or initialize cache here
    
  dbfile.open (filename);
  if (dbfile.is_open())
  {
    std::cout << "Operation successfully performed\n";
    flsh_page;
  }
  else
  {
    std::cout << "Error opening file";
  }
}

// 2. Destructor definition (Fixes the "~pager not found" error)
pager::~pager() {
    // Clean up allocated memory in page_cache here
}

// 3. Member function definitions
uint8_t* pager::get_page(uint32_t page_num) {
    return nullptr; // Temporary placeholder
}

void pager::flsh_page(uint32_t page_num) {
    // Flush code
}

uint32_t pager::allocate_page() {
    return 0; // Temporary placeholder
}