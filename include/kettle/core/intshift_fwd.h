// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

static_assert(-2 >> 1 == -1, "libkettle relies on SAR for right shift on signed integers");

// Performs a logical left shift.
KETTLE_VALUE u8 u8_shl(u8 self, u32 shift) {
    return shift >= U8_BITS ? 0 : self << shift;
}

// Performs a logical right shift.
KETTLE_VALUE u8 u8_shr(u8 self, u32 shift) {
    return shift >= U8_BITS ? 0 : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE u16 u16_shl(u16 self, u32 shift) {
    return shift >= U16_BITS ? 0 : self << shift;
}

// Performs a logical right shift.
KETTLE_VALUE u16 u16_shr(u16 self, u32 shift) {
    return shift >= U16_BITS ? 0 : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE u32 u32_shl(u32 self, u32 shift) {
    return shift >= U32_BITS ? 0 : self << shift;
}

// Performs a logical right shift.
KETTLE_VALUE u32 u32_shr(u32 self, u32 shift) {
    return shift >= U32_BITS ? 0 : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE u64 u64_shl(u64 self, u32 shift) {
    return shift >= U64_BITS ? 0 : self << shift;
}

// Performs a logical right shift.
KETTLE_VALUE u64 u64_shr(u64 self, u32 shift) {
    return shift >= U64_BITS ? 0 : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE usize usize_shl(usize self, u32 shift) {
    return shift >= USIZE_BITS ? 0 : self << shift;
}

// Performs a logical right shift.
KETTLE_VALUE usize usize_shr(usize self, u32 shift) {
    return shift >= USIZE_BITS ? 0 : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE i8 i8_shl(i8 self, u32 shift) {
    return u8_to_i8(u8_shl((u8)self, shift));
}

// Performs a logical right shift.
KETTLE_VALUE i8 i8_shr(i8 self, u32 shift) {
    return u8_to_i8(u8_shr((u8)self, shift));
}

// Performs an arithmetic right shift.
KETTLE_VALUE i8 i8_sar(i8 self, u32 shift) {
    return shift >= I8_BITS ? (self < 0 ? -1 : 0) : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE i16 i16_shl(i16 self, u32 shift) {
    return u16_to_i16(u16_shl((u16)self, shift));
}

// Performs a logical right shift.
KETTLE_VALUE i16 i16_shr(i16 self, u32 shift) {
    return u16_to_i16(u16_shr((u16)self, shift));
}

// Performs an arithmetic right shift.
KETTLE_VALUE i16 i16_sar(i16 self, u32 shift) {
    return shift >= I16_BITS ? (self < 0 ? -1 : 0) : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE i32 i32_shl(i32 self, u32 shift) {
    return u32_to_i32(u32_shl((u32)self, shift));
}

// Performs a logical right shift.
KETTLE_VALUE i32 i32_shr(i32 self, u32 shift) {
    return u32_to_i32(u32_shr((u32)self, shift));
}

// Performs an arithmetic right shift.
KETTLE_VALUE i32 i32_sar(i32 self, u32 shift) {
    return shift >= I32_BITS ? (self < 0 ? -1 : 0) : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE i64 i64_shl(i64 self, u32 shift) {
    return u64_to_i64(u64_shl((u64)self, shift));
}

// Performs a logical right shift.
KETTLE_VALUE i64 i64_shr(i64 self, u32 shift) {
    return u64_to_i64(u64_shr((u64)self, shift));
}

// Performs an arithmetic right shift.
KETTLE_VALUE i64 i64_sar(i64 self, u32 shift) {
    return shift >= I64_BITS ? (self < 0 ? -1 : 0) : self >> shift;
}

// Performs a logical left shift.
KETTLE_VALUE isize isize_shl(isize self, u32 shift) {
    return usize_to_isize(usize_shl((usize)self, shift));
}

// Performs a logical right shift.
KETTLE_VALUE isize isize_shr(isize self, u32 shift) {
    return usize_to_isize(usize_shr((usize)self, shift));
}

// Performs an arithmetic right shift.
KETTLE_VALUE isize isize_sar(isize self, u32 shift) {
    return shift >= ISIZE_BITS ? (self < 0 ? -1 : 0) : self >> shift;
}
