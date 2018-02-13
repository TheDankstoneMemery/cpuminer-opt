#include "allium-gate.h"

bool register_allium_algo( algo_gate_t* gate )
{
  gate->scanhash = (void*)&scanhash_allium;
  gate->hash     = (void*)&allium_hash;
  return true;
};
