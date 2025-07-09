// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Returns the number of set bits in the value.
KETTLE_VALUE u32 u8_count_ones(u8 self) {
    return (u32)__builtin_popcount(self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 u8_count_zeros(u8 self) {
    return u8_count_ones(~self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 u16_count_ones(u16 self) {
    return (u32)__builtin_popcount(self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 u16_count_zeros(u16 self) {
    return u16_count_ones(~self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 u32_count_ones(u32 self) {
    return (u32)__builtin_popcount(self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 u32_count_zeros(u32 self) {
    return u32_count_ones(~self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 u64_count_ones(u64 self) {
    return (u32)__builtin_popcountl(self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 u64_count_zeros(u64 self) {
    return u64_count_ones(~self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 usize_count_ones(usize self) {
    return (u32)__builtin_popcountl(self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 usize_count_zeros(usize self) {
    return usize_count_ones(~self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 i8_count_ones(i8 self) {
    return u8_count_ones((u8)self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 i8_count_zeros(i8 self) {
    return u8_count_zeros((u8)self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 i16_count_ones(i16 self) {
    return u16_count_ones((u16)self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 i16_count_zeros(i16 self) {
    return u16_count_zeros((u16)self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 i32_count_ones(i32 self) {
    return u32_count_ones((u32)self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 i32_count_zeros(i32 self) {
    return u32_count_zeros((u32)self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 i64_count_ones(i64 self) {
    return u64_count_ones((u64)self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 i64_count_zeros(i64 self) {
    return u64_count_zeros((u64)self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 isize_count_ones(isize self) {
    return usize_count_ones((usize)self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 isize_count_zeros(isize self) {
    return usize_count_zeros((usize)self);
}

#ifdef KETTLE_HAS_INT128

// Returns the number of set bits in the value.
KETTLE_VALUE u32 u128_count_ones(u128 self) {
    return u64_count_ones((u64)self) + u64_count_ones((u64)(self >> 64));
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 u128_count_zeros(u128 self) {
    return u128_count_ones(~self);
}

// Returns the number of set bits in the value.
KETTLE_VALUE u32 i128_count_ones(i128 self) {
    return u128_count_ones((u128)self);
}

// Returns the number of clear bits in the value.
KETTLE_VALUE u32 i128_count_zeros(i128 self) {
    return u128_count_zeros((u128)self);
}

#endif
