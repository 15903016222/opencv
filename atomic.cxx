int atomicIncrement(int volatile * addend, int delta)
{ return __sync_fetch_and_add((unsigned *)addend, (unsigned)delta); }
