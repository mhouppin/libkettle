// RESERVED FOR INTERNAL USE ONLY. Do not include this file directly.

// Casts the provided value to a signed integer of the same size.
KETTLE_VALUE i8 u8_to_i8(u8 self) {
    return *(i8 *)&self;
}

// Casts the provided value to a signed integer of the same size.
KETTLE_VALUE i16 u16_to_i16(u16 self) {
    return *(i16 *)&self;
}

// Casts the provided value to a signed integer of the same size.
KETTLE_VALUE i32 u32_to_i32(u32 self) {
    return *(i32 *)&self;
}

// Casts the provided value to a signed integer of the same size.
KETTLE_VALUE i64 u64_to_i64(u64 self) {
    return *(i64 *)&self;
}

// Casts the provided value to a signed integer of the same size.
KETTLE_VALUE isize usize_to_isize(usize self) {
    return *(isize *)&self;
}

#ifdef KETTLE_HAS_INT128

// Casts the provided value to a signed integer of the same size.
KETTLE_VALUE i128 u128_to_i128(u128 self) {
    return *(i128 *)&self;
}

#endif
