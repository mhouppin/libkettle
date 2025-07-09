// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Reverses the order of bytes in the integer.
KETTLE_VALUE u8 u8_swap_bytes(u8 self) {
    return self;
}

// Reverses the order of bits in the integer.
KETTLE_VALUE u8 u8_reverse_bits(u8 self) {
    const u8 mask1 = 0b01010101u;
    const u8 mask2 = 0b00110011u;
    const u8 mask4 = 0b00001111u;
    self = u8_swap_bytes(self);
    self = ((self & mask1) << 1) | ((self & ~mask1) >> 1);
    self = ((self & mask2) << 2) | ((self & ~mask2) >> 2);
    self = ((self & mask4) << 4) | ((self & ~mask4) >> 4);
    return self;
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE u16 u16_swap_bytes(u16 self) {
    return __builtin_bswap16(self);
}

// Reverses the order of bits in the integer.
KETTLE_VALUE u16 u16_reverse_bits(u16 self) {
    const u16 bit0 = 0x0101u;
    const u16 mask1 = 0b01010101u * bit0;
    const u16 mask2 = 0b00110011u * bit0;
    const u16 mask4 = 0b00001111u * bit0;
    self = u16_swap_bytes(self);
    self = ((self & mask1) << 1) | ((self & ~mask1) >> 1);
    self = ((self & mask2) << 2) | ((self & ~mask2) >> 2);
    self = ((self & mask4) << 4) | ((self & ~mask4) >> 4);
    return self;
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE u32 u32_swap_bytes(u32 self) {
    return __builtin_bswap32(self);
}

// Reverses the order of bits in the integer.
KETTLE_VALUE u32 u32_reverse_bits(u32 self) {
    const u32 bit0 = 0x01010101u;
    const u32 mask1 = 0b01010101u * bit0;
    const u32 mask2 = 0b00110011u * bit0;
    const u32 mask4 = 0b00001111u * bit0;
    self = u32_swap_bytes(self);
    self = ((self & mask1) << 1) | ((self & ~mask1) >> 1);
    self = ((self & mask2) << 2) | ((self & ~mask2) >> 2);
    self = ((self & mask4) << 4) | ((self & ~mask4) >> 4);
    return self;
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE u64 u64_swap_bytes(u64 self) {
    return __builtin_bswap64(self);
}

// Reverses the order of bits in the integer.
KETTLE_VALUE u64 u64_reverse_bits(u64 self) {
    const u64 bit0 = 0x0101010101010101ul;
    const u64 mask1 = 0b01010101ul * bit0;
    const u64 mask2 = 0b00110011ul * bit0;
    const u64 mask4 = 0b00001111ul * bit0;
    self = u64_swap_bytes(self);
    self = ((self & mask1) << 1) | ((self & ~mask1) >> 1);
    self = ((self & mask2) << 2) | ((self & ~mask2) >> 2);
    self = ((self & mask4) << 4) | ((self & ~mask4) >> 4);
    return self;
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE usize usize_swap_bytes(usize self) {
    return (usize)(USIZE_BITS == U64_BITS ? u64_swap_bytes(self) : u32_swap_bytes(self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE usize usize_reverse_bits(usize self) {
    return (usize)(USIZE_BITS == U64_BITS ? u64_reverse_bits(self) : u32_reverse_bits(self));
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE i8 i8_swap_bytes(i8 self) {
    return u8_to_i8(u8_swap_bytes((u8)self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE i8 i8_reverse_bits(i8 self) {
    return u8_to_i8(u8_reverse_bits((u8)self));
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE i16 i16_swap_bytes(i16 self) {
    return u16_to_i16(u16_swap_bytes((u16)self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE i16 i16_reverse_bits(i16 self) {
    return u16_to_i16(u16_reverse_bits((u16)self));
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE i32 i32_swap_bytes(i32 self) {
    return u32_to_i32(u32_swap_bytes((u32)self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE i32 i32_reverse_bits(i32 self) {
    return u32_to_i32(u32_reverse_bits((u32)self));
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE i64 i64_swap_bytes(i64 self) {
    return u64_to_i64(u64_swap_bytes((u64)self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE i64 i64_reverse_bits(i64 self) {
    return u64_to_i64(u64_reverse_bits((u64)self));
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE isize isize_swap_bytes(isize self) {
    return usize_to_isize(usize_swap_bytes((usize)self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE isize isize_reverse_bits(isize self) {
    return usize_to_isize(usize_reverse_bits((usize)self));
}

#ifdef KETTLE_HAS_INT128

// Reverses the order of bytes in the integer.
KETTLE_VALUE u128 u128_swap_bytes(u128 self) {
    const u64 lo64 = (u64)self;
    const u64 hi64 = (u64)(self >> 64);
    return ((u128)u64_swap_bytes(lo64) << 64) | (u128)u64_swap_bytes(hi64);
}

// Reverses the order of bits in the integer.
KETTLE_VALUE u128 u128_reverse_bits(u128 self) {
    const u64 lo64 = (u64)self;
    const u64 hi64 = (u64)(self >> 64);
    return ((u128)u64_reverse_bits(lo64) << 64) | (u128)u64_reverse_bits(hi64);
}

// Reverses the order of bytes in the integer.
KETTLE_VALUE i128 i128_swap_bytes(i128 self) {
    return u128_to_i128(u128_swap_bytes((u128)self));
}

// Reverses the order of bits in the integer.
KETTLE_VALUE i128 i128_reverse_bits(i128 self) {
    return u128_to_i128(u128_reverse_bits((u128)self));
}

#endif
