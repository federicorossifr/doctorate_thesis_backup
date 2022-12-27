// A Posit8,2 with a 32-bit backend integer for software emulation
using P8 = posit::Posit<int8_t, 8 , 2, uint_fast32_t, posit::PositSpec::WithNan>;

// A Posit16,2 with a 32-bit backend integer for software emulation
using P16 = posit::Posit<int16_t, 16 , 2, uint_fast32_t, posit::PositSpec::WithNan>;

// A Posit16,2 with a floating point binary32 backend
using P16 = posit::Posit<int16_t, 16 , 2, float, posit::PositSpec::WithNan>;

// A Posit8,0 with a 16 bit fixed point backend (quire-enabled)
using P8fx = posit::Posit<int8_t, 8 , 0, posit::BackendFixed<fixedtrait<int128_t,128>,int128_t>, posit::PositSpec::WithNan>;

