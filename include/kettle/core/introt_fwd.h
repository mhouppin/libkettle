// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE u8 u8_rotate_left(u8 self, u32 shift) {
    shift %= U8_BITS;
    return !shift ? self : (self << shift) | (self >> (U8_BITS - shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE u8 u8_rotate_right(u8 self, u32 shift) {
    shift %= U8_BITS;
    return !shift ? self : (self >> shift) | (self << (U8_BITS - shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE u16 u16_rotate_left(u16 self, u32 shift) {
    shift %= U16_BITS;
    return !shift ? self : (self << shift) | (self >> (U16_BITS - shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE u16 u16_rotate_right(u16 self, u32 shift) {
    shift %= U16_BITS;
    return !shift ? self : (self >> shift) | (self << (U16_BITS - shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE u32 u32_rotate_left(u32 self, u32 shift) {
    shift %= U32_BITS;
    return !shift ? self : (self << shift) | (self >> (U32_BITS - shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE u32 u32_rotate_right(u32 self, u32 shift) {
    shift %= U32_BITS;
    return !shift ? self : (self >> shift) | (self << (U32_BITS - shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE u64 u64_rotate_left(u64 self, u32 shift) {
    shift %= U64_BITS;
    return !shift ? self : (self << shift) | (self >> (U64_BITS - shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE u64 u64_rotate_right(u64 self, u32 shift) {
    shift %= U64_BITS;
    return !shift ? self : (self >> shift) | (self << (U64_BITS - shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE usize usize_rotate_left(usize self, u32 shift) {
    shift %= USIZE_BITS;
    return !shift ? self : (self << shift) | (self >> (USIZE_BITS - shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE usize usize_rotate_right(usize self, u32 shift) {
    shift %= USIZE_BITS;
    return !shift ? self : (self >> shift) | (self << (USIZE_BITS - shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE i8 i8_rotate_left(i8 self, u32 shift) {
    return u8_to_i8(u8_rotate_left((u8)self, shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE i8 i8_rotate_right(i8 self, u32 shift) {
    return u8_to_i8(u8_rotate_right((u8)self, shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE i16 i16_rotate_left(i16 self, u32 shift) {
    return u16_to_i16(u16_rotate_left((u16)self, shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE i16 i16_rotate_right(i16 self, u32 shift) {
    return u16_to_i16(u16_rotate_right((u16)self, shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE i32 i32_rotate_left(i32 self, u32 shift) {
    return u32_to_i32(u32_rotate_left((u32)self, shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE i32 i32_rotate_right(i32 self, u32 shift) {
    return u32_to_i32(u32_rotate_right((u32)self, shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE i64 i64_rotate_left(i64 self, u32 shift) {
    return u64_to_i64(u64_rotate_left((u64)self, shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE i64 i64_rotate_right(i64 self, u32 shift) {
    return u64_to_i64(u64_rotate_right((u64)self, shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE isize isize_rotate_left(isize self, u32 shift) {
    return usize_to_isize(usize_rotate_left((usize)self, shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE isize isize_rotate_right(isize self, u32 shift) {
    return usize_to_isize(usize_rotate_right((usize)self, shift));
}

#ifdef KETTLE_HAS_INT128

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE u128 u128_rotate_left(u128 self, u32 shift) {
    shift %= U128_BITS;
    return !shift ? self : (self << shift) | (self >> (U128_BITS - shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE u128 u128_rotate_right(u128 self, u32 shift) {
    shift %= U128_BITS;
    return !shift ? self : (self >> shift) | (self << (U128_BITS - shift));
}

// Shifts the bits to the left by a specified amount, wrapping the truncated bits to the end of the
// resulting integer.
KETTLE_VALUE i128 i128_rotate_left(i128 self, u32 shift) {
    return u128_to_i128(u128_rotate_left((u128)self, shift));
}

// Shifts the bits to the right by a specified amount, wrapping the truncated bits to the beginning
// of the resulting integer.
KETTLE_VALUE i128 i128_rotate_right(i128 self, u32 shift) {
    return u128_to_i128(u128_rotate_right((u128)self, shift));
}

#endif
