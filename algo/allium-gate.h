#ifndef ALLIUM_GATE_H__
#define ALLIUM_GATE_H__ 1

#include "algo-gate-api.h"
#include <stdint.h>

bool register_allium_algo( algo_gate_t* gate );

void allium_hash(void *state, const void *input);

int scanhash_allium(int thr_id, struct work *work, uint32_t max_nonce, uint64_t *hashes_done);

#endif
