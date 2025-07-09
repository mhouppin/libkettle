// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Return the number of trailing clear bits in the value.
KETTLE_VALUE u32 u8_trailing_zeros(u8 self) {
    return !self ? U8_BITS : (u32)__builtin_ctz(self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 u8_leading_zeros(u8 self) {
    return !self ? U8_BITS : (u32)__builtin_clz(self) - (U32_BITS - U8_BITS);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 u8_trailing_ones(u8 self) {
    return u8_trailing_zeros(~self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 u8_leading_ones(u8 self) {
    return u8_leading_zeros(~self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 u16_trailing_zeros(u16 self) {
    return !self ? U16_BITS : (u32)__builtin_ctz(self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 u16_leading_zeros(u16 self) {
    return !self ? U16_BITS : (u32)__builtin_clz(self) - (U32_BITS - U16_BITS);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 u16_trailing_ones(u16 self) {
    return u16_trailing_zeros(~self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 u16_leading_ones(u16 self) {
    return u16_leading_zeros(~self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 u32_trailing_zeros(u32 self) {
    return !self ? U32_BITS : (u32)__builtin_ctz(self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 u32_leading_zeros(u32 self) {
    return !self ? U32_BITS : (u32)__builtin_clz(self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 u32_trailing_ones(u32 self) {
    return u32_trailing_zeros(~self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 u32_leading_ones(u32 self) {
    return u32_leading_zeros(~self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 u64_trailing_zeros(u64 self) {
    return !self ? U64_BITS : (u32)__builtin_ctzl(self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 u64_leading_zeros(u64 self) {
    return !self ? U64_BITS : (u32)__builtin_clzl(self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 u64_trailing_ones(u64 self) {
    return u64_trailing_zeros(~self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 u64_leading_ones(u64 self) {
    return u64_leading_zeros(~self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 usize_trailing_zeros(usize self) {
    return !self ? USIZE_BITS : (u32)__builtin_ctzl(self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 usize_leading_zeros(usize self) {
    return !self ? USIZE_BITS : (u32)__builtin_clzl(self) - (U64_BITS - USIZE_BITS);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 usize_trailing_ones(usize self) {
    return usize_trailing_zeros(~self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 usize_leading_ones(usize self) {
    return usize_leading_zeros(~self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 i8_trailing_zeros(i8 self) {
    return u8_trailing_zeros((u8)self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 i8_leading_zeros(i8 self) {
    return u8_leading_zeros((u8)self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 i8_trailing_ones(i8 self) {
    return u8_trailing_ones((u8)self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 i8_leading_ones(i8 self) {
    return u8_leading_ones((u8)self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 i16_trailing_zeros(i16 self) {
    return u16_trailing_zeros((u16)self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 i16_leading_zeros(i16 self) {
    return u16_leading_zeros((u16)self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 i16_trailing_ones(i16 self) {
    return u16_trailing_ones((u16)self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 i16_leading_ones(i16 self) {
    return u16_leading_ones((u16)self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 i32_trailing_zeros(i32 self) {
    return u32_trailing_zeros((u32)self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 i32_leading_zeros(i32 self) {
    return u32_leading_zeros((u32)self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 i32_trailing_ones(i32 self) {
    return u32_trailing_ones((u32)self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 i32_leading_ones(i32 self) {
    return u32_leading_ones((u32)self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 i64_trailing_zeros(i64 self) {
    return u64_trailing_zeros((u64)self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 i64_leading_zeros(i64 self) {
    return u64_leading_zeros((u64)self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 i64_trailing_ones(i64 self) {
    return u64_trailing_ones((u64)self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 i64_leading_ones(i64 self) {
    return u64_leading_ones((u64)self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 isize_trailing_zeros(isize self) {
    return usize_trailing_zeros((usize)self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 isize_leading_zeros(isize self) {
    return usize_leading_zeros((usize)self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 isize_trailing_ones(isize self) {
    return usize_trailing_ones((usize)self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 isize_leading_ones(isize self) {
    return usize_leading_ones((usize)self);
}

#ifdef KETTLE_HAS_INT128

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 u128_trailing_zeros(u128 self) {
    const u64 lo64 = (u64)self;
    const u64 hi64 = (u64)(self >> 64);
    return !lo64 ? U64_BITS + u64_trailing_zeros(hi64) : __builtin_ctzl(lo64);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 u128_leading_zeros(u128 self) {
    const u64 lo64 = (u64)self;
    const u64 hi64 = (u64)(self >> 64);
    return !hi64 ? U64_BITS + u64_leading_zeros(lo64) : __builtin_clzl(hi64);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 u128_trailing_ones(u128 self) {
    return u128_trailing_zeros(~self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 u128_leading_ones(u128 self) {
    return u128_leading_zeros(~self);
}

// Returns the number of trailing clear bits in the value.
KETTLE_VALUE u32 i128_trailing_zeros(i128 self) {
    return u128_trailing_zeros((u128)self);
}

// Returns the number of leading clear bits in the value.
KETTLE_VALUE u32 i128_leading_zeros(i128 self) {
    return u128_leading_zeros((u128)self);
}

// Returns the number of trailing set bits in the value.
KETTLE_VALUE u32 i128_trailing_ones(i128 self) {
    return u128_trailing_ones((u128)self);
}

// Returns the number of leading set bits in the value.
KETTLE_VALUE u32 i128_leading_ones(i128 self) {
    return u128_leading_ones((u128)self);
}

#endif
