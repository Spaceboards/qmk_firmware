#pragma once
#include "quantum.h"

#define LAYOUT( \
  k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012,       k014, k015,\
  k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115,\
  k200,       k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213,       k215,\
        k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311,       k313, k314, k315,\
  k400, k401,       k403,             k406,                   k410, k411,       k413, k414, k415\
) \
{ \
  { k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k015 }, \
  { k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115 }, \
  { k200,       k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213,       k215 }, \
  {       k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311,       k313, k314, k315 }, \
  { k400, k401,       k403,             k406,                   k410, k411,       k413, k414, k415 } \
}
